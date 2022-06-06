//The goal of this exercise is to convert a string to a new string where each character in the new 
//string is "(" if that character appears only once in the original string, or ")" if that character 
//appears more than once in the original string. 
//Ignore capitalization when determining if a character is a duplicate.

#include <string>

std::string duplicate_encoder(const std::string& word){
  std::string wordtolower = "";
  std::string result = "";
  for (int i = 0; i < (int)word.length(); i++)
    wordtolower += (char)tolower(word[i]);
  for (int i = 0; i < (int)wordtolower.length(); i++)
  {
    char c = wordtolower[i];
    result += wordtolower.find_last_of(c) == wordtolower.find_first_of(c) ? "(" : ")";
  }
  return result;
}