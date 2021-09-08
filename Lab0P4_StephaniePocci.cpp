#include <iostream>
#include <string>

using namespace std;

string hexConversion(int decimal) {
  string hexadecimal = "";
  int val = 0; //temp value
  char array[150]; // empty array of 150
  int i = 0;
  while(decimal > 0) {
    val = decimal % 16;
    if(val < 10) {
      array[i++] = val + 48;
    } else {
      array[i++] = val + 55;
    }
    decimal = decimal/16;
  }
  int c = i-1;
  for(c= i-1; c >= 0; c--) {
    hexadecimal = hexadecimal + array[c]; //converts chars into string
  }
  return hexadecimal;
}

int main() {
/*
4. Write a function that receives an integer (decimal). The function must return
a string containing the hexadecimal representation of the integer.
*/
  int decimal = 0;
  string hexadecimal = "";
  std::cout << "Enter the decimal to be converted to hexadecimal: \n";
  std::cin >> decimal;
  hexadecimal = hexConversion(decimal);
  std::cout << "The converted hexadecimal is: " << hexadecimal << endl;
  return 0;
}
