#include"eu0047.h"

void eu0047 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  temp_13 = 26000;
  tem_1d_1 = new unsigned long long[temp_13];
  tem_1d_2 = new unsigned long long[4];

  // ---------------------------------------------------- //

  // FIXME review this code and make it more efficient
  temp_1 = 0;
  tem_1d_1[temp_1] = 2;
  temp_1++;
  for( unsigned long long i=3; i<300000; i=i+2 ){
    if( isprime(&i) ){
      tem_1d_1[temp_1] = i;
      temp_1++;
    }
  }
  if( temp_13<temp_1 ){ // Para saber si hay espacio suficiente para los primos
//     cout<<temp_1;
//     std::cin>>temp_1;
    abort();
  }

  tem_1d_2[0] = 0;
  tem_1d_2[1] = 0;
  tem_1d_2[2] = 0;
  tem_1d_2[3] = 0;

  for( unsigned long long i=10; i<300000; i++ ){
    temp_2 = i;
    temp_4 = 0;
    temp_5 = 0; // Cantidad de primos distintos asociados con el numero
    while( temp_2>1 ){
      temp_3 = tem_1d_1[temp_4];
      if( temp_2%temp_3==0 ){
        temp_5++;
        do{
          temp_2 = temp_2/temp_3;
        }while( temp_2%temp_3==0 );
      }
      temp_4++;
    }

    temp_10 = i%4;
    temp_11 = (temp_10+1)%4;
    temp_12 = (temp_11+1)%4;
    temp_13 = (temp_12+1)%4;

    tem_1d_2[temp_10] = temp_5;

    if( tem_1d_2[temp_10]!=4 ){
      tem_1d_2[temp_11] = 0;
      tem_1d_2[temp_12] = 0;
      tem_1d_2[temp_13] = 0;
      i = i + 3;
      continue;
    }
    if( tem_1d_2[temp_13]!=4 ){
      tem_1d_2[temp_11] = 0;
      tem_1d_2[temp_12] = 0;
      continue;
    }
    if( tem_1d_2[temp_12]!=4 ){
      tem_1d_2[temp_11] = 0;
      continue;
    }
    if( tem_1d_2[temp_11]!=4 ){
      continue;
    }
    output = i-3;
    break;
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0047 :: printsolution(){
  std::cout << "Euler 0047\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
