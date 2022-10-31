#include <algorithm>
#include <fstream>
#include <functional>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <unordered_map>
#include <chrono>
#include <vector>
#include <cctype>

using namespace std;

//read file and put in vector 
int main() {

    vector<int>A,B, Main;
    int count;
    string lineData;
    double tmp;

    ifstream myfile ("file.name", ios::in);

    double number;  

    myfile >> count;
    for(int i = 0; i < count; i++) {
        myfile >> tmp;
        Main.push_back(tmp);
        cout << count;
    }

    cout << "Numbers:\n";
    cout << Main.size();
    for (int i=0; i=((Main.size())-1); i++) {
        cout << Main[i] << '\n';
    }

    cin.get(); 
    return 0;
}


//fonction of similarity
double cosineSimilarity(vector<int> A, vector<int> B) {
        const double invalid = 2.0;
        if (A.size() != B.size()) {
            return invalid;
        }

        double A_dot_B = 0.0, A_dot_A = 0.0, B_dot_B = 0.0;
        for (int i = 0; i < A.size(); ++i) {
            A_dot_B += A[i] * B[i];
            A_dot_A += A[i] * A[i];
            B_dot_B += B[i] * B[i];
        }
        return A_dot_A && B_dot_B ?
                   A_dot_B / sqrt(A_dot_A) / sqrt(B_dot_B) :
                   invalid;
}
