#ifndef ENCRYPTION_DECRYPTION_H_INCLUDED
#define ENCRYPTION_DECRYPTION_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
vector<char> readBinaryFile(const string& filename);
void caesarCipher(vector<char>& data, int shift);
string convertBytesToString(const vector<char>& data);
void writeToFile(const string& filename, const string& content);
#endif // ENCRYPTION_DECRYPTION_H_INCLUDED
