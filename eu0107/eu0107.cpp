#include"eu0107.h"

void eu0107 :: solucion(){
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

void eu0107 :: printsolution(){
  std::cout << "Euler 0107\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
