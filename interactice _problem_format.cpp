#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;

int query(int index)
{
   if (mp.find(index) != mp.end())
   {
      return mp[index];
   }
   cout << "? " << index << endl;
   int value;
   cin >> value;
   return mp[index] = value;
}

int main()
{
   int n;
   cin >> n;

   int value1 = query(1);
   int value2 = query(2);
   int value3 = query(3);

   cout << value1 << " " << value2 << " " << value3 << endl;

   return 0;
}