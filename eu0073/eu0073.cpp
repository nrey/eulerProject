#include"eu0073.h"

void eu0073 :: solucion(){
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

void eu0073 :: printsolution(){
  std::cout << "Euler 0073\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
