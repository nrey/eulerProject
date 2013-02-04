#include"eu0006.h"

void eu0006 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  for( unsigned int i=1; i<100; i++ ){
    temp_1 = 0;
    for( unsigned int j=i+1; j<101; j++ ){
      temp_1 += j;
    }
    output += i*temp_1;
  }
  output = output*2;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0006 :: printsolution(){
  std::cout << "Euler 0006\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
