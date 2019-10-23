#include <iostream>
int main()
{
  int x, y, result;
  std::cout << "Enter two numbers";
  std::cin >> x >> y;
  result = x * y;
if(result > 100)
{
  std::cout << "The result is HIGH ";
 } 
  else {
    std::cout << "The result is LOW "<< std::endl;
    std::cerr << "The program failed " <<std::endl;

}
}
