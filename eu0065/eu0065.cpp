#include"eu0065.h"

void eu0065 :: solucion(){
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

void eu0065 :: printsolution(){
  std::cout << "Euler 0065\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
