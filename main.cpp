#include <bits/stdc++.h>
#include<filesystem>
#include "Encryption_Decryption.h"

int main() {
    cout << "Please enter your path: ";
    string filename;cin>>filename;
    if(filesystem :: exists(filename))
    {
        vector<char> data = readBinaryFile(filename);
        cout << "Do you want to encrypt(e) or decrypt(d) the file: ";
        int shift;
        char mode;cin>>mode;
        if(mode=='e'||mode=='E')
        {
            shift =3;
            caesarCipher(data, shift);
            string encryptedContent = convertBytesToString(data);
            writeToFile(filename, encryptedContent);
            cout << "File encrypted and saved successfully." << endl;
        }
        else if(mode=='d'||mode=='D')
        {
            shift =-3;
            caesarCipher(data, shift);
            string encryptedContent = convertBytesToString(data);
            writeToFile(filename, encryptedContent);
            cout << "File decrypted and saved successfully." << endl;
        }
    }
    else
    {
        cout << "Error: Path does not exist." << endl;
        cout << "Please Enter The Right Path: ";
        main();
    }


    return 0;
}
