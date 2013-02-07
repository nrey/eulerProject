#include"eu0058.h"

void eu0058 :: solucion(){
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

void eu0058 :: printsolution(){
  std::cout << "Euler 0058\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
