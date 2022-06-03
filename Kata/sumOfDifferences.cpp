//Your task is to sum the differences between consecutive pairs in the array in descending order

#include <vector>
#include <algorithm>

bool comp2 (int a,int b) { return (a>b); }


int sumOfDifferences(const std::vector<int>& arr){
  std::vector<int> sortedarr = arr;
  std::sort(sortedarr.begin(), sortedarr.end(), comp2);
  for (int i = 0; i < sortedarr.size(); i++)
  std::cout << sortedarr[i] << std::endl; 
  int sum = 0;
  for (int i = 0; i < (int)sortedarr.size() - 1; i ++)
    {
    sum += sortedarr[i] - sortedarr[i + 1];
  }
  return sum;
}