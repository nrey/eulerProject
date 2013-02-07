#include"eu0069.h"

void eu0069 :: solucion(){
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

void eu0069 :: printsolution(){
  std::cout << "Euler 0069\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
