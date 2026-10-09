#include <bits/stdc++.h>
using namespace std;



class Book{
    private:
        vector <bool> isAvailable;
    public:
        vector <string> title;
        vector <string> author;
        Book(vector <string> title,vector <string> author,vector <bool> isAvailable){
            this->title = title;
            this -> author = author;
            this -> isAvailable = isAvailable;
        }
        void borrowBook(string bookName){
            for(int i=0;i < isAvailable.size(); i++ ){
                if(title[i]==bookName) {
                    if(isAvailable[i]){
                        isAvailable[i]=false;
                        
                    }
                    else{
                        cout << "Book is not available." << endl;
                        
                    }
                    return;
                }
            }
            cout << "Book is not available." << endl;
          
        }
        string returnBook(string bookName){
            for(int i=0; i < title.size();i++){
                if(title[i]==bookName){
                    isAvailable[i]=true;
                    break;
                }
            }
            return bookName;
            
        }
        void getAvailability(string bookName){
            for(int i=0; i < title.size() ;i++){
                if(title[i]==bookName){
                    if(isAvailable[i]){
                        cout << "true" << endl;
                    }
                    else{
                        cout << "false" << endl;
                    }
                    return;
                }
            }
            cout << "false" << endl;
        }
        
};