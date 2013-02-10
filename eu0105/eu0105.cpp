#include"eu0105.h"

void eu0105 :: solucion(){
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

void eu0105 :: printsolution(){
  std::cout << "Euler 0105\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
