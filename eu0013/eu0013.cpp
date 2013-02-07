#include"eu0013.h"

void eu0013 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  char uu[3];
  myfile_read_1.open("/home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0013/eu0013_data.txt");
  myfile_read_1.setf( std::ios::fixed );
  temp_2 = 0;
  temp_3 = 0;
  temp_4 = 0;
  temp_5 = 0;
  temp_6 = 0;

  for( unsigned int i=0; i<100; i++ ){

    for( unsigned int j=0; j<10; j++ ){
      myfile_read_1.get(uu, 2);
      temp_1 = strtold(uu,0);
      temp_2 = temp_2+temp_1*pow( 10, 9-j );
    }
    for( unsigned int j=0; j<10; j++ ){
      myfile_read_1.get(uu, 2);
      temp_1 = strtold(uu,0);
      temp_3 = temp_3+temp_1*pow( 10, 9-j );
    }
    for( unsigned int j=0; j<10; j++ ){
      myfile_read_1.get(uu, 2);
      temp_1 = strtold(uu,0);
      temp_4 = temp_4+temp_1*pow( 10, 9-j );
    }
    for( unsigned int j=0; j<10; j++ ){
      myfile_read_1.get(uu, 2);
      temp_1 = strtold(uu,0);
      temp_5 = temp_5+temp_1*pow( 10, 9-j );
    }
    for( unsigned int j=0; j<10; j++ ){
      myfile_read_1.get(uu, 2);
      temp_1 = strtold(uu,0);
      temp_6 = temp_6+temp_1*pow( 10, 9-j );
    }
    myfile_read_1.ignore(1,' ');
  }
  temp_6 = temp_6/10000000000;
  temp_5 += temp_6;
  temp_5 = temp_5/10000000000;
  temp_4 += temp_5;
  temp_4 = temp_4/10000000000;
  temp_3 += temp_4;
  temp_3 = temp_3/10000000000;
  temp_2 += temp_3;
//  cout<<endl<<"1: "<<temp_2;
  output = temp_2/100;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0013 :: printsolution(){
  std::cout << "Euler 0013\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
