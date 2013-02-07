#include"eu0037.h"

void eu0037 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  temp_1 = 0; // Cantidad d numeros encontrados
  temp_2 = 0; // Tamano
  temp_3 = 0; // Numero de test actual

  // ---------------------------------------------------- //

  //FIXME IMPROVE CODE
  temp_2 = 1; // Tamano del primer impar
  temp_3 = 9; // Empieza en impar

  while( temp_1 < 11 ){

    temp_3 = temp_3 + 2;
    // Para q solo entren primos
    while( !isprime(&temp_3) ){
      temp_3 = temp_3 + 2;
    }

    // Para saber el tamano del numero (digitos)
    if( temp_3 >= pow(10,temp_2) ){
      temp_2 = temp_2 + 1;
    }

    temp_4 = temp_3;
    temp_5 = temp_3;
    temp_1 = temp_1 + 1;
    output = output + temp_3;
    temp_6 = 1;
    for( unsigned long long i=1; i<temp_2; i++ ){
      temp_4 = temp_4/10;
      if( !isprime(&temp_4) ){
        temp_1 = temp_1 - 1;
        output = output - temp_3;
        temp_6 = 0;
        break;
      }
      temp_7 = pow(10,temp_2-i);
      temp_5 = temp_3%temp_7;
      if( !isprime(&temp_5) ){
        temp_1 = temp_1 - 1;
        output = output - temp_3;
        temp_6 = 0;
        break;
      }
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0037 :: printsolution(){
  std::cout << "Euler 0037\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
