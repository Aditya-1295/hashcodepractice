// Teams of 2, 3, or 4 people all ordered pizzas
// did not specify what i ngredients to put on the pizzas
// exactly one pizza should be available per person
// The goal is to maximize, per team, the number of 
// different ingredients used in all their pizzas.

#include <bits/stdc++.h> 
#include <iostream>
#include <fstream>
#include <set>
#include <sstream>
using namespace std; 


class Pizza{
    public:
        int index;
        set<string> ingredients;

};



int main() 
{ 
    int M;
    int t1,t2,t3;

    ifstream fin;
    fin.open("a_example.txt");
    int count = -1;
    string line;
    int input[4];
    while(getline(fin, line)) {


        istringstream is(line);

        if (count == -1){
            
            int num;
            for (int i =0;i<4;i++){
                is>>num;
                input[i] = num;
            }
            M = input[0];
            t1 = input[1];
            t2 = input[2];
            t3 = input[3];
            
        }else{

            int v;
            string ingri;
            while(true){

                
                is>>v;
                
                cout<<"Pizza index: "<<count<<" No. of ingre: "<<v<<endl;
                
                for (int i =0;i<v;i++){
                    is>>ingri;
                    cout<<ingri<<" "; // ingri is the ingridents for the pizza index count; 
                     
                }
                cout<<endl;
        
                if (is.eof()){
                    break;
                }

            }

        }

        count++;   
    }

    

    fin.close();



    cout<<M<<t1<<t2<<t3;






} 
