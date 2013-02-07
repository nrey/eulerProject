#include"eu0061.h"

void eu0061 :: solucion(){
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

void eu0061 :: printsolution(){
  std::cout << "Euler 0061\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
