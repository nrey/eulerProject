#include"eu0104.h"

void eu0104 :: solucion(){
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

void eu0104 :: printsolution(){
  std::cout << "Euler 0104\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
