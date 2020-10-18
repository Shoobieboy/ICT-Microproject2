#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() 
{
    char pass1,pass2,pass3,pass4,pass5,pass6,pass7;
    //Program Step 1 : Take input a valid password from the user
    printf("Read the instructions below and enter a permissible password \n");
    printf("Instructions for setting up the password are as follows: \n 1. The password must be 7 characters long\n 2. The password must have atleast one capital letter\n 3. The password must contain atleast one small letter\n 4. The password must contain atleast one of the special symbol : <,>,?,@,;\n");
    printf("Enter the password in this format : 1stchar 2ndchar 3rdchar 4thchar 5thchar 6thchar 7thchar\n");
    printf("Enter the password :");
    scanf("%1c%1c%1c%1c%1c%1c%1c", &pass1, &pass2, &pass3, &pass4, &pass5, &pass6, &pass7);

    //Program Step 2 : Convert the entered character to its equivalent ASCII binary representation  
    int ascii_pass1, ascii_pass2, ascii_pass3, ascii_pass4, ascii_pass5, ascii_pass6, ascii_pass7;
    ascii_pass1 = pass1; 
    ascii_pass2 = pass2; 
    ascii_pass3 = pass3; 
    ascii_pass4 = pass4; 
    ascii_pass5 = pass5; 
    ascii_pass6 = pass6; 
    ascii_pass7 = pass7;
    printf("The ASCII version of the entered characters entered is :\n");
    printf(" %c = %d\n %c = %d\n %c = %d\n %c = %d\n %c = %d\n %c = %d\n %c = %d\n", pass1,ascii_pass1, pass2,ascii_pass2, pass3,ascii_pass3, pass4,ascii_pass4,pass5,ascii_pass5,pass6,ascii_pass6,pass7,ascii_pass7);

    if ( ascii_pass1==59 || ascii_pass1==60 || (ascii_pass1 >= 62 && ascii_pass1 <= 90) || (ascii_pass1 >= 97 && ascii_pass1 <= 122))
    {
        if ( ascii_pass2==59 || ascii_pass2==60 || (ascii_pass2 >= 62 && ascii_pass2 <= 90) || (ascii_pass2 >= 97 && ascii_pass2 <= 122))
        {
            if ( ascii_pass3==59 || ascii_pass3==60 || (ascii_pass3 >= 62 && ascii_pass3 <= 90) || (ascii_pass3 >= 97 && ascii_pass3 <= 122))
            {
                if ( ascii_pass4==59 || ascii_pass4==60 || (ascii_pass4 >= 62 && ascii_pass4 <= 90) || (ascii_pass4 >= 97 && ascii_pass4 <= 122))
                {
                    if ( ascii_pass5==59 || ascii_pass5==60 || (ascii_pass5 >= 62 && ascii_pass5 <= 90) || (ascii_pass5 >= 97 && ascii_pass5 <= 122))
                    {
                        if ( ascii_pass6==59 || ascii_pass6==60 || (ascii_pass6 >= 62 && ascii_pass6 <= 90) || (ascii_pass6 >= 97 && ascii_pass6 <= 122))
                        {
                            if ( ascii_pass7==59 || ascii_pass7==60 || (ascii_pass7 >= 62 && ascii_pass7 <= 90) || (ascii_pass7 >= 97 && ascii_pass7 <= 122))
                            {

                                    //Program Step 3 : Convert the ASCII to binary format
                                    int a[8],n,i;    
                                
                                    for(i=0;ascii_pass1>0;i++)    
                                    {    
                                        a[i]=ascii_pass1%2;    
                                        ascii_pass1/=2;    
                                    }    
                                    printf("\nBinary version of %c is=", pass1);    
                                    for(i=i-1;i>=0;i--)    
                                    {    
                                        printf("%d",a[i]);    
                                    }

                                    for(i=0;ascii_pass2>0;i++)    
                                    {    
                                        a[i]=ascii_pass2%2;    
                                        ascii_pass2/=2;    
                                    }    
                                    printf("\nBinary version of %c is=", pass2);    
                                    for(i=i-1;i>=0;i--)    
                                    {    
                                        printf("%d",a[i]);    
                                    }

                                    for(i=0;ascii_pass3>0;i++)    
                                    {    
                                        a[i]=ascii_pass3%2;    
                                        ascii_pass3/=2;    
                                    }    
                                    printf("\nBinary version of %c is=", pass3);    
                                    for(i=i-1;i>=0;i--)    
                                    {    
                                        printf("%d",a[i]);    
                                    }

                                    for(i=0;ascii_pass4>0;i++)    
                                    {    
                                        a[i]=ascii_pass4%2;    
                                        ascii_pass4/=2;    
                                    }    
                                    printf("\nBinary of %c is=", pass4);    
                                    for(i=i-1;i>=0;i--)    
                                    {    
                                        printf("%d",a[i]);    
                                    }

                                    for(i=0;ascii_pass5>0;i++)    
                                    {    
                                        a[i]=ascii_pass5%2;    
                                        ascii_pass5/=2;    
                                    }    
                                    printf("\nBinary of %c is=", pass5);    
                                    for(i=i-1;i>=0;i--)    
                                    {    
                                        printf("%d",a[i]);    
                                    }

                                    for(i=0;ascii_pass6>0;i++)    
                                    {    
                                        a[i]=ascii_pass6%2;    
                                        ascii_pass6/=2;    
                                    }    
                                    printf("\nBinary of %c is=", pass6);    
                                    for(i=i-1;i>=0;i--)    
                                    {    
                                        printf("%d",a[i]);    
                                    }
                                    
                                    for(i=0;ascii_pass7>0;i++)    
                                    {    
                                        a[i]=ascii_pass7%2;    
                                        ascii_pass7/=2;    
                                    }    
                                    printf("\nBinary of %c is=", pass7);    
                                    for(i=i-1;i>=0;i--)    
                                    {    
                                        printf("%d",a[i]);    
                                    }
                            }
                            else
                            {
                                goto l1;
                            }
                            
                        }
                        else
                        {
                            goto l1;
                        }
                        
                    }
                    else
                    {
                        goto l1;
                    }
                    
                }
                else
                { 
                    goto l1;
                }
            }
            else
            {
                goto l1;            
            }
                                   
        }
        else
        {
            goto l1;
        }
        
        printf("Password entered is valid.\n");                        
    }
    else
    {
        l1 : printf("Invalid character entered!!! Try again!\n");
    }
    
    printf("\n");
    return 0;
}