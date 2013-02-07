#include"eu0031.h"

void eu0031 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  // FIXME improve the coding style
  for( unsigned long long i_1=0; i_1<=200; i_1++ ){
    temp_1 = i_1*1;
    for( unsigned long long i_2=0; i_2<=100; i_2++ ){
      temp_2 = temp_1 + i_2*2;
      if( temp_2%2 == 0 || temp_2%5 == 0 ){
      for( unsigned long long i_5=0; i_5<=40; i_5++ ){
        temp_3 = temp_2 + i_5*5;
        if( temp_3%10 == 0 ){
        for( unsigned long long i_10=0; i_10<=20; i_10++ ){
          temp_4 = temp_3 + i_10*10;
          for( unsigned long long i_20=0; i_20<=10; i_20++ ){
            temp_5 = temp_4 + i_20*20;
            if( temp_5%50 == 0 ){
            for( unsigned long long i_50=0; i_50<=4; i_50++ ){
              temp_6 = temp_5 + i_50*50;
              if( temp_6%100 == 0 ){
              for( unsigned long long i_100=0; i_100<=2; i_100++ ){
                temp_7 = temp_6 + i_100*100;
                for( unsigned long long i_200=0; i_200<=1; i_200++ ){
                  temp_8 = temp_7 + i_200*200;

                  if( temp_8 == 200 ){
//                    cout<<endl<<"Numero: "<<i_1<<" "<<i_2<<" "<<i_5<<" "<<i_10<<" "<<i_20<<" "<<i_50<<" "<<i_100<<" "<<i_200;
                    output++;
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
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0031 :: printsolution(){
  std::cout << "Euler 0031\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
