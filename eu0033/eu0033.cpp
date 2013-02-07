#include"eu0033.h"

void eu0033 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[25];

  // ---------------------------------------------------- //

  //FIXME review code and make it more efficient
  temp_5 = 1;
  temp_6 = 1;
  for( unsigned long long ia=10; ia<=99; ia++ ){
    for( unsigned long long ib=10; ib<=99; ib++ ){
      if( ib <= ia ){
        continue;
      }
      if( ia%10==0 && ib%10==0 ){
        continue;
      }
      temp_1 = ia/10;
      temp_2 = ia%10;
      temp_3 = ib/10;
      temp_4 = ib%10;
      if( temp_1 == temp_4 ){
        if( ia*temp_3 == ib*temp_2 ){
        }
      }
      if( temp_2 == temp_3 ){
        if( ia*temp_4 == ib*temp_1 ){
          temp_5 = temp_5*ia;
          temp_6 = temp_6*ib;
        }
      }
    }
  }
  // Estos son los primos que luego serviran para sacar el minimo factor comun
  temp_1 = 0;
  for( unsigned long long i=2; i<100; i++ ){
    if( isprime(&i) ){
      tem_1d_1[temp_1] = i;
      temp_1++;
    }
  }
  // Esto es para simplificar y sacar el minimo factor comun
  for( unsigned long long i=0; i<25; i++ ){
    temp_1 = 1; // Bandera de no mas divisiones
    while(temp_1){
      if( temp_5%tem_1d_1[i]==0 && temp_6%tem_1d_1[i]==0 ){
        temp_5 = temp_5/tem_1d_1[i];
        temp_6 = temp_6/tem_1d_1[i];
      }
      else{
        temp_1 = 0;
      }
    }
  }
  output = temp_6;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0033 :: printsolution(){
  std::cout << "Euler 0033\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
