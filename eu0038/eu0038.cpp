#include"eu0038.h"

void eu0038 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  temp_1 = 0; // Numero a probar
  temp_2 = 1; // Size
  temp_3 = 1; // Bandera que indica si las prubas e hacen o no 
  temp_4 = 0; // Resultado de multiplicacion
  tem_1d_1 = new unsigned long long[5]; // Digitos del numero
  tem_1d_2 = new unsigned long long[9]; // Tamano del numero
  tem_1d_3 = new unsigned long long[9]; // Union de digitos
  tem_1d_4 = new unsigned long long[9]; // Numero como tal


  // ---------------------------------------------------- //

  // FIXME Entender este codigo, lo escribi hace mas de 2 anos
  while( temp_2 < 6 ){

    digits(&temp_1,temp_2,tem_1d_1);
    temp_3 = 1;

    // Si alguno llega a ser 0, entonces se sale y no hace test
    for( unsigned long long i=0; i<temp_2; i++ ){
      if( tem_1d_1[i] == 0 ){
        temp_3 = 0;
        break;
      }
      // Revisamos q no tenga numeros repetidos
      for( unsigned long long j=0; j<temp_2; j++ ){
        if( i==j ){
          continue;
        }
        if( tem_1d_1[i] == tem_1d_1[j] ){
          temp_3 = 0;
          break;
        }
      }
      if( i==temp_2-1 ){
        if( tem_1d_1[i]==5 ){
          temp_3 = 0;
          break;
        }
        continue;
      }
      if( tem_1d_1[i]==5 ){
        if( tem_1d_1[i+1]<5 ){
          temp_3 = 0;
          break;
        }
      }

    }
    if( temp_3 ){
      // Test del pandigital mas grande

      tem_1d_4[0] = temp_1;
      tem_1d_2[0] = temp_2;

      temp_7 = 1;
      tem_1d_4[temp_7] = (temp_7+1)*temp_1;
      tem_1d_2[temp_7] = size( &tem_1d_4[temp_7] );
      temp_6 = tem_1d_2[temp_7]+tem_1d_2[0];

      // Multiplica tantas veces hasta q la cantidad sumada de digitos sea mayor q 9
      while( temp_6<9 ){
        temp_7++;
        tem_1d_4[temp_7] = (temp_7+1)*temp_1;
        tem_1d_2[temp_7] = size( &tem_1d_4[temp_7] );
        temp_6 = temp_6 + tem_1d_2[temp_7];
      }

      // si es exactamente 9 la cantidad de digitos entonces probamos si es pandigital
      if( temp_6 == 9){
        // Formamos el numero
        temp_8 = 0;
        for( unsigned long long i=0; i<=temp_7; i++ ){
          digits(&(tem_1d_4[i]),tem_1d_2[i],tem_1d_1);
          for( unsigned long long j=0; j<tem_1d_2[i]; j++ ){
            tem_1d_3[temp_8] = tem_1d_1[j];
            temp_8++;

          }
        }
        // Probamos si es pandigital
        if( ispandigital(tem_1d_3,temp_6)){
          temp_9 = 0;
          for( unsigned long long i=0; i<9; i++ ){
            temp_9 = temp_9+tem_1d_3[i]*pow(10,8-i);
          }
          if( temp_9 > output ){
            output = temp_9;
          }
        }
      }
    }
    temp_1 = temp_1+1;
    temp_2 = size( &temp_1 );
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0038 :: printsolution(){
  std::cout << "Euler 0038\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
