a// operating with variables

#include <iostream>
using namespace std;

void odd(int a);
void even(int a);
int billy[] = {16, 2, 77, 40, 12071};
int n, result = 0;

int subtraction(int a, int b){
  int r;
  r = a - b;
  return (r);
}

void duplicate(int& a, int& b, int& c){
  a *= 2;
  b *= 2;
  c *= 2;
}

void printarray(int arg[], int length){
  for (int n = 0; n < length; n++){
    cout << arg[n] << " ";
  }
  cout << "\n";
}

void prevnext(int x, int& prev, int& next){
  prev = x - 1;
  next = x + 1;
}

int divide(int a, int b = 2){
  int r;
  r = a / b;
  return (r);
}

int operate(int a, int b){
  return (a * b);
}

float operate(float a, float b){
  return(a / b);
}

long factorial(long a){
  if(a > 1)
    return(a * factorial(a -1));
  else
    return(1);
}

int main(int argc, char const *argv[]) {
  int firstvalue = 5, secondvalue = 15;
  int * p1, * p2;

  p1 = &firstvalue;
  p2 = &secondvalue;
  *p1 = 10;
  *p2 = *p1;
  p1 = p2;
  *p1 = 20;

  cout << "firstvalue is " << firstvalue << endl;
  cout << "secondvalue is " << secondvalue << endl;

  return 0;
}

void odd(int a){
  if((a%2) != 0)
    cout << "Number is odd.\n";
  else
    even(a);
}

void even(int a){
  if((a % 2) == 0)
    cout << "Number is even.\n";
  else
    odd(a);
}
