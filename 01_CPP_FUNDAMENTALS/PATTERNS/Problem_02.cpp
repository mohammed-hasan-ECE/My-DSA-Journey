/* problem 01 : print the following pattern :-

    *
    **
    ***
    ****                                      */

      #include <iostream>
    using namespace std;
    int main(){

        int i=1;
        int j;

        for(i>0;i<=4;i++){
            for(j=1;j<i+1;j++){
                cout<<"*";
            }
            cout<<endl;
        }

        return 0;
    }

    /* problem 02 : print the following pattern :-

    1
    12
    123
    1234                                      */

          #include <iostream>
    using namespace std;
    int main(){

        int i=1;
        int j;

        for(i>0;i<=4;i++){
            for(j=1;j<i+1;j++){
                cout<<j;
            }
            cout<<endl;
        }

        return 0;
    }

        /* problem 03 : print the following pattern :-

    1
    22
    333
    4444                                      */

        #include <iostream>
    using namespace std;
    int main(){

        int i=1;
        int j;

        for(i>0;i<=4;i++){
            for(j=1;j<i+1;j++){
                cout<<i;
            }
            cout<<endl;
        }

        return 0;
    }
