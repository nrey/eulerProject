#include"eu0112.h"

void eu0112 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[10];
  for( int i=0; i<10;++i ){
    tem_1d_1[i] = 0;
  }
  tem_1d_2 = new unsigned long long[3];
  for( int i=0; i<3;++i ){
    tem_1d_2[i] = 0;
  }

  // ---------------------------------------------------- //

  temp_1 = 100;
  temp_4 = 0; // Counter
  temp_9 = 1; // flag
  while( tedo_1 < 0.999 ){
    temp_2 = digits( &temp_1, tem_1d_1 );
    temp_10 = 0; // Max for the decrease
    temp_11 = 0; // Max for the increase
    for( int i=0;i<temp_2-1; ++i ){
      if( int(tem_1d_1[i]-tem_1d_1[i+1]) <= -1 ){
        tem_1d_2[ 0 ] = 1;
        temp_10 = MAX( temp_10,temp_2-i-2);
      }
      else if( int(tem_1d_1[i]-tem_1d_1[i+1]) == 0 ){
        tem_1d_2[ 1 ] = 1;
      }
      else if( int(tem_1d_1[i]-tem_1d_1[i+1]) >= 1 ){
        tem_1d_2[ 2 ] = 1;
        temp_11 = MAX(temp_11,temp_2-i-2);
      }
    }
    // Test if there is more than one change of sign
    if( (tem_1d_2[0] == 1) && (tem_1d_2[2] == 1) ){
      temp_12 = MIN( temp_10, temp_11 );
      temp_3 = temp_1/pow(10,temp_12);
      
      do{
       
        ++temp_4;
        tedo_1 = double(temp_4)/double(temp_1);
//         std::cout << std::endl << temp_1 << " " << tedo_1;
        if( tedo_1 == 0.99 ){
          temp_9 = 0;
          output = temp_1;
        }
        ++temp_1;
      }while( temp_3>=int(temp_1/pow(10,temp_12) ));
      --temp_1;
    }

    // Clean the flags of sing change
    for( int i=0; i<3;++i ){
      tem_1d_2[i] = 0;
    }
    ++temp_1;
  }
  
  
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0112 :: printsolution(){
  std::cout << "Euler 0112\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
