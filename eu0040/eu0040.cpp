#include"eu0040.h"

void eu0040 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[6];

  // ---------------------------------------------------- //
  
  temp_1 = 9;
  temp_3 = 10;
  output = 1;
  for( unsigned long long i=1; i<=1000000; ++i )
  {
    temp_2 = 0;
    if( i < 10 )
      temp_2 = 1;
    else if( i<100 )
      temp_2 = 2;
    else if( i<1000 )
      temp_2 = 3;
    else if( i<10000 )
      temp_2 = 4;
    else if( i<100000 )
      temp_2 = 5;
    else if( i<1000000 )
      temp_2 = 6;
    
    for( int j=0; j<=9; ++j )
    {
      temp_1=temp_1+temp_2+1;
//       std::cout << std::endl << temp_1;
      if( temp_1 >= temp_3 && temp_3 <= 1000000){
        
        temp_sig_1 = temp_1 - temp_3; // The desire number minus the actual number
        temp_3 = temp_3*10;
        if( temp_sig_1 == 0 ){
//           std::cout << std::endl <<"Ganador: "<<j;
          output *= j;
        }
        else{
          digits(&i,temp_2,tem_1d_1);
//           std::cout << std::endl << "Ganador1: "<< tem_1d_1[1] << " " <<tem_1d_1[temp_2-temp_sig_1];
          output *= tem_1d_1[temp_2-temp_sig_1];
        }
      }
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0040 :: printsolution(){
  std::cout << "Euler 0040\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
