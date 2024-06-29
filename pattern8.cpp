//tringle pattern in character pattern 5


#include<iostream>
using namespace std;
int main()
{
    for(char tri='A';tri<='D';tri++){
        for(char tri2='A'; tri2<=tri;tri2++){
            cout<<tri2<< " ";
        }
        cout<<endl;
    }
}
