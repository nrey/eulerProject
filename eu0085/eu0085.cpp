#include"eu0085.h"

void eu0085 :: solucion(){
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

void eu0085 :: printsolution(){
  std::cout << "Euler 0085\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
