#include"eu0077.h"

void eu0077 :: solucion(){
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

void eu0077 :: printsolution(){
  std::cout << "Euler 0077\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
