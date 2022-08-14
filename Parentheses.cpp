#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
#include <stack> 

using namespace std;

// int main(){
//     //Open brackets must be closed by the same type of brackets.
//     //Open brackets must be closed in the correct order.
//     string s = "{[]}"; //maybe do something with unordered map??? stacks, make sure their in pairs, if a bracket isnt in a pair -> false
//     vector<char> brackets{'(', ')', '{', '}', '[', ']'};
//     int size = s.size();
//     if (size % 2 != 0 ){
//         //return false;
//         cout << "false";
//     }
//     else{
//         for (int i = 0; i<size; i=i+2 ){
//             auto it = find(brackets.begin(), brackets.end(), s[i]);

//             int index = it - brackets.begin();

//             if(s[i+1] != brackets[index+1] || index % 2 != 0 ){ 
//                 //return false;
//                 cout << "false 1";
//             }
//         }
//         //return true;
//         cout << "TRUE";
//     }


// }


// int main(){
//     //Open brackets must be closed by the same type of brackets.
//     //Open brackets must be closed in the correct order.
//     string s = "()[]{}"; //maybe do something with unordered map??? stacks, make sure their in pairs, if stack in a pair, remove from stack, if a bracket isnt in a pair -> false
//     vector<char> brackets{'(', ')', '{', '}', '[', ']'};
//     int size = s.size();
//     vector<char> stack;
//     stack.push_back(s[0]);
//     if (size % 2 != 0 ){
//         //return false;
//         cout << "false";
//     }
//     else{
//         for (int i = 1; i < size; i++){
//             auto it = find(brackets.begin(), brackets.end(), s[i]);
//             int index = it - brackets.begin(); //index of next 
//             stack.push_back(s[i]);
//             cout << "i = " << i << "\t";
//             cout << "index = " << index << "\t";
//             cout << "getting pushed: " << s[i] << "\t";
//             cout << "size of stack b4: " << stack.size() << "\t";

//             if(stack[stack.size()-2] == brackets[index-1] && index % 2 == 1 ){ //if matches & index not even (index is closing bracket)
//                 stack.pop_back();
//                 stack.pop_back();
//             }

//             cout << "size of stack aft: " << stack.size() << "\t";

//             for (int j = 0; j < stack.size(); j++){
//                 cout << stack[j] << "\t";
//             }
//             cout << endl;

//         }

//         if (stack.size() != 0){
//             cout << "false1";
//         }
//         else{
//             cout << "true";
//         }
        
//     }

// }

// int main(){
//     //Open brackets must be closed by the same type of brackets.
//     //Open brackets must be closed in the correct order.
//     string s = "()"; //maybe do something with unordered map??? stacks, make sure their in pairs, if stack in a pair, remove from stack, if a bracket isnt in a pair -> false
//     vector<char> brackets{'(', ')', '{', '}', '[', ']'};
//     int size = s.size();
//     vector<char> stack;
//     stack.push_back(s[0]);
//     if (size % 2 != 0 ){
//         return false;
//         //cout << "false";
//     }
//     else{
//         for (int i = 1; i < size; i++){
//             auto it = find(brackets.begin(), brackets.end(), s[i]);
//             int index = it - brackets.begin(); //index of next 
//             stack.push_back(s[i]);

//             if(stack[stack.size()-2] == brackets[index-1] && index % 2 == 1 ){ //if matches & index not even (index is closing bracket)
//                 stack.pop_back();
//                 stack.pop_back();
//             }

//         }

//         if (stack.size() != 0){
//             return false;
//             //cout << "false1";
//         }
//         else{
//             return true;
//             //cout << "true";
//         }
        
//     }

// }

// int main(){
//     //Open brackets must be closed by the same type of brackets.
//     //Open brackets must be closed in the correct order.
//     string s = "[[]]"; //maybe do something with unordered map??? stacks, make sure their in pairs, if stack in a pair, remove from stack, if a bracket isnt in a pair -> false
//     vector<char> brackets{'(', ')', '{', '}', '[', ']'};
//     int size = s.size();
//     vector<char> stack;
//     stack.push_back(s[0]);
//     if (size % 2 != 0 ){
//         //return false;
//         cout << "false";
//     }
//     else{
//         for (int i = 1; i < size; i++){
//             auto it = find(brackets.begin(), brackets.end(), s[i]);
//             int index = it - brackets.begin(); //index of next 
//             stack.push_back(s[i]);
//             cout << "i = " << i << "\t";
//             cout << "index = " << index << "\t";
//             cout << "getting pushed: " << s[i] << "\t";
//             cout << "size of stack b4: " << stack.size() << "\t";

//             int stacksize = stack.size()-2;
//             cout << stacksize << "\t";

//             if(stack[stacksize] == brackets[index-1] && index % 2 == 1){ //if matches & index not even (index is closing bracket)
//                 stack.pop_back();
//                 stack.pop_back();
//             }

//             cout << "size of stack aft: " << stack.size() << "\t";

//             for (int j = 0; j < stack.size(); j++){
//                 cout << stack[j] << "\t";
//             }
//             cout << endl;

//         }

//         if (stack.size() != 0){
//             cout << "false1";
//         }
//         else{
//             cout << "true";
//         }
        
//     }

// }


int main(){
    //Open brackets must be closed by the same type of brackets.
    //Open brackets must be closed in the correct order.
    string s = "(("; //maybe do something with unordered map??? stacks, make sure their in pairs, if stack in a pair, remove from stack, if a bracket isnt in a pair -> false
    vector<char> brackets{'(', ')', '{', '}', '[', ']'};
    int size = s.size();
    vector<char> stack;
    stack.push_back(s[0]);
    if (size % 2 != 0 ){
        //return false;
        cout << "false";
    }
    else{
        for (int i = 1; i < size; i++){
            auto it = find(brackets.begin(), brackets.end(), s[i]);
            int index = it - brackets.begin(); //index of next 
            stack.push_back(s[i]);
            cout << "i = " << i << "\t";
            cout << "index = " << index << "\t";
            cout << "getting pushed: " << s[i] << "\t";
            cout << "size of stack b4: " << stack.size() << "\t";

            int stacksize = stack.size()-2;
            cout << stacksize << "\t";

            if(stacksize >= 0){ //error w/ brackets
                if(stack[stacksize] == brackets[index-1] && index % 2 == 1){ //if matches & index not even (index is closing bracket)
                stack.pop_back();
                stack.pop_back();
                }
            }
            

            cout << "size of stack aft: " << stack.size() << "\t";

            for (int j = 0; j < stack.size(); j++){
                cout << stack[j] << "\t";
            }
            cout << endl;

        }

        if (stack.size() != 0){
            cout << "false1";
        }
        else{
            cout << "true";
        }
        
    }

}