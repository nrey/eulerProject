#include"eu0030.h"

void eu0030 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[10]; // Suma de los numeros a la 5
  tem_1d_2 = new unsigned long long[20]; // Contadores
  tem_1d_3 = new unsigned long long[20]; // Numero actual
  tem_1d_4 = new unsigned long long[20]; // Suma actual de los ^5 de los digitos del numero

  // ---------------------------------------------------- //

  //FIXME Improve the code
  tem_1d_1[0] = 0;
  tem_1d_1[1] = 1;
  tem_1d_1[2] = 2*2*2*2*2;
  tem_1d_1[3] = 3*3*3*3*3;
  tem_1d_1[4] = 4*4*4*4*4;
  tem_1d_1[5] = 5*5*5*5*5;
  tem_1d_1[6] = 6*6*6*6*6;
  tem_1d_1[7] = 7*7*7*7*7;
  tem_1d_1[8] = 8*8*8*8*8;
  tem_1d_1[9] = 9*9*9*9*9;

  tem_1d_3[6] = 0;
  tem_1d_4[6] = 0;

  for( tem_1d_2[5]=0; tem_1d_2[5]<10; tem_1d_2[5]++ ){
    tem_1d_3[5] = tem_1d_3[6] + tem_1d_2[5]*pow(10,5);
    tem_1d_4[5] = tem_1d_4[6] + tem_1d_1[tem_1d_2[5]];
    // LOS IFS SON PARA EN CASO DE QUE EL NUMERO NO SEA MUY GRANDE PUES DE UNA ABORTAR, PUES LA SUMA DE DIGITOS, VA SIEMPRE A CRECER
    // MAS RAPIDO QUE EL NUMERO EN SI, YA QUE EL NUMERO SOLO VA A CRECER EN SUS POCICIONES MENOS SIGNIFICATIVAS, ES DECIR UN 
    // 10000, CRECERA MAXIMO A 19999, PERO SI DE ENTRADA 10000 < Q DIGAMOS 10001, YA MUERTO PUES LA SUMA DE DIGITOS SIEMPRE
    // VA A CRECER MAS RAPIDO, YA HICE EL ANALISIS Y SI ES EL CASO.
    if( tem_1d_3[5] < tem_1d_4[5] ){ // Numero < Suma de los digitos ^5
      break;
    }

    for( tem_1d_2[4]=0; tem_1d_2[4]<10; tem_1d_2[4]++ ){
      tem_1d_3[4] = tem_1d_3[5] + tem_1d_2[4]*pow(10,4);
      tem_1d_4[4] = tem_1d_4[5] + tem_1d_1[tem_1d_2[4]];
      if( tem_1d_3[4] < tem_1d_4[4] ){ // Numero < Suma de los digitos ^5
        break;
      }

      for( tem_1d_2[3]=0; tem_1d_2[3]<10; tem_1d_2[3]++ ){
        tem_1d_3[3] = tem_1d_3[4] + tem_1d_2[3]*pow(10,3);
        tem_1d_4[3] = tem_1d_4[4] + tem_1d_1[tem_1d_2[3]];
        if( tem_1d_3[3] < tem_1d_4[3] ){ // Numero < Suma de los digitos ^5
          break;
        }

        for( tem_1d_2[2]=0; tem_1d_2[2]<10; tem_1d_2[2]++ ){
          tem_1d_3[2] = tem_1d_3[3] + tem_1d_2[2]*pow(10,2);
          tem_1d_4[2] = tem_1d_4[3] + tem_1d_1[tem_1d_2[2]];
          if( tem_1d_3[2] < tem_1d_4[2] ){ // Numero < Suma de los digitos ^5
            break;
          }

          for( tem_1d_2[1]=0; tem_1d_2[1]<10; tem_1d_2[1]++ ){
            tem_1d_3[1] = tem_1d_3[2] + tem_1d_2[1]*pow(10,1);
            tem_1d_4[1] = tem_1d_4[2] + tem_1d_1[tem_1d_2[1]];
            if( tem_1d_3[1] < tem_1d_4[1] ){ // Numero < Suma de los digitos ^5
              break;
            }

            for( tem_1d_2[0]=0; tem_1d_2[0]<10; tem_1d_2[0]++ ){
              tem_1d_3[0] = tem_1d_3[1] + tem_1d_2[0];
              tem_1d_4[0] = tem_1d_4[1] + tem_1d_1[tem_1d_2[0]];
              if( tem_1d_3[0] < tem_1d_4[0] ){ // Numero < Suma de los digitos ^5
                break;
              }
              else if( tem_1d_3[0] == tem_1d_4[0] ){ // Numero == Suma de los digitos ^5
//                cout<<endl<<"Numero: "<<tem_1d_3[0]<<", Suma: "<<tem_1d_4[0];
                output = output + tem_1d_3[0];
              }
            }
          }
        }
      }
    }
  }

  output = output - 1;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0030 :: printsolution(){
  std::cout << "Euler 0030\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
