#include"eu0090.h"

void eu0090 :: solucion(){
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

void eu0090 :: printsolution(){
  std::cout << "Euler 0090\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
