#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int> v;
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
v.push_back(1);
cout<<v.size()<<endl;
v.push_back(3);
v.push_back(4);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
return 0;
}