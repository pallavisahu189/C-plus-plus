#include<iostream>
using namespace std;
int main(){
    int x=4, y=0, z;
    while(x>=y){
    x--;
    y++;
    if(x==y)
     continue;
    else
        cout<<x<<" "<<y<<" "<<endl;
}
}