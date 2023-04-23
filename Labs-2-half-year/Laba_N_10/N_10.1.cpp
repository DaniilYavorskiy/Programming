#include <iostream>
#include <fstream>
using namespace std;
void firstWriting()
{
    ifstream fin;
    ofstream fout;
    fin.open("file1.txt");
    fout.open("file2.txt");
    while (!fin.eof()) {
        string str;
        getline(fin, str);
        char stTemp[1000][1000];
        int kProb = 0;
        for (int i = 0; i < str.length(); i++)
            if (str[i] == ' ')
                kProb++;
        for (int i = 0; i < 1000; i++)
            for (int j = 0; j < 1000; j++)
                stTemp[i][j] = '\0';
        int j = 0;
        for (int i = 0; i < kProb + 1; i++) {
            int k = 0;
            while (str[j] != ',' && str[j] != '\0') {
                stTemp[i][k] = str[j];
                k++;
                j++;
            }
            j += 2;
        }
        int k = 0;
        int t = 0;
        for(int i = 0; i < kProb + 1; i++) if (('a' == stTemp[i][0] or 'e' == stTemp[i][0] or 'i' == stTemp[i][0] or 'o' == stTemp[i][0] or 'u' == stTemp[i][0] or 'y' == stTemp[i][0])) k++;
        for (int i = 0; i < kProb + 1; i++) { 
            if (('a' == stTemp[i][0] or 'e' == stTemp[i][0] or 'i' == stTemp[i][0] or 'o' == stTemp[i][0] or 'u' == stTemp[i][0] or 'y' == stTemp[i][0]))
               { fout << stTemp[i]; t++; if(t != k) fout << ", "; }
        }
        fout << endl;
    }
}

void secondWriting()
{
    ifstream fin;
    ofstream fout;
    fin.open("file1.txt");
    fout.open("file3.txt");
    while (!fin.eof()) {
        string str;
        getline(fin, str);
        char stTemp[1000][1000];
        int kProb = 0;
        for (int i = 0; i < str.length(); i++)
            if (str[i] == ' ')
                kProb++;
        for (int i = 0; i < 1000; i++)
            for (int j = 0; j < 1000; j++)
                stTemp[i][j] = '\0';
        int j = 0;
        for (int i = 0; i < kProb + 1; i++) {
            int k = 0;
            while (str[j] != ',' && str[j] != '\0') {
                stTemp[i][k] = str[j];
                k++;
                j++;
            }
            j += 2;
        }
        int k = 0;
        int t = 0;
        for(int i = 0; i < kProb + 1; i++) if (!('a' == stTemp[i][0] or 'e' == stTemp[i][0] or 'i' == stTemp[i][0] or 'o' == stTemp[i][0] or 'u' == stTemp[i][0] or 'y' == stTemp[i][0])) k++;
        for (int i = 0; i < kProb + 1; i++) { 
            if (!('a' == stTemp[i][0] or 'e' == stTemp[i][0] or 'i' == stTemp[i][0] or 'o' == stTemp[i][0] or 'u' == stTemp[i][0] or 'y' == stTemp[i][0]))
               { fout << stTemp[i]; t++; if(t != k) fout << ", "; }
        }
        fout << endl;
    }
}

int main()
{
    firstWriting();
    secondWriting();
    return 0;
}