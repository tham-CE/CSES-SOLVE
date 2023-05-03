/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>



int main(){
	
	FILE *fp;
	fp = fopen("text.txt", "w");
    int b[5][4] ={
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11},
            {12,13,14,15},
            {16,17,18,19}
            };

for (int i=0; i<5; i++) {
    for(int j=0; j<4; j++){
    	fprintf(fp, "%d", b[i][j])	;
        fputs(" ", fp);
	}
        
    fprintf(fp, "\n");
} 

fclose(fp);
}
//FILE *fp;
                

