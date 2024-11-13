#include <iostream>
using namespace std;
int main() {
int user;
int a;
int c;
cout<<"enter your no";
cin>>user;
if(user>=500){
    a=(user/100)*20;
    c=user-a;
    cout<<"your discount is 20% \n";
    cout<<c;
}
else if(user>=300 ||user<=500){
    a=(user/100)*15;
    c=user-a;
        cout<<"your discount is 15% \n";
    cout<<c;
}
else if(user>=100 || user<=299){
    a=(user/100)*10;
    c=user-a;
        cout<<"your discount is 10% \n";
    cout<<c;
}
else if(user<=99){
    cout<<"your cost is",user;
}
    
}