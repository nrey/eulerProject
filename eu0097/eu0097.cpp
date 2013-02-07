#include"eu0097.h"

void eu0097 :: solucion(){
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

void eu0097 :: printsolution(){
  std::cout << "Euler 0097\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
