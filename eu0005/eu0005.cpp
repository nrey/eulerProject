#include"eu0005.h"

void eu0005 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  flag_1 = true;

  // ---------------------------------------------------- //

  while( flag_1 ){
    output = output + 2520;
    temp_1 = 11;
    flag_2 = true;
    while( flag_2 & (temp_1 <= 20) ){
      if( output % temp_1 != 0 ){
        flag_2 = false;
        continue;
      }
      temp_1++;
      flag_2 = true;
    }
    if( temp_1 == 21 ){
      flag_1 = false;
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0005 :: printsolution(){
  std::cout << "Euler 0005\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
