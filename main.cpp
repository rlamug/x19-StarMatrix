// Rodolfo Lamug
#include <iostream>
#include <vector>

using namespace std;

int main(){

        int row; 
        int col;
        cout<<"Enter the number of rows and columns of stars:"<<endl;
        cin>>row;
        cin>>col;

        if(row <= 0){

                

        }else if(col <= 0){

                

        }else{

                vector< vector<char> > stars;
                stars.resize(row);
                for(int i = 0; i < stars.size(); i++){

                        stars[i].resize(col);

                }
                for(int i = 0; i < stars.size(); i++){

                        for(int o = 0; o < stars[i].size(); o++){

                                stars[i][o] = '*';
                                cout<<stars[i][o];

                        }
                        cout<<endl;

                }


        }


        return 0;
}
