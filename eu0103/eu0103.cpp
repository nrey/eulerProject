#include"eu0103.h"

void eu0103 :: solucion(){
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

void eu0103 :: printsolution(){
  std::cout << "Euler 0103\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
