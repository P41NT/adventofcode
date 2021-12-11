#include <bits/stdc++.h>

using namespace std;

vector<bitset<25>> win_masks = {
    bitset<25> (0x108421),
    bitset<25> (0x108421 >> 1),
    bitset<25> (0x108421 >> 2),
    bitset<25> (0x108421 >> 3),
    bitset<25> (0x108421 >> 4),
    bitset<25> (0x1F00000),
    bitset<25> (0x1F00000 >> 5),
    bitset<25> (0x1F00000 >> 10),
    bitset<25> (0x1F00000 >> 15),
    bitset<25> (0x1F00000 >> 20),
}

int part1(vector<vector<int>> &matrices, vector<int> &sequence){
    vector<bitset<25>> markings;
    for(auto s : sequence){
        for(auto matrix : matrices){
        }
    }
}


int main(){
    ifstream sample_input("sample_input.txt");
    ifstream main_input("input.txt");

    string s_sequences, sequences;
    getline(sample_input, s_sequences);
    getline(main_input, sequences);

    vector<int> s_seq;
    vector<int> seq;

    string curr_digit = "";
    for(int i = 0; i < s_sequences.length(); i++){
        if(s_sequences[i] != ',') {
            curr_digit += s_sequences[i];
        }
        else{
            s_seq.push_back(stoll(curr_digit, nullptr, 10));
            curr_digit = "";
        }
    }

    for(int i = 0; i < sequences.length(); i++){
        if(sequences[i] != ',') {
            curr_digit += sequences[i];
        }
        else{
            seq.push_back(stoll(curr_digit, nullptr, 10));
            curr_digit = "";
        }
    }

    vector<vector<int>> data;
    vector<int> buffer(25);
    while(cin>>buffer[0]){
        for(int i = 1; i < 25; i++){
            cin>>buffer[i];
        }
        data.push_back(buffer);
    }

    cout<<"Sample Input\nPart 1 : "<<part1(data, s_seq)<<
        //   "\nPart 2 : "<<part2(sample, s_length)<<
          "\n================================\n"<<endl;
        //   "Main Input \nPart1 : "<<part1(data1, seq)<<endl;
        //   "\nPart2 : "<<part2(challenge, length)<<endl;
}
