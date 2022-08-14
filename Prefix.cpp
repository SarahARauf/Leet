#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
using namespace std;

// int main(){
//     vector<string> strs{"flower","flow","flight"};

//     string word = strs[0];
//     //char prefix_char =  word[0];
//     string prefix_str;
//     prefix_str.push_back(word[0]); //pushback first letter  of first element
//     int shortest = 0;

//     for(auto i: strs){
//         if (i.size() > shortest){
//             shortest = i.size();
//         }
//     }


//     while(shortest != 0){

//         for(auto i: strs){
            
//         }

//     }




// }

int main(){
    vector<string> strs{"a"};

    //string word = strs[0];
    //char prefix_char =  word[0];
    //string prefix_str = strs[0];
    //prefix_str.push_back(strs[0]); //pushback first letter  of first element
    int shortest = strs[0].size();
    string prefix_str;

    for(auto i: strs){
        //cout << i << endl;
        if (i.size() <= shortest){
            shortest = i.size();
            prefix_str = i;
        }
    }

    //cout << prefix_str << endl;


    for(int i = 0; i < strs.size(); i++){
        string current = strs[i];

        //cout << prefix_str << endl;

        for (int j = 0; j < shortest; j++){
            if(prefix_str.empty()){
                cout << "string empty" << endl;
            }
            if(current[j] != prefix_str[j]){
                prefix_str.erase(j,prefix_str.back());
                break;
            }
        }

    }

    cout << prefix_str << endl;




}