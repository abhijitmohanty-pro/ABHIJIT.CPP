#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;
// merge sorted.
void mergesort(vector<int>vec,vector<int>list){
     int i=0,end1=vec.size()-1,j=0,end2=list.size()-1;
     vector<int>refr;
     while(i<=end1&& j<=end2){
        if(vec[i]<=list[j]){
            refr.push_back(vec [i]);
            i++;
        }
        else{
            refr.push_back(list[j]);
            j++;
        }
    }
        while(i<=end1){
            refr.push_back(vec[i]);
            i++;
        }
        while(j<=end2){
            refr.push_back(list[j]);
            j++;
        }
    for(int id=0;id<=end1+end2+1;id++){
        cout<<refr[id]<<" ";
    }    
     
}
int main(){
    vector<int>vec={3,6,8,9};
    vector<int>list={1,2,7,10};
    mergesort(vec,list);
    return 0;
}
   
   

