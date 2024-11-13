#include<iostream>
using namespace std;
int main(){
 int cost,selling,total,gst;
 
cout<<"enter your cost price";
cin>>cost;
cout<<"enter your selling price";
cin>>selling;
if(cost==selling){
    total=cost-selling;
    total+(100/total)*15;
    cout<<total,"total=no p no l";
}
 else if(cost>selling){
    total=cost-selling;
    total+(100/total)*15;
    cout<<total," your loss is=total";
}
 else if(cost<selling){
    total=selling-cost;
    total+(100/total)*15;
    cout<<total," your profir is=total";
}
    
}
