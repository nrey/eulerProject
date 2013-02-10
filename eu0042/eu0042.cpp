#include"eu0042.h"

void eu0042 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

//   myfile_read_1.open("/home/nicorv/aData/9_eulerProject/eulerProject/eu0042/eu0042_data.txt");
  myfile_read_1.open("/home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0042/eu0042_data.txt");
  
  myfile_read_1.setf( std::ios::fixed );
  
  std::string tempString;
  getline( myfile_read_1, tempString );

  std::vector < std::string > data;
  std::vector < unsigned long long > score;
  std::istringstream ss( tempString );

  // READ TABLE
  while (myfile_read_1)
  {
    std::string tempString;
    if (!getline( ss, tempString, ',' )) break;
    data.push_back( tempString );
//     std::cout << "\t " << tempString;
  }
  
  // Compute score and get the max score
  unsigned long long maxScore = 0;
  score.resize( data.size() );
  for( unsigned long long i=0; i<data.size(); ++i ){
    unsigned long long tempScore = 0;
    for( unsigned long long j=1; j<data.at(i).size()-1; ++j ){
      // Ascii table map
      int tempInt = data.at(i)[j] - 64;
      tempScore += tempInt;
    }
    score.at(i) = tempScore;
    maxScore = MAX(maxScore,tempScore);
//     std::cout << std::endl << data.at(i) << " " << tempScore;
  }
  
  // Create a map of the triangle numbers (limit by the max score)
  std::vector < unsigned long long > triangle;
  triangle.resize( data.size() );
  for( int i=0; i<maxScore; ++i ){
    triangle.at(i) = 0;
  }
  temp_1 = 1;
  temp_2 = 1;
  while( temp_2 < maxScore ){
    temp_2 = temp_1*(temp_1+1)/2;
    triangle.at( temp_2-1 ) = 1;
    temp_1 = temp_1 + 1;
  }
  
  // Use the map and the scores to count the number of triangle numbers
  output = 0;
  for( unsigned long long i=0; i<data.size(); ++i ){
    if( triangle.at( score.at(i) - 1 ) == 1 )
      output++;
  }
    
  
  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0042 :: printsolution(){
  std::cout << "Euler 0042\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
