//Return the number (count) of vowels in the given string.
//We will consider a, e, i, o, u as vowels for this Kata (but not y).
//The input string will only consist of lower case letters and/or spaces.


#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  int i =0;
  while (inputStr[i])
    {
    if (inputStr[i] == 'a' || inputStr[i] == 'e' || inputStr[i] == 'i' || inputStr[i] == 'o' || inputStr[i] == 'u')
    {
      num_vowels++;
    }   
    i++;
    }
  return num_vowels;
}