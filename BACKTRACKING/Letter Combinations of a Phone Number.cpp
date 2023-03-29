class Solution {
public:
    void backtrack(int index,string output,string digits,vector<string>&ans,string mapping[]){
       //base condition
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        int num=digits[index]-'0';
        string val=mapping[num];
        for(int i=0;i<val.length();++i){
            output.push_back(val[i]);
            backtrack(index+1,output,digits,ans,mapping);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
   string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>ans;
        if(digits.length()==0)return ans;
        string output="";
        int index=0;
        backtrack(index,output,digits,ans,mapping);
        return ans;
    }
};
