#include"eu0036.h"

void eu0036 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  for( unsigned long long i=1; i<1000000; i++ ){
    if( (ispalind(&i,2) == 1) && (ispalind(&i,10) == 1) ){
      output = output + i;
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0036 :: printsolution(){
  std::cout << "Euler 0036\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
