#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;


int main()
{
/*
#ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif
*/
    int test_cases;
    cin>>test_cases;

    for(int test =0; test < test_cases; test++){
        int n;
        cin>>n;
        vector<int> ratings, order;
        unordered_map<int, int> dict;
        for(int i =0; i<n; i++){
            int rating;
            cin>>rating;
            ratings.push_back(rating);
        }
        order = ratings;
        int curr_mentor = n-1;

        sort(ratings.begin(), ratings.end());
        dict[ratings[n-1]] = ratings[n-2];

        int i =n-2;

        while(i>=0 && curr_mentor>=0){
            int mentor = ratings[curr_mentor];
            int mentee = ratings[i];
            //cout<<mentor<<" "<<mentee;
            if(mentor <= 2*mentee && curr_mentor != i){
                //cout<<" in loop";
                dict[mentee] = mentor; 
                i--;
            }
            else if(curr_mentor ==i && i ==0){
                dict[mentee] =-1;
                i--;
            }
            else if(curr_mentor ==i){
                dict[mentee] = ratings[curr_mentor-1];
                i--;
            }
            else{
                curr_mentor--;
            }
            //cout<<endl;
        }

        cout<<"Case #"<<test +1<<": ";
        for(auto ptr : order){
            //cout<<ptr<<" ";
            cout<<dict[ptr]<<" ";
        }
        cout<<endl;

    }
    return 0;
}