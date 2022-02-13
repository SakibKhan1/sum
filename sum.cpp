/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1 A

This program reads a list of integers from 'cin' and prints sum.
*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    int sum = 0;

    while (cin >> x)
    //cin takes user input
    {
        sum = sum + x;
    }
    cout << sum;
    //this will print sum
    return 0;

}
