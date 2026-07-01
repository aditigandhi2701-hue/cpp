// #include<iostream>
// #include<string>
// #include <cctype>
// using namespace std;
// bool isalphanum(char ch){
//     if((ch>='0' && ch<='9')||
//     ((ch>='a' && ch<='b')||
//     ((ch>='A' && ch<='Z'){
//     return true;
// }
//  return false;
// }
// bool ispalindrome(string n){
//     int st=0 ;
//     int end =s.lenght()-1;

//         while (st < end) {
//         if (!isAlphaNum(s[st])) {
//             st++;
//             continue;
//         }
//         if (!isAlphaNum(s[end])) {
//             end--;
//             continue;
//         }
//         if (tolower(s[st]) != tolower(s[end])) {
//             return false;
//         }
//         st++;
//         end--;
//     }
//     return true;
// }
//     }
// }
// nt main() {
//     string s;
//     cout << "Enter string: ";
//     getline(cin, s);

//     if (isPalindrome(s)) {
//         cout << "Palindrome" << endl;
//     } else {
//         cout << "Not Palindrome" << endl;
//     }

//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// string removeOccurrences(string s, string part) {
//     while (s.length() > 0 && s.find(part) < s.length()) {
//         s.erase(s.find(part), part.length());
//     }
//     return s;
// }

// int main() {
//     string s = "daabcbaabcbc";
//     string part = "abc";

//     cout << removeOccurrences(s, part);
//     return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;

// reverse string(string s);
//     int s=s.lenght();
//     string ans='';


// for (int i=0;i<n;i++){
//     string word='';
// }
// reverse(s.begin(),s.end()){
//     while (i<n()&& s[i]!='')
//     {word+=s[i];
//         i++
//     }
//     reverse(word.begin(),word.end()
//      if (word.length() > 0) {
//             ans += " " + word;
// }
// }return ans.substr(1); 
// }
// int main() {
//     string s;
//     getline(cin, s);

//     cout << reverseWords(s);

//     return 0;
// }
#include<iostream>
#include<vector>
#include<algorithm>>
int compress(int vector<char>&chars){
    int n=chars.size();
    int idx=0;
    for(int i=0;i<n;i++){
        char ch=char[i];
        int count=0;
    }
    while(i<n&&char[i]=ch){
        count++;
        i++;
    }
    char[idx]=ch;
    if(count>1){
        string str=to_string(count);
        for( char dig:str){
            char[idx++]=dig
        }
    }i--;
}char.resize(idx);
return idx;

int main(){
   vector<char> chars = {'a','a','b','b','c','c','c'};

    int newLength = compress(chars);

    cout << "Compressed array: ";
    for (char c : chars) {
        cout << c << " ";
    }

    cout << "\nNew Length: " << newLength;

    return 0;
}
