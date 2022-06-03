//You are going to be given an array of integers. Your job is to take that array and find an index N where the 
//sum of the integers to the left of N is equal to the sum of the integers to the right of N. 
//If there is no index that would make this happen, return -1.

#include <vector>
using namespace std;

int find_even_index (const vector <int> numbers) {
  int left_sum =0 , right_sum = 0;
  for (int i = 0; i < (int)numbers.size(); i++)
  {
    for (int l = 0; l < i; l++)
      left_sum += numbers[l];
    for (int r = i + 1; r < (int)numbers.size();r++)
      right_sum += numbers[r];
    if (left_sum == right_sum)
      return i;
    left_sum = 0;
    right_sum = 0;
  }
  return -1;
}
