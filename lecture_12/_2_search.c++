// finding square root of intiger value 

#include<iostream>
using namespace std;
int findroot(int n){
int target = n ;
int s = 0;                  
int e = n;
int mid = s + (e - s) / 2;
int ans = -1;
                                                                                                                                                                                                                                                                                                         
while (s <= e){
    if(mid * mid == target){   
        return mid;
    }
    else if (mid * mid > target){          
        e = mid - 1;                   
    }                 
    else if (mid * mid < target){              
         ans = mid;
         s = mid + 1;
    }
                    
   mid = s + (e - s) / 2;              
}                                               
return ans;
}                            

int main(){

int n;
cout << "enter the value " << endl;
cin >> n;            
                                        
int ans = findroot(n);                                                                                                   
cout << "vlaue of square root is " << ans << endl;                                  
return 0;

}










