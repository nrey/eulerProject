#include"eu0054.h"

void eu0054 :: solucion(){
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

void eu0054 :: printsolution(){
  std::cout << "Euler 0054\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
