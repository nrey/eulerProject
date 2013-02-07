#include"eu0025.h"

void eu0025 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  unsigned int test = 1003;
  infi_1 = new NaiveInfinitePrecition(test);
  infi_2 = new NaiveInfinitePrecition(test);

  // ---------------------------------------------------- //

  infi_1->setZeros();
  infi_1->setValue(0,1);
  infi_2->setZeros();
  infi_2->setValue(0,1);
  
//   infi_2->add(infi_2,infi_1);
//   infi_2->add(infi_2,infi_1);
//   std::cout << std::endl << infi_2->numDigi();
  
  temp_1 = 2;
  while(1)
  {
	  infi_2->add(infi_2,infi_1);
	  temp_1 = temp_1 + 1;
	  if( infi_2->numDigi() == 1000 ){
		  output = temp_1;
		  break;
	  }
	  infi_1->add(infi_2,infi_1);
	  temp_1 = temp_1 + 1;
	  if( infi_1->numDigi() == 1000 ){
		  output = temp_1;
		  break;
	  }

  }
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0025 :: printsolution(){
  std::cout << "Euler 0025\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
