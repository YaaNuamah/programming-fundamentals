#include <iostream>
int getnum()


 {
 int num1;
 std::cout << "Enter a number";
 std::cin >> num1;

 return num1;

}
int main()
{
 
  int sum;

int num2 = getnum();
int num1 = getnum();
 
sum = num2 + num1;

std::cout <<num2 << " + " << num1 << " = " << sum;
 
}

 
