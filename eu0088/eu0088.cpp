#include"eu0088.h"

void eu0088 :: solucion(){
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

void eu0088 :: printsolution(){
  std::cout << "Euler 0088\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
