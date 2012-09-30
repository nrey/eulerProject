#!/usr/bin/env python
# -*- coding: utf-8 -*-

import shutil, fnmatch, os

EULER_NUMBER = 3

if EULER_NUMBER < 9:
	EULER_NUMBER = "000"+str(EULER_NUMBER)
elif EULER_NUMBER < 99:
	EULER_NUMBER = "00"+str(EULER_NUMBER)
elif EULER_NUMBER < 999:
	EULER_NUMBER = "0"+str(EULER_NUMBER)

# Create directory
CURRENT_DIRECTORY = os.getcwd()
NEW_DIRECTORY = CURRENT_DIRECTORY+"/eu"+EULER_NUMBER
os.makedirs(NEW_DIRECTORY)

#CMakeLists
TEMP_FILE = open(NEW_DIRECTORY+"/CMakeLists.txt", 'w')
TEMP_FILE.write('PROJECT( EULER_'+EULER_NUMBER+')\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('INCLUDE_DIRECTORIES( ${EULER_SOURCE_DIR} )\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('SET( EULER_'+EULER_NUMBER+'_HDRS\n')
TEMP_FILE.write('	eu'+EULER_NUMBER+'.h\n')
TEMP_FILE.write('	)\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('SET( EULER_'+EULER_NUMBER+'_SRCS\n')
TEMP_FILE.write('	eu'+EULER_NUMBER+'.cpp\n')
TEMP_FILE.write('	main.cpp\n')
TEMP_FILE.write('	)\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('ADD_LIBRARY( eu'+EULER_NUMBER+'_LIB ${EULER_'+EULER_NUMBER+'_HDRS} ${EULER_'+EULER_NUMBER+'_SRCS} )\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('ADD_EXECUTABLE( eu'+EULER_NUMBER+' main.cpp  )\n')
TEMP_FILE.write('TARGET_LINK_LIBRARIES( eu'+EULER_NUMBER+' euler eu'+EULER_NUMBER+'_LIB )\n')
TEMP_FILE.close( )

TEMP_FILE = open(NEW_DIRECTORY+'/eu'+EULER_NUMBER+'.cpp', 'w')
TEMP_FILE.write('#include\"eu'+EULER_NUMBER+'.h\"\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('void eu'+EULER_NUMBER+' :: solucion(){\n')
TEMP_FILE.write('  // ---------------------------------------------------- //\n')
TEMP_FILE.write('  tstart = (double)clock()/CLOCKS_PER_SEC;\n')
TEMP_FILE.write('  // ---------------------------------------------------- //\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('  output = 0;\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('  // ---------------------------------------------------- //\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('  // ---------------------------------------------------- //\n')
TEMP_FILE.write('  tstop = (double)clock()/CLOCKS_PER_SEC;\n')
TEMP_FILE.write('  ttime = tstop-tstart;\n')
TEMP_FILE.write('  // ---------------------------------------------------- //\n')
TEMP_FILE.write('}\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('void eu'+EULER_NUMBER+' :: printsolution(){\n')
TEMP_FILE.write('  std::cout << "Euler '+EULER_NUMBER+'\\n\";\n')
TEMP_FILE.write('  std::cout << "Time: " << ttime << "\\n\";\n')
TEMP_FILE.write('  std::cout << output;\n')
TEMP_FILE.write('}\n')
TEMP_FILE.close( )




TEMP_FILE = open(NEW_DIRECTORY+'/eu'+EULER_NUMBER+'.h', 'w')
TEMP_FILE.write('#ifndef eu'+EULER_NUMBER+'_h\n')
TEMP_FILE.write('#define eu'+EULER_NUMBER+'_h\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('#include"principal.h"\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('#include"euler.h"\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('class eu'+EULER_NUMBER+' : public euler{\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('public:\n')
TEMP_FILE.write('  eu'+EULER_NUMBER+'(){};\n')
TEMP_FILE.write('  ~eu'+EULER_NUMBER+'(){};\n')
TEMP_FILE.write('  void solucion();\n')
TEMP_FILE.write('  void printsolution();\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('};\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('#endif\n')


TEMP_FILE = open(NEW_DIRECTORY+'/main.cpp', 'w')
TEMP_FILE.write('#include\"main.h\"\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('int main()\n')
TEMP_FILE.write('{\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('  std::cout<<std::endl;\n')
TEMP_FILE.write('  euler* implement;\n')
TEMP_FILE.write('  implement = new eu'+EULER_NUMBER+'();\n')
TEMP_FILE.write('  implement->solucion(); // time out\n')
TEMP_FILE.write('  implement->printsolution();\n')
TEMP_FILE.write('  delete implement;\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('  std::cout<<std::endl<<std::endl;\n')
TEMP_FILE.write('  return 0;\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('}\n')

TEMP_FILE = open(NEW_DIRECTORY+'/main.h', 'w')
TEMP_FILE.write('#ifndef main_h\n')
TEMP_FILE.write('#define main_h\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('#include\"euler.h\"\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('#include\"eu'+EULER_NUMBER+'.h\"\n')
TEMP_FILE.write('\n')
TEMP_FILE.write('#endif\n')





