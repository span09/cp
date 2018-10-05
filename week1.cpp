void generate_braces(int n, int ind, int n_open, int n_close, string temp, vector<string> &ans){
    if(n_close == n){
        ans.push_back(temp);
        return;
    }
    if(n_open < n){
        temp += '(';
        generate_braces(n, ind+1, n_open+1, n_close, temp, ans);
        temp.pop_back();
    }
    if(n_close < n_open){
        temp += ')';
        generate_braces(n, ind+1, n_open, n_close+1, temp, ans);
        temp.pop_back();
    }
}


vector<string> Solution::generateParenthesis(int n) {
    vector<string> ans;
    generate_braces(n, 0, 0, 0, "", ans);
    return ans;
}