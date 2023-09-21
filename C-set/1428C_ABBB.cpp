#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int tc;
   cin >> tc;
   while (tc--)
   {
      string str;
      cin >> str;

      stack<int> st;
      for (int i = 0; i < str.length(); i++)
      {
         if (st.empty())
         {
            st.push(str[i]);
            continue;
         }
         if ((st.top() == 'A' || st.top() == 'B') && str[i] == 'B')
         {
            st.pop();
         }
         else if((st.top() == 'A' || st.top() == 'B') && str[i] == 'A'){
            st.push(str[i]);
         }
      }
      cout<<st.size()<<endl;
   }

   return 0;
}