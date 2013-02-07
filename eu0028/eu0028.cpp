#include"eu0028.h"

void eu0028 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  temp_1 = 1;
  output = 1;
  for( unsigned long long i=3; i<1001+1; i = i + 2 ){
    temp_1 = temp_1 + i*4 - 4;
    output = output + 4*temp_1-6*(i-1);
  }
  
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0028 :: printsolution(){
  std::cout << "Euler 0028\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
