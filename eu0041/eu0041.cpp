#include"eu0041.h"

void eu0041 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[10];

  // ---------------------------------------------------- //

  // FIXME make this code more efficient
  for( unsigned long long i=1; i<10000000; i=i+2 ){

    if( i%5==0 ){
      continue;
    }

    temp_4=1;
    temp_1 = digits( &i, tem_1d_1 );
    for(unsigned long long j=0; j<temp_1; j++ ){
      if( tem_1d_1[j]>temp_1 || tem_1d_1[j]==0 ){
        temp_4=0;
        break;
      }
      for(unsigned long long k=0; k<temp_1; k++ ){
        if( k == j ){
          continue;
        }
        if( tem_1d_1[j] == tem_1d_1[k] ){
          temp_4=0;
          break;
        }
      }
    }


    if( temp_4 == 1 ){
      if( isprime(&i) ){
        if( i>output ){
          output = i;
        }
      }
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0041 :: printsolution(){
  std::cout << "Euler 0041\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
