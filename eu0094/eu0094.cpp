#include"eu0094.h"

void eu0094 :: solucion(){
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

void eu0094 :: printsolution(){
  std::cout << "Euler 0094\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
