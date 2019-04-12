class Solution {
  public:
    int nextGreaterElement(int n) {
      string s, t, u = "";
      s = to_string(n);
      t = "";
      n = (int) s.size();

      for (int i = n - 1; i > 0; i--) {
        //db(s[i],s[i-1]);
        if (s[i] <= s[i - 1]) {
          t += s[i];
          //db(t);
          //cout<<endl;
        } else {
          t += s[i];
          sort(t.begin(), t.end());
          for (int j = 0; j < (int) t.size(); j++) {
            //db(t[j],s[i-1]);
            if (t[j] > s[i - 1]) {
              char p = t[j];
              t.erase(j, 1);
              t += s[i - 1];
              sort(t.begin(), t.end());
              //u=t;
              for (int k = 0; k < i - 1; k++)
                u += s[k];
              u += p;
              u += t;

              stringstream geek(u);

              long long x = 0;
              geek >> x;
              if (x > INT_MAX) //To check if there is 'int'eger overflow
                return -1;
              return (int) x;

            }
          }

        }
      }

      return -1;
    }
};
//https://leetcode.com/problems/next-greater-element-iii/submissions/
//Alternative - https://www.geeksforgeeks.org/find-next-greater-number-set-digits/

