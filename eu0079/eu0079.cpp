#include"eu0079.h"

void eu0079 :: solucion(){
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

void eu0079 :: printsolution(){
  std::cout << "Euler 0079\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
