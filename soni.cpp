#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

system("curl -sL https://deb.nodesource.com/setup_6.x | sudo -E bash -");
system("sudo apt-get install -y nodejs");
cout<<"\n\nhello\n\n";
return 0;

}
