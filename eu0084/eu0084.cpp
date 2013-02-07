#include"eu0084.h"

void eu0084 :: solucion(){
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

void eu0084 :: printsolution(){
  std::cout << "Euler 0084\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
