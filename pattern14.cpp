#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    for(int i=1;i<=4;i++){
        for(int j=i;j>=1;j--){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
