#include"eu0019.h"

void eu0019 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[12];
  tem_1d_1[0] = 31;
  tem_1d_1[1] = 28;
  tem_1d_1[2] = 31;
  tem_1d_1[3] = 30;
  tem_1d_1[4] = 31;
  tem_1d_1[5] = 30;
  tem_1d_1[6] = 31;
  tem_1d_1[7] = 31;
  tem_1d_1[8] = 30;
  tem_1d_1[9] = 31;
  tem_1d_1[10] = 30;
  tem_1d_1[11] = 31;
  temp_1 = 1; // Jan 1 1901 fue martes

  // ---------------------------------------------------- //

  for( unsigned long long i=1; i<=100; i++ ){

    if( i%4 == 0 ){
      temp_2 = 1;
    }
    else{
      temp_2 = 0;
    }
    for( unsigned long long j=0; j<12; j++ ){

      if( j == 1 ){
        temp_1 = temp_1 + tem_1d_1[j] + temp_2;
      }
      else{
        temp_1 = temp_1 + tem_1d_1[j];
      }
      temp_1 = temp_1%7;
      if( temp_1 == 6 ){
        output = output + 1;
      }
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0019 :: printsolution(){
  std::cout << "Euler 0019\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
