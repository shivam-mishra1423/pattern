//square pattern 4 row and 4 col
/*   ****
     ****
     ****
     ****
*/
#include<iostream>
using namespace std;
int main()
{
   /* for(int i=1;i<=4;i++){//outer loop for row
        for(int j=1;j<=4;j++){
            cout<<"*" << " ";
        }
        cout<<endl;
    }
    */


    //using while loop

    int i=1;//start
    int end=4;
    while(i<=end){
        int j=1;//starting j
        while(j<=end){
            cout<<"*"<< " ";
            j++;//j increment
        }
        cout<<endl;
        i++;//i increment
    }


}
