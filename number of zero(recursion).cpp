#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;
void countzero(int n,int d){
    if(n%10!=0) {
        cout<<d;
        return;
    }
    countzero(n/10,d+1);
}
int main(){
    int n;
    cin>>n;
    cout<<"the number  of zero is ";
    countzero(n,0);
    return 0;
}