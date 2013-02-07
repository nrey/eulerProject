#include"eu0048.h"

void eu0048 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  temp_4 = 0;

  // ---------------------------------------------------- //

  for( unsigned long long i=1; i<=1000; i++ ){
    temp_2 = 1;
    for( unsigned long long j=1; j<=i; j++ ){
      temp_2 = temp_2*i;
      temp_2 = temp_2%10000000000;
    }
    temp_4 = temp_4 + temp_2;
    temp_4 = temp_4%10000000000;
  }
  output = temp_4;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0048 :: printsolution(){
  std::cout << "Euler 0048\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
