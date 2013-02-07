#include"eu0089.h"

void eu0089 :: solucion(){
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

void eu0089 :: printsolution(){
  std::cout << "Euler 0089\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
