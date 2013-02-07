#include"eu0099.h"

void eu0099 :: solucion(){
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

void eu0099 :: printsolution(){
  std::cout << "Euler 0099\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
