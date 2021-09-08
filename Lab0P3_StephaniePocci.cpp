#include <iostream>
#include <string> //for string function

using namespace std;

string binaryConversion(int decimal) {
    string binary = "";
    int array[32]; //declare size of binary string
    int i = 0;
    while (decimal > 0) {
      array[i] = decimal % 2;
      decimal = decimal/2;
      i++;
    }
    int c = i-1;
    for(c = i-1; c >= 0; c--) {
      binary = binary + to_string(array[c]); // turn each int into a string
    }
    return binary;
}

int main() {
/*
3. Write a function that receives an integer (decimal). The function must return
a string containing the binary representation of the integer.
*/
  int decimal = 0;
  string binary;
  std::cout << "Enter the decimal to be converted to binary: \n";
  std::cin >> decimal;
  binary = binaryConversion(decimal);
  std::cout << "The converted binary is: " << binary << endl;
  return 0;
}
