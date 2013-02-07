#include"eu0021.h"

void eu0021 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[10000];

  // ---------------------------------------------------- //

  for( unsigned long long i=1; i<10000; i++ ){
    tem_1d_1[i] = sumprop( i );
    if( tem_1d_1[i]>=10000 ){
      tem_1d_1[i] = 0; // Borra los que dan una suma mayor a 10.000
    }
  }
  for( unsigned long long i=1; i<10000; i++ ){
    if( (tem_1d_1[i] != i) && (i == tem_1d_1[tem_1d_1[i]]) ){
      output = output + i + tem_1d_1[i]; // Suma la pareja de amicable numbers
      tem_1d_1[i] = 0; // Para que no cuente dos veces los amicable numbers repetidos
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0021 :: printsolution(){
  std::cout << "Euler 0021\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
