#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string reverse_string(string str){
    string str_new(str.length(), ' ');
    for(int i = 0; i < str.length(); i++){
        str_new[str.length() - i - 1] = str[i];
    }
    return str_new;
}


int main() {
    ifstream fin;
    ofstream fout;
    fin.open("filein.txt");
    fout.open("fileout.txt");
    while(!fin.eof()){
        string str;
        getline(fin, str);
        fout << reverse_string(str) << endl;
    }
    
}