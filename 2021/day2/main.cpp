#include <bits/stdc++.h>

using namespace std;

int part1(vector<pair<string, int> > data){
    int x = 0, y = 0;
    for(auto d : data){
        string direction = d.first; int mag = d.second;
        if(direction == "forward") x += mag;
        if(direction == "up") y -= mag;
        if(direction == "down") y += mag;
    }
    return x*y;
}

int part2(vector<pair<string, int> > data){
    int x = 0, y = 0;
    int aim = 0;
    for(auto d: data){
        string direction = d.first; int mag = d.second;
        if(direction == "forward"){
            x += mag;
            y += aim * mag;
        }
        if(direction == "up") aim -= mag;
        if(direction == "down") aim += mag;
    }
    return x*y;
}

int main(){
    ifstream sample_input("sample_input.txt");
    ifstream main_input("input.txt");

    vector<pair<string , int> > sample, challenge;
    string d; int n;
    while(sample_input>>d && sample_input>>n){
        sample.push_back({d, n});
    }
    while(main_input>>d && main_input>>n){
        challenge.push_back({d, n}); 
    }

    cout<<"Sample Input\nPart 1 : "<<part1(sample)<<
          "\nPart 2 : "<<part2(sample)<<
          "\n================================\n"<<
          "Main Input \nPart1 : "<<part1(challenge)<<
          "\nPart2 : "<<part2(challenge)<<endl;
}