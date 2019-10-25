//
//  main.c
//  FileIO
//
//  Created by Arcinue, Brent Gregory on 10/23/19.
//  Copyright © 2019 Euler's Constant. All rights reserved.
//

#include <stdio.h>

int main(void){
    
    char file[100];
    printf("What file do you want to open?");
    scanf("%s", file);
    
    {
        /* Pointer to the file */
        FILE *fp1;
        /* Character variable to read the content of file */
        char c;
        
        /* Opening a file in r mode*/
        fp1= fopen (file, "r");
        
        /* Infinite loop –I have used break to come out of the loop*/
        while(1)
        {
            c = fgetc(fp1);
            if(c==EOF)
                break;
            else
                printf("%c", c);
        }
        fclose(fp1);
        return 0;
    }
}
