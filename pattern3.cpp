//part 3 of square pattern
/*  1 1 1 1
    2 2 2 2
    3 3 3 3
    4 4 4 4

*/

#include<iostream>
using namespace std;
int main()
{
  /*  for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<i << " ";//printing outer loop
        }
        cout<<endl;
    }
    */

    //while loop
    int i=1;

    int end=4;
    while(i<=end){
   int j=1;//starting j
        while(j<=end){
            cout<<i<<" ";
            j++;//increment j
        }
        cout<<endl;
        i++;//increment i
    }
}
