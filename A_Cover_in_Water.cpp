// !! राधा-कृष्ण !! //
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define MOD 1000000007
#define INF LLONG_MAX
#define MINF LLONG_MIN

/*
ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||

ॐ भूर्भुवः स्व: तत्सवितुर्वरेण्यं भर्गो देवस्य धीमहि धियो यो नः प्रचोदयात् ॥

प्रेम तो केवल तुमसे ही है मेरी प्यारी सी आयु (Ayu)
आप हमसे प्रेम करें या ना करें हम तो जीवन के अंत तक करेंगे
*/

// code is written by @vashishk0602 (leet,gfg,cc,cf)

int hiAyu(string s, int n){
    int uttar = 0;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='.') cnt++;
        if(cnt==3) return 2;
        if(s[i]=='#'){
            uttar+=cnt;
            cnt=0;
        }
    }
    return uttar+cnt;
}

void helpMe() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout<<hiAyu(s,n)<< endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool testcase = true;
    ll test;
    if (testcase) {
        cin >> test;
        while (test--) {
            helpMe();
        }
    } else {
        helpMe();
    }

    return 0;
}