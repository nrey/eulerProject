#include"eu0057.h"

void eu0057 :: solucion(){
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

void eu0057 :: printsolution(){
  std::cout << "Euler 0057\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
