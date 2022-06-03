//You will be given an array of numbers. You have to sort the odd numbers in ascending order 
//while leaving the even numbers at their original positions.

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
      std::vector<int> odd;
      int k = 0;
      for (int i = 0; i < array.size();i++)
        {
        if (array[i] % 2 != 0)
          odd.push_back(array[i]);
      }
      for (int i = 0; i < odd.size(); i++)
        for (int j = 0; j < odd.size() - 1; j++)
        {
            if (odd[j] > odd[j + 1])
            {
                int tmp = odd[j];
                odd[j] = odd[j+1];
                odd[j+1] = tmp;
            }
        }
        k = 0;
        for (int i = 0; i < array.size();i++)
        {
            if (array[i] %2 !=0)
            {
                array[i] = odd[k++];
            }
        }
      return array;
    }
};