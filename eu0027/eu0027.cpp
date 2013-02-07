#include"eu0027.h"

void eu0027 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  long long temp_1_sig;
  long long temp_2_sig;

  // ---------------------------------------------------- //

  temp_2 = 0; // Cantidad maxima de primos consecutivos
  temp_3 = 1; // Bandera de salida, cuando se encuentra alguno q no es primo en la secuencia
  temp_5 = 0; // Almacena la cantidad de prmos consecutivos record
  for( long i=2; i<1000; i++ ){ // Esto es b
    temp_4 = i; // Para no tener problemas con el tipo de variable
    if( isprime(&temp_4) ){
      for( long j=-999; j<1000; j++ ){ // Esto es a
        temp_2 = 1; // Como el b es primo, entonces ya llevamos el primero por defecto
        temp_3 = 1; // Esto es para tner activada la bandera antes de comenzar con la prueba del polinomio
        if( i+j+1 >= 0 ){
          temp_2_sig = 1; // Esta seria n
          temp_1 = 1 + j + i;
          if( isprime(&temp_1) ){
            temp_2 = temp_2 + 1;
            temp_2_sig = temp_2_sig + 1;
            temp_1_sig = temp_2_sig*temp_2_sig + j*temp_2_sig + i;
            while( temp_3 ){
              if( temp_1_sig > 0 ){
                temp_1 = temp_1_sig;
                if( isprime(&temp_1) ){
                  temp_2 = temp_2 + 1;
                  temp_2_sig = temp_2_sig + 1;
                  temp_1_sig = temp_2_sig*temp_2_sig + j*temp_2_sig + i;
                }
                else{
                  temp_3 = 0;
                }
              }
              else{
                temp_3 = 0;
              }
            }
          }
        }
        if( temp_2 > temp_5 ){
          temp_5 = temp_2;
//           if( j<0 )
//             temp_6 = -j;
          output = i*j;
        }
      }
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0027 :: printsolution(){
  std::cout << "Euler 0027\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
