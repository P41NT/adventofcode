#include <bits/stdc++.h>

using namespace std;

int part1(vector<int> a){
    int cnt = 0;
    for(int i = 1; i < a.size(); i++){
        if(a[i] > a[i-1]) cnt++;
    }
    return cnt;
}

int part2(vector<int> a){
    int count = 0;
    for(int i = 0; i < a.size() - 3; i++){
        if(a[i + 3] > a[i]) count++;
    }
    // cout<<count<<endl;
    return count;
}

// int main(){
//     part1();
//     part2();
// }

int main(){
    ifstream sample_input("sample_input.txt");
    ifstream main_input("input.txt");

    vector<int> sample, challenge;
    int n;
    while(sample_input>>n){
        sample.push_back(n);
    }
    while(main_input>>n){
        challenge.push_back(n); 
    }
    cout<<"Sample Input\nPart 1 : "<<part1(sample)<<
          "\nPart 2 : "<<part2(sample)<<
          "\n================================\n"<<
          "Main Input \nPart1 : "<<part1(challenge)<<
          "\nPart2 : "<<part2(challenge)<<endl;
}