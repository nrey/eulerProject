#include"eu0014.h"

void eu0014 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  temp_3 = 1;
  for( unsigned long long i=2; i<1000000; i++ ){
    temp_2 = i;
    temp_1 = 1;
    while( temp_2 != 1 ){
      if( temp_2 % 2 == 0 ){
        temp_2 = temp_2/2;
        temp_1++;
      }
      else{
        temp_2 = 3*temp_2+1;
        temp_1++;
      }
    }
    if( temp_1>temp_3 ){
      temp_3 = temp_1;
      output = i;
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0014 :: printsolution(){
  std::cout << "Euler 0014\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
