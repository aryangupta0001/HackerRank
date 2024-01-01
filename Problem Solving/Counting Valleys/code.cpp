#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) 
{   long P=0, V=0, i, j=0;

    for(i=0; i<n; i++)
    {   if(s[i]=='U')
        {   P++;    
        }
        
        else
        {   P--;  
        }
          
        if(P==0 && j==0)
        {   V++;
        }

        if(P<0)
            j=0;
        else
            j=1;
        
    }

    return V;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
