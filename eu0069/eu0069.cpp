#include"eu0069.h"

void eu0069 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  temp_2 = 10; // Cantidad maxima de primos en un determinado numero
  tem_1d_1 = new unsigned long long[100000];
  tem_1d_2 = new unsigned long long[temp_2];
  tem_1d_3 = new unsigned long long[temp_2];

  // ---------------------------------------------------- //

  //FIXME understand the code
  tem_1d_1[0] = 2;
  temp_1 = 1;
  for( unsigned long long i=3; i<1000020; i=i+2 ){ // Calculo los primos 
    if( isprime(&i) ){
      tem_1d_1[temp_1] = i;
      temp_1++;
    }
  }

  tedo_2 = 0;
  for( unsigned long long i=2; i<=1000000; i++ ){
    descoprimos( i, tem_1d_1, temp_1, tem_1d_2, tem_1d_3, temp_2, &temp_3 ); // encuentro los factores primos del numero
    tedo_1 = 1;
    for( unsigned long long j=0; j<temp_3; j++ ){ // Calculo el valor de la funcion n/phi
      tedo_1 = tedo_1*tem_1d_2[j]/(tem_1d_2[j]-1);
    }
    if( tedo_2<tedo_1 ){ // La salida es equivalente al maximo
      tedo_2 = tedo_1;
      temp_5 = i;
    }
  }
  output = temp_5;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0069 :: printsolution(){
  std::cout << "Euler 0069\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
