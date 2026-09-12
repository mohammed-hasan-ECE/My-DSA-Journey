/* problem 3 : take a number from usser and return number series  up to that number in chronological order */
 #include <iostream>
    using namespace std;
    int main(){

        int i=1;
        int j;
        int n;
        cout<<"enter a number: ";
        cin>>n;

        for(i>0;i<=n;i++){
            for(j<i+1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }

        return 0;
    }
    /* output:
    1
    2
    3
    4
    5
    .
    .
    .
    .
    n

    */

