#include <bits/stdc++.h>

using namespace std;

int part1(vector<int> data, int length){
    string a = "";
    string b = "";
    for(int mask = (1 << (length - 1)); mask >= 1; mask >>= 1){
        int ones = 0, zeroes = 0;
        for(auto d : data){
            if(d & mask) ones++;
            else zeroes++;
        }
        if(ones >= zeroes) a += "1";
        else a += "0";
        
        if(zeroes <= ones) b += "0";
        else b += "1";
    }
    return stoll(a, nullptr, 2) * stoll(b, nullptr, 2);
}

int part2(vector<int> data, int length){
    string a = "";
    string b = "";
    vector<int> d1 = data;
    vector<int> d2 = data;
    for(int mask = (1<<(length - 1)); mask >= 1; mask >>= 1){
        vector<int> ones, zeroes;
        for(auto d : d1){
            if(d & mask) ones.push_back(d);
            else zeroes.push_back(d);
        }
        if(ones.size() >= zeroes.size()) d1 = ones;
        else d1 = zeroes;
    }

    for(int mask = (1<<(length - 1)); mask >= 1; mask >>= 1){
        vector<int> ones, zeroes;
        for(auto d : d2){
            if(d & mask) ones.push_back(d);
            else zeroes.push_back(d);
        }
        if(zeroes.size() <= ones.size()) d2 = zeroes;
        else d2 = ones;
    }
    return d1[0] * d2[0];
    // return d1[0];
}

int main(){
    ifstream sample_input("sample_input.txt");
    ifstream main_input("input.txt");

    string s;
    vector<int> sample, challenge;
    while(sample_input>>s){
        sample.push_back(stoll(s, nullptr, 2));
    }
    int s_length = s.length();
    while(main_input>>s){
        challenge.push_back(stoll(s, nullptr, 2));
    }
    int length = s.length();

    cout<<"Sample Input\nPart 1 : "<<part1(sample, s_length)<<
          "\nPart 2 : "<<part2(sample, s_length)<<
          "\n================================\n"<<
          "Main Input \nPart1 : "<<part1(challenge, length)<<
          "\nPart2 : "<<part2(challenge, length)<<endl;
}