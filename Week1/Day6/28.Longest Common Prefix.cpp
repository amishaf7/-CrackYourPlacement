class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
      int n=s.size();
      string ans=s[0];
      string f;
      for(int i=1;i<n;i++){
        string a=s[i];
        
        for(int j=0;j<min(a.size(),ans.size());j++){
            if(ans[j]!=a[j])
            break;
            else
            f=f+a[j];
        }
           ans=f;
           f="";
        }
      return ans;

    }
};
