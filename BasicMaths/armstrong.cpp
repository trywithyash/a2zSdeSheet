#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;;

bool armstrong(int n ){
    int len=to_string(n).length();
    int ans=0; 
    int check=n;
    while(n!=0){
    int temp=n%10;
    ans=ans+round(pow(temp,len));
    n/=10;
}

return ans==check;
}

int main(){
    int n;
    cin>>n;
    bool solve=armstrong(n);
    cout<<(solve ? "true" : "false") <<endl;
    return 0;
}