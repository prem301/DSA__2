#include <iostream>
using namespace std;

int main()
{
int arr[10];
cout << "enter the values in array" << endl;
  for (int i = 0; i < 10; i++)
  {
    cin >>  arr[i] ; 
  }

cout << "printing the value in array " << endl;

for (int i = 0 ; i < 10 ; i++){
    cout << arr[i] << " " ;
}
  return 0;
}