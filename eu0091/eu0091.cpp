#include"eu0091.h"

void eu0091 :: solucion(){
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

void eu0091 :: printsolution(){
  std::cout << "Euler 0091\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
