#include"eu0067.h"

void eu0067 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_2d_1 = new unsigned long long *[100]; // La matriz donde se va a guardar la informacion
  for( unsigned long long i=0; i<100; i++ ){
    tem_2d_1[i] = new unsigned long long [100];
  }
  char uu[3];

  // ---------------------------------------------------- //

  myfile_read_1.open("/home/nicorv/aData/9_eulerProject/eulerProject/eu0067/eu0067_data.txt");
  myfile_read_1.setf( std::ios::fixed );

  for( unsigned long long i=0; i<100; i++ ){
    for( unsigned long long j=0; j<=i; j++ ){
      myfile_read_1.get(uu, 3);
      tem_2d_1[i][j] = strtold(uu,0);
      myfile_read_1.ignore(1,' ');
    }
  }
  tem_2d_1[1][0] = tem_2d_1[1][0]+tem_2d_1[0][0];
  tem_2d_1[1][1] = tem_2d_1[1][1]+tem_2d_1[0][0];
  for( unsigned long long i=2; i<100; i++ ){
    tem_2d_1[i][0] = tem_2d_1[i][0]+tem_2d_1[i-1][0];
    tem_2d_1[i][i] = tem_2d_1[i][i]+tem_2d_1[i-1][i-1];
    for( unsigned long long j=0; j<=i-2; j++ ){
      temp_1 = MAX(tem_2d_1[i-1][j],tem_2d_1[i-1][j+1]);
      tem_2d_1[i][j+1] += MAX(2,temp_1);
//       tem_2d_1[i][j+1] += maximum(2,tem_2d_1[i-1][j],tem_2d_1[i-1][j+1]);
    }
  }
  output = 0;
  for( unsigned long long i=0; i<100; i++ ){
    if( tem_2d_1[99][i]>output ){
      output = tem_2d_1[99][i];
    }
  }

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0067 :: printsolution(){
  std::cout << "Euler 0067\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
