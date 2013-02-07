#include"eu0076.h"

void eu0076 :: solucion(){
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

void eu0076 :: printsolution(){
  std::cout << "Euler 0076\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
