#include<bits/stdc++.h>
using namespace std;

string trimmed (string s) {
    string res = "";
    for (int i=0; i<s.size(); i++) {
        if (s[i] == ' ' || s[i] == '<' || s[i] == '>' || s[i] == '=' || s[i] == '/' || s[i] == '"') continue;
        res.push_back(s[i]);
    }
    return res;
}
string tagFinder (string s) {
    string res;
    for (int i=1; i<s.size() ; i++) {
        if (s[i] == ' ' || s[i] == '<' || s[i] == '>' || s[i] == '=' || s[i] == '/') break;
        res.push_back(s[i]);
    }
    return res;
}
map<string, string> attrFinder (string s) {
    map<string, string> res;
    vector<int> quote;
    for (int i =0; i<s.size(); i++) {
        if (s[i] == ' ') {
            quote.push_back(i); break;
        }
    }
    if (quote.size() == 0) return res;
    
    for (int i = 0; i<s.size(); i++) {
        if (s[i] == '"') {
            quote.push_back(i);
        }
    }
    if (quote.size() == 1) return res;
    if ((quote.size()-1) % 2 != 0) return res;
    res[trimmed(s.substr(quote[0], quote[1] - quote[0] +1 ))] = trimmed(s.substr(quote[1], quote[2] - quote[1] +1));
    for (int i =2; i<quote.size()-2; i++) {
        res[trimmed(s.substr(quote[i], quote[i+1] - quote[i] +1 ))] = trimmed(s.substr(quote[i+1], quote[i+2] - quote[i+1] +1));
    }   
    return res;
}
vector<string> tagsList (string s) {
    int idx = 0;
    vector<string> res;
    for (int i =0; i<s.size(); i++) {
        if (s[i] == ' ' || s[i] == '<' || s[i] == '>' || s[i] == '=' || s[i] == '/' || s[i] == '~') {
            string d = s.substr(idx,i-idx);
            res.push_back(d);
            idx = i+1;
            break;
        }
        if (s[i] == '.') {
            string d = s.substr(idx,i-idx);
            res.push_back(d);
            idx = i+1;
        }
    }
    return res;
}
string attrQueryName (string s) {
    int idx = 0;
    for (int i = 0;i<s.size(); i++) {
        if (s[i] == '~') {idx = i+1; break;}
    }
    if (idx == 0) return "";
    return trimmed(s.substr(idx,s.size() - idx));
}
int main() {
    int n, m;
    cin >> n >> m;
    map<string, map<string,int>> tags;
    map<string, map<string, string>> attr;
    stack<char> st;
    string tagName = "";
    string breaker;
    getline(cin, breaker);
    for (int i=0; i<n; i++) {
        string s;
        getline(cin,s);
        if (s.substr(0,2) == "</" && !st.empty()) {st.pop(); continue;}
        else st.push('<');
        
        if (st.size() == 1) {
            tagName = tagFinder(s);
            tags[tagName][tagName] = st.size();
            attr[tagName] = attrFinder(s);
        }else {
            string subtag = tagFinder(s);
            tags[tagName][subtag] = st.size();
            attr[subtag] = attrFinder(s);
        }
    } 
  
    for (int i =0; i<m; i++) {
        string s;
        getline(cin,s);
        vector<string> tagslist = tagsList(s);
        if (tagslist.size() == 0)  continue;
        string firstTag = tagslist.front();
        bool found = 1;
        for (int i =1; i<tagslist.size(); i++) {
            if (tags[firstTag][tagslist[i]] != i+1) {
                found = 0; break;
            }
        }
        if (found) {
            string attrQ = attrQueryName(s);

            if (tags.count(firstTag) && attr[tagslist.back()].count(attrQ)) {
                cout << attr[tagslist.back()][attrQ] << endl;
            }else {
                cout << "Not Found!" << endl;
            }
        }else {
            cout << "Not Found!" << endl;
        }
    }
    return 0;
}
