#include"eu0042.h"

void eu0042 :: solucion(){
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

void eu0042 :: printsolution(){
  std::cout << "Euler 0042\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
