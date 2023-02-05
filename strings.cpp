#include <iostream>
#include <string>
// #include <bits/stdc++.h> // We can alternatively just include this (instead of the other two)
using namespace std;
int main(){
    string x = "mystring";
    cout << x << endl;

    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName; // example of concatenation in strings using "+" operator.

    string fullName2 = firstName.append(lastName); // example of concatenation in strings using the append function

    cout << fullName;
    return 0;
}