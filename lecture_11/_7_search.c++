// builtin function for first occurance

#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arr{2,5,7,7,7,7,9,12};

int target = 7;
auto ans = lower_bound(arr.begin(),arr.end(),target);

cout << ans-arr.begin() << endl;
cout << ans-arr.end() << endl;



return 0;
}
  