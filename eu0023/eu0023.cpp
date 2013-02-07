#include"eu0023.h"

void eu0023 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[6965];
  tem_1d_2 = new unsigned long long[28124];

  // ---------------------------------------------------- //

  //FIXME how to make it faster ?
  temp_1 = 0;
  tem_1d_2[0] = 0;
  for( unsigned long long i=12; i<=28123; i++ ){
    tem_1d_2[i] = 0;
    temp_2 = sumprop( i );
    if( temp_2 > i ){
      tem_1d_1[temp_1] = i;
      temp_1 ++;
    }
  }

  for( unsigned long long i=0; i<6965; i++ ){
    for( unsigned long long j=i; j<6965; j++ ){
      temp_2 = tem_1d_1[i]+tem_1d_1[j];
      if( temp_2 < 28124 ){
        tem_1d_2[temp_2] = 1;
      }

    }
  }

  for( long i=28123; i>0; i-- ){

    if( tem_1d_2[i] == 0 ){
      output = output+i;
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0023 :: printsolution(){
  std::cout << "Euler 0023\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
