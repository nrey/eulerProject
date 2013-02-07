#include"eu0039.h"

void eu0039 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  //FIXME How to make it more efficient ?
  temp_3 = 0;
  for( unsigned long long i=3; i<=1000; i++ ){
    temp_2 = 0;
    for( unsigned long long j=1; j<=707; j++ ){
      for( unsigned long long k=1; k<=1000; k++ ){
        if( j+k>=i ){
          break;
        }
        temp_1 = i-j-k;
        if( temp_1*temp_1 == j*j+k*k ){
          temp_2++;
        }
      }
    }
    if( temp_2 > temp_3 ){
      output = i;
      temp_3 = temp_2;
    }
  }
  
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0039 :: printsolution(){
  std::cout << "Euler 0039\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
