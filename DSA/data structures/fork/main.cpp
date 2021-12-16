#include <iostream>
#include<stdlib.h>
#include<cstdlib>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int p = fork();
    cout<<"running"<<endl;
    return 0;
}
