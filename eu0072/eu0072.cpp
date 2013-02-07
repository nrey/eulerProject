#include"eu0072.h"

void eu0072 :: solucion(){
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

void eu0072 :: printsolution(){
  std::cout << "Euler 0072\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
