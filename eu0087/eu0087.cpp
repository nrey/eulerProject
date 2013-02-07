#include"eu0087.h"

void eu0087 :: solucion(){
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

void eu0087 :: printsolution(){
  std::cout << "Euler 0087\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
