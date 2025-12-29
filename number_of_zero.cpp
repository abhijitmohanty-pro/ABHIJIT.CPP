#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;
void f(string str,int i,string final){
    if(i==str.length()){
        cout<<final<<final.length()<<endl;
        return ;
    }
    f(str,i+1,final+str[i]);
    f(str,i+1,final);
}

int main(){
   string str;
   cin>>str;
   cout<<endl;
   string final="";
    f(str,0,final);
    return 0;
}
  