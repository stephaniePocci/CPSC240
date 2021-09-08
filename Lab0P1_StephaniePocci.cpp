#include <iostream>
#include <string> //for the string function
#include <math.h> //for the pow function
using namespace std;

int binaryConversion(string binaryNumber) { //function that converts integer
  const int LIMIT = 16; //has to be 16 bits or less
  int size = binaryNumber.size(); //get size of string
  int newNumber = 0; //converted number

  if(size > LIMIT) {
    std::cout << "The binary integer inputted is larger than 16 bits.\n";
    return 0;
  } else {
    int counter = 0;
    for(int i = size - 1; i >= 0; i--) { //parse through the string
      if(binaryNumber[i] == '1') {
        newNumber = newNumber + pow(2,counter); //2^counter = value of that "1" in the binary
      }
      counter++;
    }
  }
  return newNumber; //return the converted number
}

int main() {
/* Instructions:
1. Write a function that receives a string containing a 16-bit binary integer. The function must
return the string’s integer value (decimal).
*/
  int decimal;
  string binaryNumber = "";
  std::cout << "Enter the 16-bit binary integer: \n";
  std::cin >> binaryNumber;
  decimal = binaryConversion(binaryNumber);
  std::cout << "The string's integer value is: " << decimal << endl;
  return 0;
}
