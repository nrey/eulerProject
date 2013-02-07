#include"eu0071.h"

void eu0071 :: solucion(){
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

void eu0071 :: printsolution(){
  std::cout << "Euler 0071\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
