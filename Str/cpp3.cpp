// string::operator[]
#include <iostream>
#include <string>

int main ()
{
  std::string str ("Test string");
  for (int i=0; i<str.length(); ++i)
  {
    std::cout << str[i];
  }

  std::string str2 ("Test string2");
  for (unsigned i=0; i<str2.length(); ++i)
  {
    std::cout << str2.at(i);
  }
  std::cout << '\n';
  std::string str3 ("test string");
  str3.front() = 'T';
  std::cout << str3 << '\n';

  std::string str4 ("hello world.");
  str4.back() = '!';
  std::cout << str4 << '\n';

  return 0;
}