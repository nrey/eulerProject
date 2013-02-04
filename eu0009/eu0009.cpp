#include"eu0009.h"

void eu0009 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  this->fun_1();

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0009 :: printsolution(){
  std::cout << "Euler 0009\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}

void eu0009 :: fun_1(){
  for( unsigned int i=1; i<499; i++ ){
    for( unsigned int j=1; j<499; j++ ){
      temp_1 = 1000 - j - i;
      if( temp_1 > j ){
        if( temp_1*temp_1-i*i-j*j == 0 ){
          output = i*j*temp_1;
        }
      }
      else{
        if( j*j-i*i-temp_1*temp_1 == 0 ){
          output = i*j*temp_1;
          i = 500;
          j = 500;
          return;
//          break; // ESTE BREAK NO SALE COMPLETAMENT DE TODOS LOS LOOPS (ARREGLARLO)
        }
      }

    }
  }
}
