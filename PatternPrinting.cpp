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
            j = j+1;
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

    while (i<=n){

        int j = 1;
        while (j<=n)
        {
            cout<<j;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
        
    }
    
}

/*
4. Print 
    n = 5
        1  2  3  4  5
        6  7  8  9  10
        11 12 13 14 15
        16 17 18 19 20
        21 22 23 24 25 
*/

int main () {
    int n;
    cin >> n;
    
    int i = 1;
    int count = 1;
    while(i<=n){
        
        int j = 1;
        while(j<=n) {
            cout<<count<<" ";
            count = count + 1;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
}

/*
5. Print 
    n = 4
        * 
        * *
        * * *
        * * * *
    where star count = rows no.
*/

int main () {
    int n;
    cin >> n;
    
    int row = 1;
    
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<"*";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}


/*
6. Print 
    n = 5
        1
        2 2
        3 3 3 
        4 4 4 4
        5 5 5 5 5
*/

int main () {
    int n;
    cin >> n;
    
    int row = 1;
    while(row <= n){
        
        int col = 1;
        while(col <= row){
            cout<< row;
            col = col + 1;
        }
        cout <<endl;
        row = row +1;
    }
}

/*
7. print 
    n = 5
        1
        2 3
        3 4 5
        4 5 6 7
        5 6 7 8 9
    no. starts with the row no.
*/

int main () {
    int n;
    cin >> n;
    
    int row = 1;
    
    while(row<=n){
        int col = 1;
        int value = row;
        while(col <= row){
            cout<<value;
            value = value + 1;
            col = col +1;
        }
        cout<<endl;
        row = row + 1;
    }
}

/*
8. print 
    n = 4 
        1
        2 1
        3 2 1 
        4 3 2 1 
    no. starts with the row no.
*/

int main () {
    int n;
    cin >> n;
    
    int row = 1;
    
    while(row<=n){
        int col = 1;
        int value = row;
        while(col <= row){
            cout<<value;
            value = value - 1;
            col = col +1;
        }
        cout<<endl;
        row = row + 1;
    }
}