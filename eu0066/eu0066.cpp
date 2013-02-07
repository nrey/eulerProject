#include"eu0066.h"

void eu0066 :: solucion(){
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

void eu0066 :: printsolution(){
  std::cout << "Euler 0066\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
