#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<char> input(){
    string in;
    vector<char> vect_in;
    cout<<"Enter the list of symbols"<<endl;
    getline(cin, in);
    int i=0;
    while(i!=in.end()){
        if(in[i]!=" "){
            vect_in.push_back(in[i]);
        }
        i++;
    }
    return vect_in;
}

vector<vector<string>> input_matrix(int n){
    int i, j, k;
    string x;
    vector<vector<string>> moves;
    for(i=0;i<n;i++){
        moves[i].push_back(getline(cin, x));
    }
    return moves;
}

int accept(vector<char> chars, string query, vector<vector<string>> moves){
    int i, j, start=0;
    for(i=0;i<query.end();i++){
        for(j=0;j<n;j++){
            if(query[i]==moves[start][j]){
                start=j;
                break;
            }
        }
    }
}

int main(){
	vector<char> symbols; int size;
	symbols = input();
	size = symbols.size();

	accept(symbols, test_string, matrix)
}



