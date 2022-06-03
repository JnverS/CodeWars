//Create a function with two arguments that will return an array of the first (n) multiples of (x).
//Assume both the given number and the number of times to count will be positive numbers greater than 0.
//Return the results as an array (or list in Python, Haskell or Elixir).

#include <vector>
std::vector<int> countBy(int x,int n){
  std::vector<int> result;
  int i = x;
  while (n > 0)
    {
    if (i % x ==0)
      {
      result.push_back(i);
      n--;
      }
    i++;
    }
  return result;
}