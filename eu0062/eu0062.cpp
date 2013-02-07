#include"eu0062.h"

void eu0062 :: solucion(){
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

void eu0062 :: printsolution(){
  std::cout << "Euler 0062\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
