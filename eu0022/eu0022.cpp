#include"eu0022.h"

void eu0022 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;
//   tem_2d_1 = new unsigned long long *[15];
//   for( unsigned long long i=0; i<15; i++ ){
//     tem_2d_1[i] = new unsigned long long [15];
//   }
//   char uu[3];

  // ---------------------------------------------------- //

  myfile_read_1.open("/home/nicorv/aData/9_eulerProject/eulerProject/eu0022/eu0022_data.txt");
  myfile_read_1.setf( ios::fixed );
  
  std::string tempString;
  getline( myfile_read_1, tempString );

  vector < string > data;
  istringstream ss( tempString );

  // READ TABLE
  while (myfile_read_1)
  {
    string tempString;
    if (!getline( ss, tempString, ',' )) break;
    data.push_back( tempString );
//     std::cout << "\t " << tempString;
  }

  // FIXME check this code to create a template
  // Order string Alphabetical order
  string nTemp;
  int iCv;
  for (iCv = 1; iCv < data.size(); ++iCv)
  {
    //the new value to be inserted into a temporary location 
    nTemp = data.at(iCv);
    // k is the index of the number to the left of the iCv.
    int k;
    for (k = iCv-1; k >= 0 && data.at(k) > nTemp; k--)
    {
      data.at(k+1) = data.at(k);
    }
    data.at(k+1) = nTemp;
  }
  
  // Compute the score
  for( unsigned long long i=0; i<data.size(); ++i ){
    unsigned long long tempScore = 0;
    for( unsigned long long j=1; j<data.at(i).size()-1; ++j ){
      // Ascii table map
      int tempInt = data.at(i)[j] - 64;
      tempScore += tempInt;
    }
    tempScore = (i+1)*tempScore;
    output += tempScore;
  }
  
  
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0022 :: printsolution(){
  std::cout << "Euler 0022\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
