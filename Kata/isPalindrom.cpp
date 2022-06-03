//Write a function that checks if a given string (case insensitive) is a palindrome.

#include <string>
#include <cctype>
bool isPalindrom (const std::string& str)
{
  std::string right;
  std::string left;
  std::string strN;
  for (int i = 0; i < (int)str.length(); i++)
    strN += (char)std::tolower(str[i]);
  if (strN.length() % 2 != 0)
    right = strN.substr(strN.length()/2 + 1, strN.length());
    else
    right = strN.substr(strN.length()/2, strN.length());
  left = strN.substr(0, strN.length()/2);
  std::reverse(std::begin(right), std::end(right));
    if (right == left)
      return true;
  return false;
}