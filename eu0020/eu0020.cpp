#include"eu0020.h"

void eu0020 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  unsigned int test = 1000;
  infi_1 = new NaiveInfinitePrecition(test);

  // ---------------------------------------------------- //

  infi_1->setZeros();
  infi_1->setValue(0,1);

  for( unsigned long long i=1; i<=100; ++i ){
    infi_1->mulInt(i);
  }
  output = infi_1->sumDigi();
  delete infi_1;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0020 :: printsolution(){
  std::cout << "Euler 0020\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
