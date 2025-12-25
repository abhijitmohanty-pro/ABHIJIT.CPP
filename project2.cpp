#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int triplet(vector<int>vec,int target){
     vector< vector<int>>ans;
    sort(vec.begin(),vec.end());
    int n=vec.size();
    for(int i=0;i<n;i++){
        if(i>0 && vec[i-1]==vec[i]) continue;
        for(int j=i+1;j<n;j++){
            if(vec[j-1]==vec[j]) continue;
            int a=j+1,b=n-1; 
            while(a<b){
                if(a>j+1 && vec[a-1]==vec[a]) a++;
                if(vec[i]+vec[j]+vec[a]+vec[b]==0){
                    ans.push_back({vec[i],vec[j],vec[a],vec[b]});
                    a++ ,b--;
                }
                else if(vec[i]+vec[j]+vec[a]+vec[b]>0)  b--;
                else a++;    
            }
        }
    }
    
    for( auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        } 
        cout<<endl;   
    }
}

int main(){
    vector<int >vec={1,0,-1,0,-2,2};
    int target;
    cout<<"give a target";
    cin>>target;
    triplet(vec,target);
    return 0;
}