#include"eu0004.h"

void eu0004 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //
	for( unsigned long long i=100; i<=999; i++ ){
		for( unsigned long long j=i; j<=999; j++ ){
			temp_1 = i*j;
			if( ispalin(&temp_1) ){
				if( output < temp_1 ){
					output = temp_1;
				}
			}
		}
	}
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0004 :: printsolution(){
  std::cout << "Euler 0004\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
