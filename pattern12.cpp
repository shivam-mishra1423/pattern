#include<iostream>
using namespace std;
int main()
{
    /*
    char ch='A';
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<ch<<" ";
     ch+=1;
        }
        cout<<endl;
}
*/

//while loop
char ch='A';
int i=1;
int end=4;
while(i<=end){
    int j=1;
    while(j<=end){
        cout<<ch << " ";
        ch++;
        j++;//increment j
    }
    cout<<endl;
    i++;//increment i
}
}
