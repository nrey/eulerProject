#include"eu0018.h"

void eu0018 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_2d_1 = new unsigned long long *[15];
  for( unsigned long long i=0; i<15; i++ ){
    tem_2d_1[i] = new unsigned long long [15];
  }
  char uu[3];

  // ---------------------------------------------------- //

  myfile_read_1.open("/home/nicorv/aData/9_eulerProject/eulerProject/eu0018/eu0018_data.txt");
  myfile_read_1.setf( ios::fixed );

  for( unsigned long long i=0; i<15; i++ ){
    for( unsigned long long j=0; j<=i; j++ ){
      myfile_read_1.get(uu, 3);
      tem_2d_1[i][j] = strtold(uu,0);
      myfile_read_1.ignore(1,' ');
    }
  }
  tem_2d_1[1][0] = tem_2d_1[1][0]+tem_2d_1[0][0];
  tem_2d_1[1][1] = tem_2d_1[1][1]+tem_2d_1[0][0];
  for( unsigned long long i=2; i<15; i++ ){
    tem_2d_1[i][0] = tem_2d_1[i][0]+tem_2d_1[i-1][0];
    tem_2d_1[i][i] = tem_2d_1[i][i]+tem_2d_1[i-1][i-1];
    for( unsigned long long j=0; j<=i-2; j++ ){
      tem_2d_1[i][j+1] += MAX(tem_2d_1[i-1][j],tem_2d_1[i-1][j+1]);
    }
  }
  output = 0;
  for( unsigned long long i=0; i<15; i++ ){
    if( tem_2d_1[14][i]>output ){
      output = tem_2d_1[14][i];
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0018 :: printsolution(){
  std::cout << "Euler 0018\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
