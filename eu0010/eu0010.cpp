#include"eu0010.h"

void eu0010 :: solucion(){
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

void eu0010 :: printsolution(){
  std::cout << "Euler 0010\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
