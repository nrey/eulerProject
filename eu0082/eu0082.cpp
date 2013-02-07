#include"eu0082.h"

void eu0082 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0082 :: printsolution(){
  std::cout << "Euler 0082\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
