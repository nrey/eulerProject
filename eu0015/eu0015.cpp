#include"eu0015.h"

void eu0015 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long [21];
  tem_1d_2 = new unsigned long long [21];
  tem_1d_3 = new unsigned long long [21];

  // ---------------------------------------------------- //

  // n = 1
  temp_1 = 1;
  temp_2 = 2*temp_1;

  // n = 2
  temp_1 = 2;
  temp_3 = 2*(temp_1+1);

  // n = 3
  temp_1 = 3;
  temp_4 = 2*(temp_1+1+temp_3);

  // n = 4
  temp_1 = 4;
  tem_1d_1[1] = temp_4/2;
  tem_1d_2[4] = 2*(temp_1+1+temp_4+temp_4/2);

  for( unsigned long long i=5; i<=20; i++ ){
    for( unsigned long long k=1; k<=i-4; k++ ){
      tem_1d_3[k] = tem_1d_1[k];
    }
    for( unsigned long long l=1; l<=i-4; l++ ){
      tem_1d_1[l] = i;
      for( unsigned long long m=1; m<=l; m++ ){
        tem_1d_1[l] +=tem_1d_3[m];
      }
    }
    tem_1d_1[i-3]=tem_1d_2[i-1]/2;

    temp_1 = 0;
    for( unsigned long long u=1; u<=i-3; u++ ){
      temp_1 += tem_1d_1[u];
    }
    tem_1d_2[i] = 2*(i+1+tem_1d_2[i-1]+temp_1);
//    std::cout << std::endl << tem_1d_2[i-1];
  }

  output = tem_1d_2[20];

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0015 :: printsolution(){
  std::cout << "Euler 0015\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
