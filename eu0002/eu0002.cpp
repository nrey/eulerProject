#include"eu0002.h"

void eu0002 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  temp_1 = 1;
  temp_2 = 2;
  temp_3 = 3;
  output = 2;
  while(1){
    temp_1 = temp_3 + temp_2;
    temp_2 = temp_1 + temp_3;
    temp_3 = temp_1 + temp_2;
    if( temp_2>4000000 ){
      break;
    }
    output += temp_2;
  }
  
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0002 :: printsolution(){
  std::cout << "Euler 0002\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
