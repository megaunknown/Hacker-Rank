#include <iostream>
using namespace std;

/*
   #
  ##
 ###
####
*/
void print(int size){
    int i, j, k;
    
    for(i=size;i>=1;i--)
    {
        for(j=1;j<i;j++)
            cout<<" ";
        
        for(k=size;k>=i;k--)
            cout<<"#";
            
        cout<< endl;
    }
}

int main(int argc, char** argv) {
	
	print(4);

	return 0;
}
