#include<bits/stdc++.h>
using namespace std;
// reverse a string 
int rev(string s){
	int l=s.size();
	for(int i=0; i<l/2; i++){
	  char ch=s[i];
	  s[i]=s[l-i-1];
	  s[l-i-1]=ch;
	}
	cout<<s;
}
int main(){
	string s="arun sharma";
	rev(s);
}
