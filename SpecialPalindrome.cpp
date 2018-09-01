#include<bits/stdc++.h>

using namespace std;

int palindrome(string s);

int main()
{
   vector<vector<int> > index(26);
   string str = "mnonopoo";
   //cin>>str;
   int n = str.length();
   for(int i = 0; i < n; i++)
   {
       index[str[i] - 97].push_back(i+1);
   }



    return 0;
}

int palindrome(string s)
{
    int len = s.length();
    for(int i = 0, j = len - 1; i < j; i++, j--)
    {
        if(s[i] != s[j])
            return 0;
        else
            return 1;
    }

}
