#include"eu0053.h"

void eu0053 :: solucion(){
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

void eu0053 :: printsolution(){
  std::cout << "Euler 0053\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
