#include"eu0074.h"

void eu0074 :: solucion(){
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

void eu0074 :: printsolution(){
  std::cout << "Euler 0074\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
