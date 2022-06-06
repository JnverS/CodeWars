//Create a function that returns the sum of the two lowest positive numbers given 
//an array of minimum 4 positive integers.
//No floats or non-positive integers will be passed.

#include <vector>
#include <algorithm>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    long result = 0;
    sort(numbers.begin(), numbers.end());
  result = numbers[0] + numbers[1];
  return result;
}