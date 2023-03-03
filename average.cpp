#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char *argv[])
{
    double x;
    double sum;
    if(argc == 1)
    {
        cout << "Please input numbers to find average.\n";
    }else{
    for(int i=0;i < (argc-1);i++)
    {
        x += atoi(argv[i+1]);
    }
    sum = x/(argc-1);
    cout << "---------------------------------\n";
    cout << "Average of " << argc-1 << " numbers = " << sum << endl;
    cout << "---------------------------------\n";
    }
}

