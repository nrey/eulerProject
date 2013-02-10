#include"eu0056.h"

void eu0056 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  unsigned int test = 1000;
  infi_1 = new NaiveInfinitePrecition(test);

  // ---------------------------------------------------- //
  
  output = 0;
  for( unsigned long long i=1; i<=100; ++i ){
    infi_1->setZeros();
    infi_1->setValue(i);
    for( long long j=1; j<100; ++j ){
      infi_1->mulInt(i);
      output = MAX(output,infi_1->sumDigi());
    }
  }
      

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0056 :: printsolution(){
  std::cout << "Euler 0056\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
