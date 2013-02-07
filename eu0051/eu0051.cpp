#include"eu0051.h"

void eu0051 :: solucion(){
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

void eu0051 :: printsolution(){
  std::cout << "Euler 0051\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
