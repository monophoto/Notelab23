#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char *argv[]){

    float sum = 0;
    int average = 0;
    if(argc <= 1){
        cout << "Please input numbers to find average.\n" ;
    }else{
        cout << "---------------------------------\n";
        for(int i=0; i < argc; i++){
            sum += atof(argv[i]);
        }

        average = sum/(argc-1);
        cout << "Average of " << argc-1 << " numbers = " << average;
        cout << "\n---------------------------------";
        
    }
}
