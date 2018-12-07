// operating with variables

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  // declaring variables:
  string mystr;

  cout << "What is your name: ";
  getline(cin, mystr);

  // print out the result
  cout << "Hello " << mystr << ".\n";
  cout << "What is your favorite team? ";
  getline(cin, mystr)
  cout << "I like " << mystr << " too!\n";

  // test getline function

  // terminate the program:
  return 0;
}
