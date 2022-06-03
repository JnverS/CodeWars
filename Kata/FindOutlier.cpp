//You are given an array (which will have a length of at least 3, but could be very large) containing integers. 
//The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N.
//Write a method that takes the array as an argument and returns this "outlier" N.

int FindOutlier(std::vector<int> arr)
{
    int odd_count = 0, odd_value = 0;
    int even_count = 0, even_value = 0;
    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] % 2 == 0)
        {
        odd_count++;
        odd_value = arr[i];
      }
      else
        {
        even_count++;
        even_value = arr[i];
        }
    }
  if (odd_count > even_count)
    return even_value;
  return odd_value;
    
}