#include"eu0045.h"

void eu0045 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  temp_1 = 3; // T2
  temp_2 = 2; // n para T
  temp_3 = 5; // P2
  temp_4 = 2; // n para P
  temp_5 = 6; // H2
  temp_6 = 2; // n para H
  temp_7 = 0; // Contador de las veces q ha entrado, la segunda es la vencida

  // FIXME review this code
  // Un loop infinito hasta q el pentagonar sea mayor (o igual) q al exagonar, y luego cuando el triagunarl
  // sea mayor (o igual) que el pentagonal, al final pruba si todos son iguales.
  while(1){
    temp_6++;
    temp_5 = temp_6*(2*temp_6-1);
    while( temp_5>temp_3 ){
      temp_4++;
      temp_3 = temp_4*(3*temp_4-1)/2;
    }
    while( temp_3>temp_1 ){
      temp_2++;
      temp_1 = temp_2*(temp_2+1)/2;
    }
    if( temp_5==temp_3 && temp_3==temp_1 ){
      temp_7++;
      if( temp_7==2 ){
        output = temp_5;
        break;
      }
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0045 :: printsolution(){
  std::cout << "Euler 0045\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
