// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <vector>

int main() {
    // Write C++ code here
    
    vector <int> test_scores{100,98,89};
    cout<<"\nTest scores using array:"<<endl;
    cout<<test_scores[0]<<endl;
    cout<<test_scores[1]<<endl;
    cout<<test_scores[2]<<endl;
    cout<<test_scores.size()<<"scores in vector"<<endl;
    
    
    cout<<"\nTest scores using vector syntax:"<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    
    
    cout<<"\nEntering Test scores using vector syntax:"<<endl;
    cin>>test_scores.at(0);
    cin>>test_scores.at(1);
    cin>>test_scores.at(2);
    cout<<"\nUpdated test scores are:"<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    
    
    cout<<"\nEntering Test scores to add to vector using vector syntax:"<<endl;
    int score_to_add{0};
    cin>>score_to_add;
    test_scores.push_back(score_to_add);
    cout<<"\nTest scores are now:" << endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<test_scores.at(3)<<endl;
    
    
    cout<<"\nEntering One more Test scores to add to vector using vector syntax:"<<endl;
    cin>>score_to_add;
    test_scores.push_back(score_to_add);
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<test_scores.at(3)<<endl;
    cout<<test_scores.at(4)<<endl;
    cout<<"\nThere are now "<<test_scores.size()<<" scores in vector"<<endl;
    
    
    //example of 2D array
    
    
    vector <vector<int>> movie_ratings
    {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };
    
    cout <<"\nHere are the movie rating for the reviewer #1 using array syntax"<<endl;
    cout<<movie_ratings[0][0]<<endl;
    cout<<movie_ratings[0][1]<<endl;
    cout<<movie_ratings[0][2]<<endl;
    cout<<movie_ratings[0][3]<<endl;
    
    cout <<"\nHere are the movie rating for the reviewer #1 using vector syntax"<<endl;
    cout<<movie_ratings.at(0).at(0)<<endl;
    cout<<movie_ratings.at(0).at(1)<<endl;
    cout<<movie_ratings.at(0).at(2)<<endl;
    cout<<movie_ratings.at(0).at(3)<<endl;
    
    
    return 0;
}
