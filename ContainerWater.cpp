#include <iostream>
#include <vector> 
using namespace std;

int main()
{
    vector<int> height{3,2,5,6,7,8,9,3};
    int size = height.size(); //9
    int area = 0;
    //unordered_map<int, int>m;
    int shortestnum;

    for(int i = 0; i < size-1; i++ )
    {
        //tallestnum = height[i];
        for(int j = i+1; j<size; j++ )
        { 
            if (height[i] < height[j])
            {
                shortestnum = height[i];
            }
            else
            {
                shortestnum = height[j];
            }
            
            int difference = j-i;
            if(area < shortestnum * difference)
            {
                area = shortestnum * difference;
            }

            cout << height[i] << "\t";
            cout << height[j] << "\t";
            cout << j-i << "\t";
            cout << shortestnum <<"\t";
            cout << area << endl;
        }
    }

    cout << area;
        
}

// int main(){
//     vector<int> height{3,3};
//     int smallest = min(height[0], height[1]);
//     cout << smallest;

// }