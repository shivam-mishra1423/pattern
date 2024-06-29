//tringle pattern part 4



#include<iostream>
using namespace std;
int main()
{

    for(int i=1;i<=4;i++){
        int flag=1;
        for(int j=1;j<=i;j++){
            cout<<flag << " ";
            flag++;
        }
        cout<<endl;
    }
}
