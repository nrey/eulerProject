#include"eu0085.h"

void eu0085 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  // FIXME understand the code
  temp_4 = 1000; // Distancia minima de la solucion optima a 2'000.000
  for( unsigned long long i=1; i<=2000; i++ ){
    temp_1 = i*(i+1)/2;
    temp_2 = 0;
    for( unsigned long long j=1; j<=2000; j++ ){
      temp_2 = j*temp_1+temp_2;
      temp_5 = abs((double)temp_2-2000000);
      if(temp_5<temp_4){
        temp_4 = temp_5;
        temp_6 = i*j;
      }
      if( temp_2>2000000+temp_4){
        break;
      }
    }
  }
  output = temp_6;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0085 :: printsolution(){
  std::cout << "Euler 0085\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
