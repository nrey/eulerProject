#include"eu0043.h"

void eu0043 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_1d_1 = new unsigned long long[10];

  // ---------------------------------------------------- //

  //FIXME clean this code
  for( tem_1d_1[0]=0; tem_1d_1[0]<10; tem_1d_1[0]++ ){
    for( tem_1d_1[1]=0; tem_1d_1[1]<10; tem_1d_1[1]++ ){
      if( tem_1d_1[1] == tem_1d_1[0] ){
        continue;
      }
      for( tem_1d_1[2]=0; tem_1d_1[2]<10; tem_1d_1[2]++ ){
        if( tem_1d_1[2] == tem_1d_1[1] || tem_1d_1[2] == tem_1d_1[0] ){
          continue;
        }
        for( tem_1d_1[3]=0; tem_1d_1[3]<10; tem_1d_1[3]++ ){
          if( tem_1d_1[3] == tem_1d_1[2] || tem_1d_1[3] == tem_1d_1[1] || tem_1d_1[3] == tem_1d_1[0] ){
            continue;
          }
          temp_1 = tem_1d_1[1]*100+tem_1d_1[2]*10+tem_1d_1[3];
          if( temp_1%2!=0 ){
            continue;
          }
          for( tem_1d_1[4]=0; tem_1d_1[4]<10; tem_1d_1[4]++ ){
            if( tem_1d_1[4] == tem_1d_1[3] || tem_1d_1[4] == tem_1d_1[2] || tem_1d_1[4] == tem_1d_1[1] || tem_1d_1[4] == tem_1d_1[0] ){
              continue;
            }
            temp_1 = tem_1d_1[2]*100+tem_1d_1[3]*10+tem_1d_1[4];
            if( temp_1%3!=0 ){
              continue;
            }
            for( tem_1d_1[5]=0; tem_1d_1[5]<10; tem_1d_1[5]++ ){
              if( tem_1d_1[5] == tem_1d_1[4] || tem_1d_1[5] == tem_1d_1[3] || tem_1d_1[5] == tem_1d_1[2] || tem_1d_1[5] == tem_1d_1[1] || tem_1d_1[5] == tem_1d_1[0] ){
                continue;
              }
              temp_1 = tem_1d_1[3]*100+tem_1d_1[4]*10+tem_1d_1[5];
              if( temp_1%5!=0 ){
                continue;
              }
              for( tem_1d_1[6]=0; tem_1d_1[6]<10; tem_1d_1[6]++ ){
                if( tem_1d_1[6] == tem_1d_1[5] || tem_1d_1[6] == tem_1d_1[4] || tem_1d_1[6] == tem_1d_1[3] || tem_1d_1[6] == tem_1d_1[2] || tem_1d_1[6] == tem_1d_1[1] || tem_1d_1[6] == tem_1d_1[0] ){
                  continue;
                }
                temp_1 = tem_1d_1[4]*100+tem_1d_1[5]*10+tem_1d_1[6];
                if( temp_1%7!=0 ){
                  continue;
                }
                for( tem_1d_1[7]=0; tem_1d_1[7]<10; tem_1d_1[7]++ ){
                  if( tem_1d_1[7] == tem_1d_1[6] || tem_1d_1[7] == tem_1d_1[5] || tem_1d_1[7] == tem_1d_1[4] || tem_1d_1[7] == tem_1d_1[3] || tem_1d_1[7] == tem_1d_1[2] || tem_1d_1[7] == tem_1d_1[1] || tem_1d_1[7] == tem_1d_1[0] ){
                    continue;
                  }
                  temp_1 = tem_1d_1[5]*100+tem_1d_1[6]*10+tem_1d_1[7];
                  if( temp_1%11!=0 ){
                    continue;
                  }
                  for( tem_1d_1[8]=0; tem_1d_1[8]<10; tem_1d_1[8]++ ){
                    if( tem_1d_1[8] == tem_1d_1[7] || tem_1d_1[8] == tem_1d_1[6] || tem_1d_1[8] == tem_1d_1[5] || tem_1d_1[8] == tem_1d_1[4] || tem_1d_1[8] == tem_1d_1[3] || tem_1d_1[8] == tem_1d_1[2] || tem_1d_1[8] == tem_1d_1[1] || tem_1d_1[8] == tem_1d_1[0] ){
                      continue;
                    }
                    temp_1 = tem_1d_1[6]*100+tem_1d_1[7]*10+tem_1d_1[8];
                    if( temp_1%13!=0 ){
                      continue;
                    }
                    for( tem_1d_1[9]=0; tem_1d_1[9]<10; tem_1d_1[9]++ ){
                      if( tem_1d_1[9] == tem_1d_1[8] || tem_1d_1[9] == tem_1d_1[7] || tem_1d_1[9] == tem_1d_1[6] || tem_1d_1[9] == tem_1d_1[5] || tem_1d_1[9] == tem_1d_1[4] || tem_1d_1[9] == tem_1d_1[3] || tem_1d_1[9] == tem_1d_1[2] || tem_1d_1[9] == tem_1d_1[1] || tem_1d_1[9] == tem_1d_1[0] ){
                        continue;
                      }
                      temp_1 = tem_1d_1[7]*100+tem_1d_1[8]*10+tem_1d_1[9];
                      if( temp_1%17!=0 ){
                        continue;
                      }
//                       cout<<endl;
                      temp_1 = 0;
                      for( unsigned long long i=0;i<10;i++ ){;
                        temp_1 = temp_1 + tem_1d_1[i]*pow(10,9-i);
                      }
                      output = output + temp_1;
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

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0043 :: printsolution(){
  std::cout << "Euler 0043\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
