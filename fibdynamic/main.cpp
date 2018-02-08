//
//  main.cpp
//  fibdynamic
//
//  Created by Jonathan on 2/8/18.
//  Copyright © 2018 Jonathan Luetze. All rights reserved.
//

#include <iostream>
using namespace std;
int fib(int a);
int fibtail(int a, int first, int second);
int fibdynamic (int a, int fibArray[]);

int main(int argc, const char * argv[]) {
    
    int fibInt = 60;
    
    cout << fib(fibInt);
    cout << "\n";
    cout << fibtail(fibInt, 1, 0);
    cout << "\n";
    
    int fibArray[fibInt +1];
    for (int i = 0; i <= fibInt; i++) {fibArray[i] = -1;}   //initializing array
    
    cout << fibdynamic(fibInt, fibArray);
    cout << "\n";
    
    return 0;
}

// Regular Fib Function
int fib (int a)
{
    if(a <= 1) return a;
    return fib(a-1) + fib(a-2);
}

// Tail-Recursive Fib Function
int fibtail (int n, int first = 1, int second = 0)
{
    if(n == 0) return second;
    if(n == 1) return first;
    return fibtail(n-1, first+ second, first);
}

// Dynamic Fib Function
int fibdynamic (int a, int fibArray[])
{
         if (a <= 1) {return a;}
    else if (fibArray[a] != -1) {return fibArray[a];}
    else    {fibArray[a] = fibdynamic(a-1,fibArray) + fibdynamic(a-2,fibArray);}
    
    return fibArray[a];
}


