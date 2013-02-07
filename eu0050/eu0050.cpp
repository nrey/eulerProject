#include"eu0050.h"

void eu0050 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[78498];

  // ---------------------------------------------------- //

  tem_1d_1[0] = 2; // Primo inicial
  temp_2 = 1; // Numero de primos iniciales

  for( unsigned long long i=3; i<1000000;i=i+2){
    if( isprime(&i)){
      tem_1d_1[temp_2] = i;
      temp_2++;
    }
  }

  temp_6 = 21; // Tamano minimo a probar
  temp_10 = 0; // Punto inicial

  temp_1 = 0; // Suma total
  temp_2 = 0; // Cantidad de datos en la suma

  while( temp_1 < 1000000 && temp_2<78498 ){
    temp_1 = temp_1 + tem_1d_1[temp_2]; // Suma total
    temp_2++;
  }
  temp_4 = temp_2 - temp_10; // cantidad de datos en la suma
  temp_3 = temp_2 - 1; // Punto final
  temp_1 = temp_1 - tem_1d_1[temp_3]; // Resta el ultimo pues salio mayor q 1'000000

  while( temp_4>temp_6 ){

    // Corto por izquierda
    temp_7 = temp_1; // Guardo la suma total
    temp_5 = temp_10; // comenzamos a restar desde el primero
    temp_11 = temp_4; // Tamano de la suma
    while( !isprime(&temp_7) && temp_11>temp_6 ){

      temp_7 = temp_7 - tem_1d_1[temp_5];
      temp_5++;
      temp_11 = temp_11 - 1;

    }
    temp_13 = temp_7;
    temp_8 = temp_11;

    // Corto por derecha
    temp_7 = temp_1; // Guardo la suma total
    temp_5 = temp_3; // comenzamos a restar desde el ultimo
    temp_11 = temp_4; // Tamano de la suma
    while( !isprime(&temp_7) && temp_11>temp_6 ){

      temp_7 = temp_7 - tem_1d_1[temp_5];
      temp_5++;
      temp_11 = temp_11 - 1;
    }
    temp_14 = temp_7;

    if( temp_8<temp_11 ){
      temp_6 = temp_11; // Escogemos el maximo
      output = temp_14;
    }
    else{
      temp_6 = temp_8;
      output = temp_13;
    }

    temp_3 = temp_3 + 1; // Nuevo punto final
    temp_7 = temp_1 + tem_1d_1[temp_3]; // Anadimos el nuevo punto final
    temp_9 = temp_10;
    while( temp_7 > 1000000 ){
      temp_7 = temp_7 - tem_1d_1[temp_9];
      temp_9++;
    }

    temp_10 = temp_9;
    temp_4 = temp_3-temp_10+1;


  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0050 :: printsolution(){
  std::cout << "Euler 0050\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
