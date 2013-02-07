#include"eu0024.h"

void eu0024 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[10];

  // ---------------------------------------------------- //
  
  
  temp_1 = 0;
  
//   while( temp_1<2 ){
//     for( unsigned long long pp=0; pp<9; ++ pp ){
//       int flag = 0;
//       for( tem_1d_1[pp]=0; tem_1d_1[pp]<10; tem_1d_1[pp]++ ){
// 	if( flag == 1 ) continue;
// 	for( int i = 0; i < pp; ++ i )
// 	  if( tem_1d_1[pp]==tem_1d_1[i] ) flag = 1;
// 	if( flag == 1 ) continue;
//       }
//       if( flag == 0 )
// 	++temp_1;
//     }
  
  // FIXME colocar todos los for anidados, en un solo for loop, aca colo transforme algunos de los if statements en for loops
  temp_1 = 0;
  for( tem_1d_1[0]=0; tem_1d_1[0]<10; tem_1d_1[0]++ ){
    for( tem_1d_1[1]=0; tem_1d_1[1]<10; tem_1d_1[1]++ ){
      int flag = 0;
      for( int i = 0; i < 1; ++ i )
	if( tem_1d_1[1]==tem_1d_1[i] ) flag = 1;
      if( flag == 1 ) continue;
      
      for( tem_1d_1[2]=0; tem_1d_1[2]<10; tem_1d_1[2]++ ){
	int flag = 0;
	for( int i = 0; i < 2; ++ i )
	  if( tem_1d_1[2]==tem_1d_1[i] ) flag = 1;
	if( flag == 1 ) continue;
	
        for( tem_1d_1[3]=0; tem_1d_1[3]<10; tem_1d_1[3]++ ){
	  int flag = 0;
	  for( int i = 0; i < 3; ++ i )
	    if( tem_1d_1[3]==tem_1d_1[i] ) flag = 1;
	  if( flag == 1 ) continue;
	
          for( tem_1d_1[4]=0; tem_1d_1[4]<10; tem_1d_1[4]++ ){
            if( tem_1d_1[4]!=tem_1d_1[3] && tem_1d_1[4]!=tem_1d_1[2] && tem_1d_1[4]!=tem_1d_1[1] && tem_1d_1[4]!=tem_1d_1[0] ){
            for( tem_1d_1[5]=0; tem_1d_1[5]<10; tem_1d_1[5]++ ){
              if( tem_1d_1[5]!=tem_1d_1[4] && tem_1d_1[5]!=tem_1d_1[3] && tem_1d_1[5]!=tem_1d_1[2] && tem_1d_1[5]!=tem_1d_1[1] && tem_1d_1[5]!=tem_1d_1[0] ){
              for( tem_1d_1[6]=0; tem_1d_1[6]<10; tem_1d_1[6]++ ){
                if( tem_1d_1[6]!=tem_1d_1[5] && tem_1d_1[6]!=tem_1d_1[4] && tem_1d_1[6]!=tem_1d_1[3] && tem_1d_1[6]!=tem_1d_1[2] && tem_1d_1[6]!=tem_1d_1[1] && tem_1d_1[6]!=tem_1d_1[0] ){
                for( tem_1d_1[7]=0; tem_1d_1[7]<10; tem_1d_1[7]++ ){
                  if( tem_1d_1[7]!=tem_1d_1[6] && tem_1d_1[7]!=tem_1d_1[5] && tem_1d_1[7]!=tem_1d_1[4] && tem_1d_1[7]!=tem_1d_1[3] && tem_1d_1[7]!=tem_1d_1[2] && tem_1d_1[7]!=tem_1d_1[1] && tem_1d_1[7]!=tem_1d_1[0] ){
                  for( tem_1d_1[8]=0; tem_1d_1[8]<10; tem_1d_1[8]++ ){
                    if( tem_1d_1[8]!=tem_1d_1[7] && tem_1d_1[8]!=tem_1d_1[6] && tem_1d_1[8]!=tem_1d_1[5] && tem_1d_1[8]!=tem_1d_1[4] && tem_1d_1[8]!=tem_1d_1[3] && tem_1d_1[8]!=tem_1d_1[2] && tem_1d_1[8]!=tem_1d_1[1] && tem_1d_1[8]!=tem_1d_1[0] ){
                      temp_1++;
                      if(temp_1 == 1000000 ){
			output = 0;
			for( long long ii=0; ii <9; ++ii ){
			  output += tem_1d_1[ii]*pow(10,9-ii);
			}
                      }
                    }
                  }
                  }
                }
                }
              }
              }
            }
            }
          }
//           }
        }
//         }
      }
//       }
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0024 :: printsolution(){
  std::cout << "Euler 0024\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
