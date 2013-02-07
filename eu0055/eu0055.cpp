#include"eu0055.h"

void eu0055 :: solucion(){
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

void eu0055 :: printsolution(){
  std::cout << "Euler 0055\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
