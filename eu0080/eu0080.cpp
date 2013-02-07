#include"eu0080.h"

void eu0080 :: solucion(){
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

void eu0080 :: printsolution(){
  std::cout << "Euler 0080\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
