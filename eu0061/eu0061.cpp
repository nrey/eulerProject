#include"eu0061.h"

void eu0061 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  for( unsigned long long i=18; i<141; i++ ){
    temp_3 = i*(i+1)/2;
    temp_4 = i*i;
    temp_5 = i*(3*i-1)/2;
    temp_6 = i*(2*i-1);
    temp_7 = i*(5*i-3)/2;
    temp_8 = i*(3*i-2);
//    temp_1 = i*(3*i-2);
    if( (size(&temp_3)==4)||(size(&temp_4)==4)||(size(&temp_5)==4)||(size(&temp_6)==4)||(size(&temp_7)==4)||(size(&temp_8)==4) ){
      cout<<endl<<i<<" "<<temp_3<<" "<<temp_4<<" "<<temp_5<<" "<<temp_6<<" "<<temp_7<<" "<<temp_8;
    }
  }
  
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0061 :: printsolution(){
  std::cout << "Euler 0061\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
