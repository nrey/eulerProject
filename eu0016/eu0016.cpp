#include"eu0016.h"

void eu0016 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  unsigned int test = 1000;
  infi_1 = new NaiveInfinitePrecition(test);

  // ---------------------------------------------------- //

  infi_1->setZeros();
  infi_1->setValue(0,1);

  for( unsigned long long i=1; i<=1000; ++i ){
    infi_1->mul(2);
  }
  output = infi_1->sumDigi();
  delete infi_1;
  
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0016 :: printsolution(){
  std::cout << "Euler 0016\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
