#include <iostream>


unsigned long long factorial (unsigned long long n){
  if(n == 0)
    return 1;
  return n * factorial(n-1);
};

unsigned long long fibonacci(unsigned long long n){
  if( n == 0 || n == 1)
    return n;
  
  return fibonacci(n-1) + fibonacci(n-2);

}

int main() {
  std::cout << factorial(15) << std::endl;
  std::cout << " ----------------" << std::endl;
   std::cout << fibonacci(30) << std::endl;
}