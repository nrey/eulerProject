#include"eu0035.h"

void eu0035 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_4 = new unsigned long long[7]; // El numero actual
  tem_1d_3 = new unsigned long long[6]; // Los digitos del numero

  // ---------------------------------------------------- //

  temp_1 = 1;
  temp_2 = 0;
  temp_3 = 0;
  temp_4 = 0;
  temp_5 = 0;
  temp_6 = 0;


  tem_1d_4[6] = 0;

  //FIXME reordenar este codigo
  // Estos fors se podrian inclusive combinar en uno solo, pero lo dejo asi como una forma de ver mas claramente el problema

  for( tem_1d_3[5]=0; tem_1d_3[5]<10; tem_1d_3[5]++ ){
    if( tem_1d_3[5]%2==0 && tem_1d_3[5]!=0 ){ // Esta condicion es en caso de que sea par, pero no si fuera cero (primera iteracion)
      continue;
    }
    if( tem_1d_3[5]==0 && temp_6!=0 ){ // Esta condicion nunca va a pasa, pues son mutuamente excluyentes
      continue;
    }
    tem_1d_4[5] = tem_1d_4[6] + tem_1d_3[5]*pow(10,5);

    for( tem_1d_3[4]=0; tem_1d_3[4]<10; tem_1d_3[4]++ ){
      if( tem_1d_3[4]%2==0 && tem_1d_3[4]!=0 ){
        continue;
      }
      if( tem_1d_3[4]==0 && temp_5!=0 ){
        continue;
      }
      tem_1d_4[4] = tem_1d_4[5] + tem_1d_3[4]*pow(10,4);

      for( tem_1d_3[3]=0; tem_1d_3[3]<10; tem_1d_3[3]++ ){
        if( tem_1d_3[3]%2==0 && tem_1d_3[3]!=0 ){
          continue;
        }
        if( tem_1d_3[3]==0 && temp_4!=0 ){
          continue;
        }
        tem_1d_4[3] = tem_1d_4[4] + tem_1d_3[3]*pow(10,3);

        for( tem_1d_3[2]=0; tem_1d_3[2]<10; tem_1d_3[2]++ ){
          if( tem_1d_3[2]%2==0 && tem_1d_3[2]!=0 ){
            continue;
          }
          if( tem_1d_3[2]==0 && temp_3!=0 ){
            continue;
          }
          tem_1d_4[2] = tem_1d_4[3] + tem_1d_3[2]*pow(10,2);

          for( tem_1d_3[1]=0; tem_1d_3[1]<10; tem_1d_3[1]++ ){
            if( tem_1d_3[1]%2==0 && tem_1d_3[1]!=0 ){
              continue;
            }
            if( tem_1d_3[1]==0 && temp_2!=0 ){
              continue;
            }
            tem_1d_4[1] = tem_1d_4[2] + tem_1d_3[1]*pow(10,1);

            for( tem_1d_3[0]=0; tem_1d_3[0]<10; tem_1d_3[0]++ ){
              if( tem_1d_3[0]%2==0 && tem_1d_3[0]!=0 ){
                continue;
              }
              if( tem_1d_3[0]==0 && temp_1!=0 ){
                continue;
              }
              temp_1 = temp_1 + temp_2 + temp_3 + temp_4 + temp_5 + temp_6;
              tem_1d_4[0] = tem_1d_4[1] + tem_1d_3[0];
              if( isprime(&tem_1d_4[0]) && temp_1>=2 ){ // Encontrado un primo de mas de dos digitos

                temp_8 = 1; // De entrada asumimos q es primo circular
                for( unsigned long long i=0; i<temp_1-1; i++ ){ // Todas sus permutaciones de dos digitos
                            // tiene una permutacion, de 3 digitos
                            // tiene dos y asi
                  temp_7 = 0;
                  for( unsigned long long j=0; j<temp_1; j++ ){
                    temp_7 = temp_7 + tem_1d_3[(i+j+1)%temp_1]*pow(10,j);
                  }
                  if( !isprime(&temp_7) ){ // Si alguna de sus circulaciones no esprimo, salimos
                    temp_8 = 0;
                    break;
                  }
                }
                output = output + temp_8; // Si fue primo circular se le suma 1 a la salida
              }
              temp_1 = 1;
            }
            temp_2 = 1;
          }
          temp_3 = 1;
        }
        temp_4 = 1;
      }
      temp_5 = 1;
    }
    temp_6 = 1;
  }
//   cout<<endl;
  output = output + 4; // por el 2 el 3 el 5 y el 7

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0035 :: printsolution(){
  std::cout << "Euler 0035\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
