//Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.
//The output should be two capital letters with a dot separating them.

#include <string>
#include <cctype>

std::string abbrevName(std::string name)
{
  std::string initials = "";
  std::string result = "";
  initials = name.substr(0,1);
  initials += '.';
  initials += name.substr(name.find(" ") + 1, 1);
  for (int i = 0; i < initials.length();i++)
    result += (char)toupper(initials[i]);
    return result;
}