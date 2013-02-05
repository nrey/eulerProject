#include"eu0017.h"

void eu0017 :: solucion(){
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

void eu0017 :: printsolution(){
  std::cout << "Euler 0017\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
