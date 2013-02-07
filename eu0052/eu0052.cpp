#include"eu0052.h"

void eu0052 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[100];
  tem_1d_2 = new unsigned long long[100];

  // ---------------------------------------------------- //

  temp_9 = 2; // Tamano
  temp_10 = 16; // Limite para este tamano
  temp_12 = 10; // Valor minimo en este rango 10 - 16
  temp_13 = 1; // Bandera para salir
  while(1&&temp_13){
    temp_10 = temp_10*10 + 6;
    temp_9++;
    temp_12 = pow(10,temp_9);
    while( temp_12 <= temp_10 ){
      temp_12++;
      temp_1 = temp_12;
      temp_2 = 2*temp_12;
      temp_3 = 3*temp_12;
      temp_4 = 4*temp_12;
      temp_5 = 5*temp_12;
      temp_6 = 6*temp_12;
      digits( &temp_1, temp_9, tem_1d_1 );
      digits( &temp_2, temp_9, tem_1d_2 );
      if( !isPermuDigits( tem_1d_1, tem_1d_2, temp_9 ) ){
        continue;
      }
      digits( &temp_3, temp_9, tem_1d_2 );
      if( !isPermuDigits( tem_1d_1, tem_1d_2, temp_9 ) ){
        continue;
      }
      digits( &temp_4, temp_9, tem_1d_2 );
      if( !isPermuDigits( tem_1d_1, tem_1d_2, temp_9 ) ){
        continue;
      }
      digits( &temp_5, temp_9, tem_1d_2 );
      if( !isPermuDigits( tem_1d_1, tem_1d_2, temp_9 ) ){
        continue;
      }
      digits( &temp_6, temp_9, tem_1d_2 );
      if( isPermuDigits( tem_1d_1, tem_1d_2, temp_9 ) ){
        output = temp_1;
        temp_13 = 0;
        break;
      }
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0052 :: printsolution(){
  std::cout << "Euler 0052\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
