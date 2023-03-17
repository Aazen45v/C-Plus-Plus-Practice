// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <vector>

int main() {
    // Write C++ code here
    vector <int> vector1{};
    vector <int> vector2{};

    vector1.push_back(10);
    vector1.push_back(20);
    
    cout<<"NEW VECTOR1"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"Size of the elemets is:"<<vector1.size()<<endl;

    vector2.push_back(100);
    vector2.push_back(200);
    
    
    cout<<"            "<<endl;
    
    
    cout<<"NEW VECTOR2"<<endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<"Size of the elemets is:"<<vector2.size()<<endl;

    cout<<"            "<<endl;


    cout<<"Declaring empty 2D vector"<<endl;
    vector <vector<int>>vector_2D;
    {
        {}
    };
    
    
    vector_2D.push_back(vector1);
    vector_2D.push_back(vector2);
    
    cout<<"\nVector 2D is now:"<<endl;
    cout<<vector_2D.at(0).at(0)<<" "<<vector_2D.at(0).at(1)<<endl;
    cout<<vector_2D.at(1).at(0)<<" "<<vector_2D.at(1).at(1)<<endl;

    vector1.at(0) = 1000;
    
    cout<<"            "<<endl;
    
    cout<<"\nVector 2D is now:"<<endl;
    cout<<vector_2D.at(0).at(0)<<" "<<vector_2D.at(0).at(1)<<endl;
    cout<<vector_2D.at(1).at(0)<<" "<<vector_2D.at(1).at(1)<<endl;
    
    cout<<"            "<<endl;
    cout<<"NEW VECTOR1 after changing value"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"Size of the elemets is:"<<vector1.size()<<endl;
    
    
    return 0;
}
