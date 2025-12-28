#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

int gcd(int x,int y,int currentdivisor,int limit,int maxdivisor){
    if(currentdivisor>limit) return maxdivisor;
    if(x%currentdivisor==0 && y%currentdivisor==0){
         maxdivisor=max(currentdivisor,maxdivisor);
        gcd(x,y,currentdivisor+1,limit,maxdivisor);
    }
    else gcd(x,y,currentdivisor+1,limit,maxdivisor);
}   

int main(){
   int x,y;
    cin>>x;
    cin>>y;
    cout<<gcd(x,y,1,min(x,y),1);
   return 0;

}