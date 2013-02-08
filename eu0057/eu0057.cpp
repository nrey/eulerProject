#include"eu0057.h"

void eu0057 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  unsigned int test = 2000;
  infi_1 = new NaiveInfinitePrecition(test);
  infi_2 = new NaiveInfinitePrecition(test);
  infi_3 = new NaiveInfinitePrecition(test);
  
  infi_1->setZeros();
  infi_2->setZeros();
  infi_3->setZeros();
  
  // ---------------------------------------------------- //

  // FIXME review the code
  infi_1->setValue(1); // num
  infi_2->setValue(1); // den
  temp_3 = 0;
  unsigned char tt = 2;
  for( unsigned long long i=0; i<1000; i++ ){
    infi_1->copyto(infi_3);
    infi_1->mul(infi_2,2);
    infi_1->add(infi_1,infi_3);
    infi_2->add(infi_2,infi_3);

    temp_1 = infi_1->numDigi( );
    temp_2 = infi_2->numDigi( );

    if( temp_1 > temp_2 ){
      temp_3++;
    }
  }

  output = temp_3;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0057 :: printsolution(){
  std::cout << "Euler 0057\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
