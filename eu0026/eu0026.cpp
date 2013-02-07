#include"eu0026.h"

void eu0026 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  temp_6 = 2000; // Esto lo utilizo a pruba y error par aver q tan grande me sale la secuencia
  tem_1d_1 = new unsigned long long [temp_6];
  temp_7 = 0; // Para llevar el record de la secuencia mas larga

  // ---------------------------------------------------- //

  //FIXME clean the code, and rewrite it basically
  for( unsigned long long i=3; i<1000; i=i+2 ){
    // Estos test se hacen para poder eliminar la parte fija de la division, ya que ningun numero tendra los factores primos 2 ni 5, que son los q generan el patron constante en la primera parte de la secuencia.
    if( i%2!=0 && i%5!=0 ){ // sobra un test el del 2.
      temp_1 = 1; // El de arriba
      temp_2 = 1; // El que indica q no se ha encontrado secuencia repetitiva
      temp_4 = 0; // Indica la cantidad de numeros en la secuencia
      temp_5 = 0; // Indica si son los primeros digitos de la secuencia
      while( temp_2 ){
        if( temp_1 < i ){
          temp_1 = temp_1*10;
        }
        
//        temp_4 = temp_4+1;
        temp_3 = temp_1/i; // El numero de la secuencia
        temp_1 = temp_1%i; // lo q va quedando para la siguiente iteracion
        if( temp_5 == 0 ){
          if( temp_3 > 0 ){
            temp_5 = 1;
            // Guarda el primer numero de la secuencia (differente a cero)
            tem_1d_1[temp_4] = temp_3;
            temp_4 = temp_4 + 1;
          }
        }
        else if(temp_5 == 1){
          // Comprueba q el numero quepa en el espacio asignado (recordar q debe ser el doble del tamano maximo)
          if( temp_6 < temp_4+1 ){
            std::cout<<std::endl<<"La secuencia es mas grande";
            abort();
          }
          tem_1d_1[temp_4] = temp_3;
          temp_4 = temp_4 + 1;

          if( temp_4%2==0 ){ // Solo se hace la comprobacion de la secuencia si hay un numero para de numeros en la secuencia
            temp_2 = 0; // Asuminos q la secuencia si es periodica
            for( unsigned long long j=0; j<temp_4/2; j++ ){
              if( tem_1d_1[j] != tem_1d_1[temp_4/2+j] ){
                // Si alguno es diferente la secuencia no seria periodica
                temp_2 = 1;
                break;
              }
            }

          }
        }
      }
      if( temp_4/2 > temp_7 ){
        temp_7 = temp_4/2;
        output = i;
      }
    }
  }
  
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0026 :: printsolution(){
  std::cout << "Euler 0026\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
