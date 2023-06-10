// union ( with duplicates )

#include <iostream>
using namespace std;
#include <vector>;

int main()
{

    vector<int> arr{1, 3, 5, 7, 9};
    vector<int> brr{1, 4, 6, 8};

    vector<int> ans;
    
   


    for(int i = 0 ; i < arr.size() ; i++){
        ans.push_back(arr[i]);
    }
    for(int j = 0 ; j < arr.size() ; j++){
        ans.push_back(arr[j]);
    }
     // not done

    return 0;
}
