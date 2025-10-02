// prints from multiple threads

#include <iostream>
#include <omp.h>

int main(){
#pragma omp parallel
  {
    // only one thread can execute at a time - no need to worry about locking and unlocking
#pragma omp critical 
    {
        std::cout << "Printing from thread " << omp_get_thread_num() << "\n"; 
    }   
  }
   
    return 0;
}