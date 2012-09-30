#include"eu0001.h"

void eu0001 :: solucion(){
  // ---------------------------------------------------- //  
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //
 
  output = 0;

  // ---------------------------------------------------- //

  for( unsigned int i=1; i<1000; i++ ){
    if( i % 3 == 0 ){
      output += i;
      continue;
      }
    if( i % 5 == 0 ){
      output += i;
      continue;
      }
    }
        
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0001 :: printsolution(){
  std::cout << "Euler 0001\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}

