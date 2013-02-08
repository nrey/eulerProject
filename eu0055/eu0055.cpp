#include"eu0055.h"

void eu0055 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  unsigned int test = 2000;
  infi_1 = new NaiveInfinitePrecition(test);
  infi_2 = new NaiveInfinitePrecition(test);
  
  infi_1->setZeros();
  infi_2->setZeros();
  
  // ---------------------------------------------------- //

  temp_2 = 0;
  for( unsigned long long i=10; i<10000; i++ ){
    infi_1->setValue(i);
    temp_1 = 0;

    while( temp_1<50 ){
      infi_1->reverse(infi_2);
      infi_1->add(infi_1,infi_2);
      if( infi_1->ispalind( ) ){
        break;
      }
      temp_1++;
    }
    if( temp_1 ==50 ){
      temp_2++;
    }
  }
  output = temp_2;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0055 :: printsolution(){
  std::cout << "Euler 0055\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
