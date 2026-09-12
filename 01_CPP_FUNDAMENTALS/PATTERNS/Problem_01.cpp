/* problem 01 : print the following pattern :-
   
   123
   456
   789                                        */

   #include <iostream>
using namespace std;
int main(){

    int i=1;
    int j;
    int n=1;

    for(i>0;i<=3;i++,n+=3){
        for(j=n;j<n+3;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
