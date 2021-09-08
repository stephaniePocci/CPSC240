#include <iostream>
#include <string> //for string function

using namespace std;

int hexConversion(string hexadecimal) {
  int val = 0; //temp value storage
  int decimal = 0; //final answer
  int i = 0;
  int size = hexadecimal.size(); //size of the string is stored in "size"
  for(i = 0; i < size; i++) { //parse through the string
    decimal = decimal * 16;
    if(hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f') {
      val = hexadecimal[i] - 'a' + 10;
    } else if(hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F') {
      val = hexadecimal[i] - 'A' + 10;
    } else {
      val = hexadecimal[i] - '0';
    }
  decimal = decimal + val;
  }
  return decimal;
}

int main() {
/*
2. Write a function that receives a string containing a 32-bit hexadecimal integer. The function
must return the string’s integer value (decimal).
*/
  int decimal;
  string hexadecimal = "";
  std::cout << "Enter the 32-bit hexadecimal integer: \n";
  std::cin >> hexadecimal;
  decimal = hexConversion(hexadecimal);
  std::cout << "The string's integer value is: " << decimal << endl;
  return 0;
}
