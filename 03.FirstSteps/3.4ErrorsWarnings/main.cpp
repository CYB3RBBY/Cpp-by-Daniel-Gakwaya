#include <iostream>

int main(){
   
   // Compile Time Errors
   std::cout << "Aishwarya Dhyani" << std::endl ;
   // Runtime Errors
   int value = 7/0;
   std::cout << "value: " << value << std::endl;
   // Warnings - shown in terminal
    return 0;
}