// divide 2 numbers using binary search , (divisor is negative in this code )

#include<iostream>
using namespace std;
int binarysearch(int dividend , int divisor){
    int s = 0;
    int e = abs(dividend);
    int mid = s + (e - s)/ 2;
    int store = 1;
    while(s <= e) {
        if(abs(mid*divisor) == abs(dividend)){
           store = mid;
           break;
        }
        else if(abs(mid*divisor) <abs( dividend)){
            s = mid + 1;
            store = mid ;
        }
        else if(abs(mid*divisor) > abs(dividend)){
            e = mid - 1;
        }
          mid = s + (e - s)/ 2;
    }
    if((divisor < 0 && dividend < 0) || (divisor > 0 && dividend>0)){
        return store;
    }
    else{
        return -store;
    }
    
}                                                    
int main(){
int dividend = -21;
int divisor = 7;

int ans = binarysearch(dividend , divisor);

cout << "quotent is " << ans << endl;


return 0;
}




