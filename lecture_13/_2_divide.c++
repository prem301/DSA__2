// divide 2 numbers using binary search , (divisor is positive in this code )

#include<iostream>
using namespace std;
int binarysearch(int dividend , int divisor){
    int s = 0;
    int e = dividend;
    int mid = s + (e - s)/ 2;
    int store = 1;
    while(s <= e) {
        if(mid*divisor == dividend){
            return mid;
        }
        else if(mid*divisor < dividend){
            s = mid + 1;
            store = mid ;
        }
        else if(mid*divisor > dividend){
            e = mid - 1;
        }
          mid = s + (e - s)/ 2;
    }
    return store;
}                                                    
int main(){
int dividend = 22;
int divisor = 7;

int ans = binarysearch(dividend , divisor);

cout << "quotent is " << ans << endl;


return 0;
}




