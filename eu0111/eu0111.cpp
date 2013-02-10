#include"eu0111.h"

void eu0111 :: solucion(){
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

void eu0111 :: printsolution(){
  std::cout << "Euler 0111\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
