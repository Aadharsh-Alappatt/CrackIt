#include<stdio.h>
#include<unistd.h>
#include<crypt.h>
#include<fstream>
#include<iostream>
using namespace std;
int main(){
        ofstream file;
        file.open("pswd.txt",ios::app);
        char id[]="atii";
        char salt[]="$6$4GfdWqHx$";
        char *en = crypt(id,salt);
        file<<"kt"<<":"<<en<<":"<<endl;
        return 0;
}