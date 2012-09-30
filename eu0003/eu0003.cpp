#include"eu0003.h"

void eu0003 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //
	
	unsigned long long numero = 600851475143;
	unsigned long long queda = 600851475143;
	// Method 1 probando todos los numeros
// 	for( unsigned long long i=2; i*i<=numero; i++ ){
// 		if( queda % i == 0){
// 			output = i;
// 			queda = queda/i;
// 			while( queda % i == 0){
// 				queda = queda/i;
// 			}
// 		}
// 	}
	// Method 2 solo con los q son primos
	for( unsigned long long i=2; i*i<=numero; i++ ){
		if( isprime(&i) ){
			if( queda % i == 0){
				output = i;
				queda = queda/i;
				while( queda % i == 0){
					queda = queda/i;
				}
			}
		}
	}
	
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0003 :: printsolution(){
  std::cout << "Euler 0003\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
