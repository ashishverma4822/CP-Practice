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

string hiAyu(vector<ll>& a){
    unordered_map<int,int>mp;
    for(int i=0;i<a.size();i++){
        mp[a[i]]++;
    }
    if(mp.size()>2) return "No";
    if(mp.size()==2){
        int b[2], k =0;
        for(auto i:mp){
            b[k] = i.second;
            k++;
        }
        if(abs(b[0]-b[1])>1) return "No";
    }
    return "Yes";
}

void helpMe() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<hiAyu(a)<<endl;
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