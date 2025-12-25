#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int triplet(vector<int>vec,int target){
    vector<vector<int>>stored;
    vector<int>prestored;
     int sum=0,p=0;
     int n=vec.size();
     for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
        sum+=vec[j];
        if(sum==target){
             p++;
            for(int k=i;k<=j;k++){
                prestored.push_back(vec[k]);
            }
            stored.push_back(prestored);
        }
        prestored.clear();
      }
        sum=0;
    }
     cout<<p<<endl;
     for(auto i:stored){
        for(auto j:prestored){
            cout<<j<<"  ";
        }
        cout<<endl;
     }  
}


int main(){
    vector<int >vec={0,1,2,-1,3,-2};
    int target;
    cout<<"give a target : ";
    cin>>target;
    triplet(vec,target);
    
    return 0;
}