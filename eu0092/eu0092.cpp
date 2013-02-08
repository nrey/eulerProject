#include"eu0092.h"

void eu0092 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[100];

  // ---------------------------------------------------- //

  //FIXME understand the code
  temp_3 = 0;
  for( unsigned long long i=2; i<10000000; i++ ){
    temp_2 = i;
    while( temp_2!=89 && temp_2!=1 ){
      temp_1 = digits( &temp_2, tem_1d_1 );
      temp_2 = 0;
      for( unsigned long long j=0; j<temp_1; j++ ){
        temp_2 = temp_2 + tem_1d_1[j]*tem_1d_1[j];
      }
    }
    if( temp_2==89 ){
      temp_3++;
    }
  }
  output = temp_3;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0092 :: printsolution(){
  std::cout << "Euler 0092\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
