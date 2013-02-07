#include"eu0083.h"

void eu0083 :: solucion(){
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

void eu0083 :: printsolution(){
  std::cout << "Euler 0083\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
