// going over parallel computing in C++ using OPENMP

#include <iostream>
#include <omp.h>
#include <math.h>

using namespace std;
#define PI acos(-1.0) // defining PI as the arccos of -1

// shared and private memory between threads

// critical, 1 thread at a time
// single, first thread to arrive does the task 
// master, takes the zero thread

int main(int argc, char* argv[]) {
  
  int x;

  #pragma omp parallel private(x) // initiates the parallel region
  {
    x = omp_get_thread_num();

    #pragma omp master
    {
      cout << x << "\n";
    }
  
  }
}


// OMP_NUM_THREAD=some_numer = flag for controlling number of threads
