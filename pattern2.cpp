//its  see like square pattern
 /* 1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/

#include<iostream>
using namespace std;
int main()
{
    /*
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<< j << " ";//printing inner loop
    }
    cout<<endl;
}
*/


//while loop

int i=1;//starting
int end=4;
while(i<=end){
    int j=1;
    while(j<=end){
        cout<< j << " ";
        j++;//increment j
    }
    cout<<endl;
    i++;//increment i
}
}
