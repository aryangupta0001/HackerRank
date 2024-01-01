#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n)
{   long A, C=0;
    int i, N;

    for(int i=0; s[i]!='\0'; i++)
    {   N=i+1;
        if(s[i]=='a')
            C++;
    }

    A=n%N;

    C = C*(n/N);

    for(i=0; i<A; i++)
    {   if(s[i]=='a')
            C++;
    }

    return C;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

