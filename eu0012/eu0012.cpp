#include"eu0012.h"

void eu0012 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  temp_1 = 1; //numero triangular
  temp_2 = 1; //numero q se anade cada ciclo (1,2,3,4,5,...)
  temp_3 = 1; //cantida de multiplos
  temp_5 = 1; //copia del numero triangular
  temp_6 = 1; //factor de primos (m+1)
  temp_7 = 1; //numero por el q se va dividiendo (se comprueba primero si e primo)
  while( temp_3 <= 500 ){
    temp_3 = 1;
    temp_5 = temp_1;
    temp_7 = 2;
    while( temp_5 != 1 ){
      temp_6 = 1;
      if( isprime(&temp_7) ){
        while( temp_5 % temp_7 == 0 ){
          temp_5 = temp_5/temp_7;
          temp_6++;
        }
      }
      temp_3 = temp_3*temp_6;
      temp_7++;
    }
    temp_2++;
    temp_1+=temp_2;
  }
  output = temp_1-temp_2;  

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0012 :: printsolution(){
  std::cout << "Euler 0012\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
