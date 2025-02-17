class Solution {
    public:
        bool isAnagram(string s, string t) {
           int Ss = s.size();
           int St = t.size();
           for(int i=0;i<Ss;i++)
           {
            bool flag = false;
            for(int j=0;j<St;j++)
            {
                if(t[j]!='#' && s[i]==t[j])
                {
                    t[j]='#';
                    flag = true;
                    break;
                }
            }  
              if(!flag)
              return false;
           }
           return true;
        }
    };