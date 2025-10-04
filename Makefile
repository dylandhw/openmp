main: main.cpp
	g++ -O3 -fopenmp -march=native -mtune=native -std=c++17 main.cpp -o main