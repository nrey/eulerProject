#include"eu0101.h"

void eu0101 :: solucion(){
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

void eu0101 :: printsolution(){
  std::cout << "Euler 0101\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
