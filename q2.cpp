#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string ToStr( char c ) {
   return string( 1, c );
}

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
        string p, q, res;
        cin>>p;
        string p1;
        p1 = p;
        reverse(p1.begin(), p1.end());

        for(auto ptr: p){
            q.push_back(ptr);
            p1.insert(0, ToStr(ptr));

            res = p+q;


            //reverse(temp.begin(), temp.end());

            if(res == p1)
                break;

        }

        cout<<"Case #"<<test +1<<": "<<q<<endl;

    }
    return 0;
}