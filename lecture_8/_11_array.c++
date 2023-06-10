// extreme point in array


#include<iostream>
using namespace std;

int main(){
int arr[] = {1,2,3,4,5,6,7,8};
int size = 8;

int start = 0;
int end = size - 1;

while(end > start){
              // agar start end se bada ho to loop khatam hojayega 

    cout << arr[start] << " " ;
    cout << arr[end] << " " ;
    start++ ;
    end -- ;

} 

return 0;
}