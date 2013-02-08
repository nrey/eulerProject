#include"eu0063.h"

void eu0063 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

//   infivar_1 = new infinite_precition(30);
  unsigned int test = 30;
  infi_1 = new NaiveInfinitePrecition(test);
  infi_1->setZeros();

  temp_1 = 0;
  for( unsigned long long i=2; i<10; i++ ){
    infi_1->setValue(i);
    temp_2 = 1;
    while( infi_1->numDigi() == temp_2 ){//&& infivar_1->numdig()<9 ){
      temp_1++;
      infi_1->mulInt(i);
      temp_2++;
    }
    temp_1--;

  }
  output = temp_1 + 9; // los 9 son los numeros de 1 a 9, 1^1, 2^1, ... 9^1

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0063 :: printsolution(){
  std::cout << "Euler 0063\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
