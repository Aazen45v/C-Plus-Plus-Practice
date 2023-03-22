
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string secretMessage{};
    cout<<"Enter secret message: ";
    getline(cin,secretMessage);
                                                            //Encrypting the message
    string encryptedMessage {};
    cout<<"\nEncrypting message....."<<endl;
    
    for(char c: secretMessage){
        size_t position = alphabet.find(c);
        if(position!=string::npos){
            char newChar{key.at(position)};
            encryptedMessage+=newChar;
        } else {
            encryptedMessage+=c;
        }
    }
    cout<<"\nEncypted message: "<<encryptedMessage<<endl;
    
  
  
                                                          //Decrypting the message
    string decryptMessage {};
    cout<<"\nDecrypting the message....."<<endl;
    
    for(char c: encryptedMessage){
        size_t position = key.find(c);
        if(position!=string::npos){
        char newChar{alphabet.at(position)};
        decryptMessage+=newChar;
    } else {
        decryptMessage+=c;
    }
    }
    cout<<"\nDecypted message: "<<decryptMessage<<endl;
    return 0;
}
