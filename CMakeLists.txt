cmake_minimum_required(VERSION 3.3)
project(ProgrammingPractice)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Main.cpp Main.c Pointers.c BettingGame.c ConvertDecimalToBaseB.c PrimeSieveOfEratosthenes.c AllFactorsOfANumber.c "PrimeFactorization .c" GCDusingEuclidAlgo.c AreaOfPolygon.c PointDirectionFromLineSeg.c ModularExponentiation.c)
add_executable(ProgrammingPractice ${SOURCE_FILES})