#include"eu0110.h"

void eu0110 :: solucion(){
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

void eu0110 :: printsolution(){
  std::cout << "Euler 0110\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
