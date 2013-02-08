#include"eu0074.h"

void eu0074 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  temp_3 = 1000; // La cadena mas larga esperada
  tem_1d_1 = new unsigned long long[1000001];
  tem_1d_2 = new unsigned long long[temp_3];
  tem_1d_3 = new unsigned long long[6]; // Los digitos

  // ---------------------------------------------------- //

  for( unsigned long long i=0; i<=999999; i++ ){
    tem_1d_1[i] = 0;
  }

  temp_5 = 0;
  for( unsigned long long i=1; i<=999999; i++ ){
    if( tem_1d_1[i]==0 ){ // Cuando no se alla probado
      temp_1 = 1;
      temp_2 = 0;
      tem_1d_2[temp_2] = i;
      temp_2++;
      while( temp_1 ){
        // Probamos q tenemos espacio para el siguiente en la cadena
        if( temp_2>=temp_3 ){ // 
          std::cout<<std::endl<<"La cadena es mas larga de lo esperado";
          abort();
        }

        // Creamos el siguiente de la cadena
        temp_4 = digits( &tem_1d_2[temp_2-1], tem_1d_3 );
        tem_1d_2[temp_2] = 0;
        for( unsigned long long j=0; j<temp_4; j++ ){
          tem_1d_2[temp_2] = tem_1d_2[temp_2] + factorial(tem_1d_3[j]);
        }

        // Analizamos si ya esta este numero
        for( unsigned long long j=0; j<temp_2; j++ ){
          if( tem_1d_2[temp_2]==tem_1d_2[j] ){
            temp_1 = 0; // Bandera para salir
            break;
          }
        }
        // Si ya esta en la cadena, miramos el tamano de la cadena y segun eso ponemos banderas iguales a 1 o 2 y aumentamos el contador
        if( temp_1==1 ){
          temp_2++;
        }
        else{
          if( temp_2 == 60 ){
            temp_5++;
            for( unsigned long long j=0; j<=temp_2; j++ ){
              if( tem_1d_2[j]<=1000000){
                tem_1d_1[tem_1d_2[j]] = 1;
              }
            }
          }
          else{
            for( unsigned long long j=0; j<temp_2; j++ ){
              if( tem_1d_2[j]<=1000000){
                tem_1d_1[tem_1d_2[j]] = 2;
              }
            }
          }
        }
      }
    }
  }
  output = temp_5;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0074 :: printsolution(){
  std::cout << "Euler 0074\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
