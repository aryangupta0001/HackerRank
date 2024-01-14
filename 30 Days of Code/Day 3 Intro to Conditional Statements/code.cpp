#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if(N%2==1)
        cout<<"Weird";
    
    if((N%2==0) && (N>1) && (N<6))
        cout<<"Not Weird";

    if((N%2==0) && (N>5) && (N<21))
        cout<<"Weird";

    if((N%2==0) && (N>20))
        cout<<"Not Weird";
        
    return 0;
}
