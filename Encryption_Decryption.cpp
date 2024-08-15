#include<bits/stdc++.h>
#include "Encryption_Decryption.h"

using namespace std;


vector<char> readBinaryFile(const string& filename) {
    ifstream inputFile(filename, ios::binary);
    return vector<char>((istreambuf_iterator<char>(inputFile)), istreambuf_iterator<char>());
}



void caesarCipher(vector<char>& data, int shift) {
    for (char& byte : data) {
        byte = static_cast<char>(byte + shift);
    }
}

string convertBytesToString(const vector<char>& data) {
    return string(data.begin(), data.end());
}


void writeToFile(const string& filename, const string& content) {
    ofstream outputFile(filename, ios::trunc | ios::binary);
    outputFile << content;
}
