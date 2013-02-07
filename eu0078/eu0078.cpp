#include"eu0078.h"

void eu0078 :: solucion(){
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

void eu0078 :: printsolution(){
  std::cout << "Euler 0078\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
