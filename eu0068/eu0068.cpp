#include"eu0068.h"

void eu0068 :: solucion(){
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

void eu0068 :: printsolution(){
  std::cout << "Euler 0068\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
