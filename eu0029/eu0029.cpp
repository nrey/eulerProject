#include"eu0029.h"

void eu0029 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  // Numeros Primos
  tem_1d_1 = new unsigned long long[27];

  // Contador de los numeros que solo tienen un factor primo
  tem_1d_2 = new unsigned long long[600];

  // Contador de los numeros que tienen 2 factores primos
  tem_2d_1 = new unsigned long long *[500];
  for( unsigned long long i=0; i<500; i++ ){
    tem_2d_1[i] = new unsigned long long[300];
  }

  // Contador de los numeros que tienen 3 factores primos
  tem_3d_1 = new unsigned long long **[200];
  for( unsigned long long i=0; i<200; i++ ){
    tem_3d_1[i] = new unsigned long long*[200];
    for( unsigned long long j=0; j<200; j++ ){
      tem_3d_1[i][j] = new unsigned long long[100];
    }
  }

  // Inicializa a cero todo
  for( unsigned long long l=0; l<600; l++ ){
    tem_1d_2[l] = 0;
  }
  for( unsigned long long l=0; l<500; l++ ){
    for( unsigned long long m=0; m<300; m++ ){
      tem_2d_1[l][m] = 0;
    }
  }
  for( unsigned long long l=0; l<200; l++ ){
    for( unsigned long long m=0; m<200; m++ ){
      for( unsigned long long n=0; n<100; n++ ){
        tem_3d_1[l][m][n] = 0;
      }
    }
  }

  // ---------------------------------------------------- //

  // FIXME This code is really ineficcient 
  // Busca los numeros primos debajo de 100 (toca encontrar dos mas el 101 y 107 porque sino tengo problemas con los for anidados
  // pues los dos de mas abajo utlizan el tipico esquema i+1, i+2 // SE ME OLVIDO Q ESTO SE PUEDE RESOLVER CON UN ESQUEMA DONDE EL
  // FOR ESTE DEBAJO, ALGO ASI COMO UN DO{}WHILE
  temp_1 = 0;
  for( unsigned long long i=2; i<109; i++ ){
    if( isprime(&i)){
      tem_1d_1[temp_1] = i;
      temp_1 = temp_1 + 1;
    }
  }
  // Estas variables son las que me dicen la multiplicidad de los numeros primos
  temp_4 = 1;
  temp_5 = 0;
  temp_6 = 0;
  for( unsigned long long i=0; i<25; i++ ){
    temp_1 = tem_1d_1[i];
    for( unsigned long long j=i+1; j<25+1/*2*/; j++ ){
      temp_2 = tem_1d_1[j];
      temp_7 = pow(temp_1,temp_4)*pow(temp_2,temp_5);
      if( temp_7<=100 ){
        for( unsigned long long k=j+1; k<25+2; k++ ){
          // Este esquema de fores me asegura la base del A^B, es decir el A
          // Lo que aseguro es que me van a pasar 3 numeros primos en orden lexicografico
          // es decir primero el 2 3 5, luego el 2 3 7, etc.., sin repetir
          temp_3 = tem_1d_1[k];
          temp_7 = pow(temp_1,temp_4)*pow(temp_2,temp_5)*pow(temp_3,temp_6);
          // Estos whiles manejan el cuento de las multiplidades, empezando con la minima multiplicidad
          // que es 0, y luego siguiendo aumentando dicha multiplicidad, por eso nunca entro con numeros primos
          // repeticos (orden lexicografico) sino que todo lo dejo en manos d estos whiles que prueban todas
          // las combinaciones de multiplicidades distintas
          while( temp_7 <= 100 ){
            while( temp_7 <= 100 ){
              while( temp_7 <= 100 ){
                // Los que tienen un solo numero primo
                if( temp_4>=1 && temp_5==0 && temp_6==0 ){
                  // Se analiza la parte del exponente, de 2 a 100
                  for( unsigned long long l=2; l<=100; l++ ){
//                    if( temp_4*l > 100 ){
//                      temp_sig_1 = temp_4*l-1;
                      tem_1d_2[temp_4*l-1] = 1;
//                    }
                  }
                }
                // Los que tienen dos numeros primos distintos como factor
                else if( temp_4>=1 && temp_5>=1 && temp_6==0 ){
                  for( unsigned long long l=2; l<=100; l++ ){
                    tem_2d_1[temp_4*l-1][temp_5*l-1] = 1;
                  }
                }
                // Los que tienen tres numeros primos distintos como factor
                else if( temp_4>=1 && temp_5>=1 && temp_6>=1 ){
                  for( unsigned long long l=2; l<=100; l++ ){
                    tem_3d_1[temp_4*l-1][temp_5*l-1][temp_6*l-1] = 1;
                  }
                }
                temp_4 = temp_4 + 1;
                temp_7 = pow(temp_1,temp_4)*pow(temp_2,temp_5)*pow(temp_3,temp_6);
              }
              temp_5 = temp_5 + 1;
              temp_4 = 1;
              temp_7 = pow(temp_1,temp_4)*pow(temp_2,temp_5)*pow(temp_3,temp_6);
            }
            temp_6 = temp_6 + 1;
            temp_5 = 1;
            temp_4 = 1;
            temp_7 = pow(temp_1,temp_4)*pow(temp_2,temp_5)*pow(temp_3,temp_6);
          }
          // Contar e inicializar los contadores a cero
          // Es decir, se cuenta cuantos numeros hay por cada tipo de configuracion, cuantos para un solo
          // numero primo distinto, cuantos para dos, cuantos para tres
          for( unsigned long long l=0; l<600; l++ ){
            if( tem_1d_2[l] == 1 ){
              output = output + 1;
              tem_1d_2[l] = 0;
            }
          }
          for( unsigned long long l=0; l<500; l++ ){
            for( unsigned long long m=0; m<300; m++ ){
              if( tem_2d_1[l][m] == 1 ){
                output = output + 1;
                tem_2d_1[l][m] = 0;
              }
            }
          }
          for( unsigned long long l=0; l<200; l++ ){
            for( unsigned long long m=0; m<200; m++ ){
              for( unsigned long long n=0; n<100; n++ ){
                if( tem_3d_1[l][m][n] == 1 ){
                  output = output + 1;
                  tem_3d_1[l][m][n] = 0;
                }
              }
            }
          }
          temp_4 = 1;
          temp_5 = 1;
          temp_6 = 1;
        }
      }
          temp_4 = 1;
          temp_5 = 1;
          temp_6 = 0;
    }
          temp_4 = 1;
          temp_5 = 0;
          temp_6 = 0;
  }
  
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0029 :: printsolution(){
  std::cout << "Euler 0029\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
