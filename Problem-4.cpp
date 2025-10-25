// Problem-4: Get the total count of number listed in the dictionary which is multiple of [1,2,3,4,5,6,7,8,9]
//   (examples)
//   input: [1,2,8,9,12,46,76,82,15,20,30]
//   Output: 
//     {1: 11, 2: 8, 3: 4, 4: 4, 5: 3, 6: 2, 7: 0, 8: 1, 9: 1}

//---------------solution-----------------
#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of input array : ";
    cin>>size;

    vector<int>nums(size);
    cout<<"Enter input array : ";
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }

    map<int,int>um;

    for(int i=1;i<=9;i++){
        int count = 0;

        for(int j=0;j<size;j++){
            if(nums[j] % i == 0){
                count++;
            } 
        }

        um[i] = count;
    }


    //output
    cout<<"{ ";
    for(auto it : um){
        cout<<it.first<<" : "<<it.second<<", ";
    }
    cout<<" }";
    return 0;
}