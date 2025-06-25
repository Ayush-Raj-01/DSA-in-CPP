#include<iostream>
using namespace std;

/*
1. print patttern where no. of rows and column will be equal

        * * * *
        * * * *
        * * * *
        * * * *

*/


int main() {
    int n;
    cin>> n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<"*";
            j = j+1;
        }

        cout<<endl;
        i = i+1;
        
    }
    
}

/*
2. print patttern where no. of rows and column will be equal and with there row no.

        1 1 1 
        2 2 2
        3 3 3

*/

int main() {
    int n;
    cin>> n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout << i;
            i = j+1;
        }
        cout <<endl;
        i = i+1;
    }
    
}

/*
3. print 
     n = 4
        1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4

*/

int main() {
    int n;
    cin>> n;

    int i = 1;

    
}