#include<iostream>
#include<vector>

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
        if(n<3){
            cout<<"Case #"<<test +1<<": "<<1<<endl;
            continue;
        }
        int res =0;
        int b =1;
        int j = n;

        while(b<=j){
            b+=2;
            j-=3;
            res++;
        }


        cout<<"Case #"<<test +1<<": "<<res<<endl;

    }
    return 0;
}