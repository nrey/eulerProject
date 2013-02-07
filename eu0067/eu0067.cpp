#include"eu0067.h"

void eu0067 :: solucion(){
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

void eu0067 :: printsolution(){
  std::cout << "Euler 0067\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
