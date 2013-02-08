#include"eu0102.h"

void eu0102 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
  tem_sig_2d_1 = new long long *[1000]; // La matriz donde se va a guardar la informacion
  for( unsigned long long i=0; i<1000; i++ ){
    tem_sig_2d_1[i] = new long long [6];
  }
  char uu[15];
  temp_1 = 0;

  // ---------------------------------------------------- //

  myfile_read_1.open("/home/nicorv/aData/9_eulerProject/eulerProject/eu0102/eu0102_data.txt");
  myfile_read_1.setf( std::ios::fixed );

  for( unsigned long long i=0; i<1000; i++ ){
//    cout<<endl<<endl;
    for( unsigned long long j=0; j<5; j++ ){
      myfile_read_1.get(uu, 15, ','); // OBTIENE O 15 CARACTERES O HASTA QUE ENCUENTRE EL DELIMITADOR UU2 ","
      tem_sig_2d_1[i][j] = strtold(uu,0);
      myfile_read_1.ignore(1,' ');
//      cout<<tem_sig_2d_1[i][j]<<"  ";
    }
    myfile_read_1.get(uu, 15); // EL ULTIMO NO LE COLOCAMOS EL DELIMITADOR "," PUES SINO ME QUEDARIA SALTANDO UN NUMERO
    tem_sig_2d_1[i][5] = strtold(uu,0);
//    cout<<tem_sig_2d_1[i][5]<<"  ";
  }

  for( unsigned long long i=0; i<1000; i++ ){
    tedo_1 = tem_sig_2d_1[i][0]*tem_sig_2d_1[i][2]+tem_sig_2d_1[i][1]*tem_sig_2d_1[i][3]; // dot products
    tedo_2 = tem_sig_2d_1[i][2]*tem_sig_2d_1[i][4]+tem_sig_2d_1[i][3]*tem_sig_2d_1[i][5]; // dot prodcuts
    tedo_3 = tem_sig_2d_1[i][0]*tem_sig_2d_1[i][4]+tem_sig_2d_1[i][1]*tem_sig_2d_1[i][5]; // dot products

    tedo_4 = sqrt(tem_sig_2d_1[i][0]*tem_sig_2d_1[i][0]+tem_sig_2d_1[i][1]*tem_sig_2d_1[i][1]); //acos dotproduct/norm(a)*norm(b)
    tedo_5 = sqrt(tem_sig_2d_1[i][2]*tem_sig_2d_1[i][2]+tem_sig_2d_1[i][3]*tem_sig_2d_1[i][3]);
    tedo_6 = sqrt(tem_sig_2d_1[i][4]*tem_sig_2d_1[i][4]+tem_sig_2d_1[i][5]*tem_sig_2d_1[i][5]);

    tedo_7 = acos(tedo_1/(tedo_4*tedo_5))+acos(tedo_2/(tedo_5*tedo_6))+acos(tedo_3/(tedo_4*tedo_6)); // Suma de angulos

    if(tedo_7>=2*PI){
      temp_1++;
    }
  }
  output = temp_1;

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0102 :: printsolution(){
  std::cout << "Euler 0102\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
