//tringlr pattern 01
/*   1
     1 2
     1 2 3
     1 2 3 4
*/


#include<iostream>
using namespace std;
int main()
{
    /*
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<< j << " ";//print inner loop
        }
        cout<<endl;
    }
    */

    //while loop

    int i=1;
    int end=4;
    while(i<=end){
        int j=1;
        while(j<=i){
            cout<< j << " ";
            j++;//increment j
        }
        cout<<endl;
        i++;//i increment
    }
}
