/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>

using namespace std;
bool palimdrome(char *name, int n){
    int s = 0, e = n-1;
    if(s > e){
        return 0;
    }
    while(s <= e){
        if(name[s++]!= name[e--]){
            return 0;
        }
    }
    return 1;
}

int len(char *name){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverse(char *name, int n){
    int s = 0;
    int e = n-1;
    if(s > e){
        return;
    }
    while(s <= e){
         swap(name[s++], name[e--]);
    }
}
int main()
{
    char name[20];
    cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"string length is "<<len(name)<<endl;
    int n = len(name);
    reverse(name, n);
    cout<<name<<endl;
    //cout<<"your name is "<<name<<endl;

    return 0;
}
