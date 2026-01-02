#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;
void sorting(vector<int>&list){
    int i=0;
    while(i<list.size()){
       for(int j=i;j<list.size();j++){
        if(list[j]<=list[i]){
            swap(list[i],list[j]);
        }
       }
       i++;
}
}
int main(){
    vector<int>list={8,3,9,4,4,6,2};
    sorting(list);
    for(auto it:list){
        cout<<it<<" ";
    }
    return 0;
}