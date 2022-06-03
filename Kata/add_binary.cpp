//Implement a function that adds two numbers together and returns their sum in binary. 
//The conversion can be done before, or after the addition.
//The binary number returned should be a string.

#include <cstdint>
#include <string>

std::string add_binary(uint64_t a, uint64_t b) {
  uint64_t sum = 0;
  sum = a + b;
  std::string buffer; 
  
    buffer.reserve(std::numeric_limits<unsigned int>::digits);
    do
    {
        buffer += char('0' + sum % 2);
        sum = sum / 2;
    } while (sum > 0);
    return std::string(buffer.crbegin(), buffer.crend());;
}