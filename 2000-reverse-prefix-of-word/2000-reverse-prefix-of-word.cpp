class Solution {
public:
    string reversePrefix(string word, char ch) {
        string temp;
        int n=word.size();
        int i;
        for(i=0;i<n;i++){
            if(word[i]==ch)
                break;
        }
        if(i==n)
            return word;
        int l=0,h=i;
        while(l<=h){
            swap(word[l],word[h]);
            l++;
            h--;
        }
        return word;
    }
};