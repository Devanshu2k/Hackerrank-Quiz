#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
	{
        int n;
        cin>>n;
        int count=0;
        count+=n/100;
        count+=(n%100)/20;
        count+=((n%100)%20)/10;
        count+=(((n%100)%20)%10)/5;
        count+=((((n%100)%20)%10)%5)/1;
        cout<<count<<endl;
    }
    return 0;
}
