// operating with variables

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

  //Example 1 - Assign a memory location to a pointer
  p1 = &firstvalue;   // Assign the memory address of the variable firstvalue to p1
  p2 = &secondvalue;  // Assign the memory address of the variable secondvalue to p2
  cout << "Example 1 - Assign a memory location to a pointer" << endl;
  cout << "p1 = " << *p1 << endl;
  cout << "p2 = " << *p2 << endl;
  cout << endl;

  //Example 2 - Assign a value to a memory location being pointed at by a pointer
  *p1 = 10;   // Assign the value 10 to the memory location that p1 is pointing to
  cout << "Example 2  - Assign a value to a memory location being pointed at by a pointer" << endl;
  cout << "p1 = " << *p1 << endl;
  cout << "p2 = " << *p2 << endl;
  cout << endl;

  //Example 3 - Assign a value being pointed at by a pointer to a memory location pointed to by another pointer
  *p2 = *p1;  // Assign the value located in the memory spot to which p2 is pointing
  cout << "Example 3 - Assign a value being pointed at by a pointer to a memory location pointed to by another pointer" << endl;
  cout << "p1 = " << *p1 << endl;
  cout << "p2 = " << *p2 << endl;
  cout << endl;

  //Example 4 - Assign the memory location p2 is pointing at to p1
  p1 = p2;  //Assign the memory location p2 is pointing at to p1
  cout << "Example 4 - Assign the memory location p2 is pointing at to p1" << endl;
  cout << "p1 = " << *p1 << endl;
  cout << "p2 = " << *p2 << endl;
  cout << endl;

  //Example 5 - Assing the 20 to the memory location pointed at by p1 (p2 is also pointing to the same location)
  *p1 = 20; //Assing the 20 to the memory location pointed at by p1 (p2 is also pointing to the same location)
  cout << "Example 5 - Assing the value 20 to the memory location pointed at by p1 (p2 is also pointing to the same location)" << endl;
  cout << "p1 = " << *p1 << endl;
  cout << "p2 = " << *p2 << endl;
  cout << endl;

  // Example 6 - What happened to firstvalue and secondvalue?
  cout << "Example 6 - What happened to firstvalue and secondvalue?" << endl;
  cout << "firstvalue is " << firstvalue << endl;
  cout << "secondvalue is " << secondvalue << endl;
  cout << endl;

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
