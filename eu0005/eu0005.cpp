#include"eu0005.h"

void eu0005 :: solucion(){
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

void eu0005 :: printsolution(){
  std::cout << "Euler 0005\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
