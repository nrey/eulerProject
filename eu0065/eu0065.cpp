#include"eu0065.h"

void eu0065 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  unsigned int test = 60;
  infi_1 = new NaiveInfinitePrecition(test);
  infi_1->setZeros();
  infi_2 = new NaiveInfinitePrecition(test);
  infi_2->setZeros();
  infi_3 = new NaiveInfinitePrecition(test);
  infi_3->setZeros();

  // ---------------------------------------------------- //

  infi_1->setValue(1); //num
  infi_2->setValue(1); //den
  temp_4 = 1;
  for( long long i=33; i>=2; i-- ){
    infi_1->copyto(infi_3);
    infi_1->mulInt(2*i);
    infi_1->add(infi_1,infi_2);
    infi_3->copyto(infi_2);
    temp_4++;

    infi_1->copyto(infi_3);
    infi_1->mulInt(1);
    infi_1->add(infi_1,infi_2);
    infi_3->copyto(infi_2);
    temp_4++;

    infi_1->copyto(infi_3);
    infi_1->mulInt(1);
    infi_1->add(infi_1,infi_2);
    infi_3->copyto(infi_2);
    temp_4++;

  }
  infi_1->copyto(infi_3);
  infi_1->mulInt(2);
  infi_1->add(infi_1,infi_2);
  infi_3->copyto(infi_2);
  temp_4++;

  infi_1->copyto(infi_3);
  infi_1->mulInt(1);
  infi_1->add(infi_1,infi_2);
  infi_3->copyto(infi_2);
  temp_4++;

  infi_1->copyto(infi_3);
  infi_1->mulInt(2);
  infi_1->add(infi_1,infi_2);
  infi_3->copyto(infi_2);
  temp_4++;
  output = infi_1->sumDigi();

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0065 :: printsolution(){
  std::cout << "Euler 0065\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
