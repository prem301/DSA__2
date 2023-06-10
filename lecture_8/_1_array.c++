
#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 3, 5, 7, 9};

  for (int i = 0; i < 5; i++)        
  {
    cout << arr[i] << endl;
  }
  cout << arr << endl;    // adress of arr 
     
  cout << &arr << endl; // adress of arr

  return 0;
}
