#include"eu0109.h"

void eu0109 :: solucion(){
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

void eu0109 :: printsolution(){
  std::cout << "Euler 0109\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
