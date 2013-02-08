#include"eu0058.h"

void eu0058 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  temp_1 = 3;
  temp_2 = 5;
  temp_3 = 7;
  temp_4 = 9;
  temp_6 = 5; // Cantidad de numeros en las esquinas
  temp_7 = 3; // Cantidad de primos

  for( unsigned long long i=3; i<100000; i++ ){
    temp_6 = temp_6 + 4;
    temp_5 = (i-1)*2; // 4
    temp_1 = temp_4 + temp_5;
    temp_2 = temp_1 + temp_5;
    temp_3 = temp_2 + temp_5;
    temp_4 = temp_3 + temp_5;
    if( isprime(&temp_1) ){
      temp_7++;
    }
    if( isprime(&temp_2) ){
      temp_7++;
    }
    if( isprime(&temp_3) ){
      temp_7++;
    }
    if( isprime(&temp_4) ){
      temp_7++;
    }
    tedo_1 = 100*(double)temp_7/temp_6;
    if( tedo_1<10 ){
      output = 2*i-1;
      break;
    }
  }
  
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0058 :: printsolution(){
  std::cout << "Euler 0058\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
