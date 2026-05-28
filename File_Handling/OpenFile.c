#include<stdio.h>
#include<fcntl.h>

int main()
{
    char FileName[20];
    int FD = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    FD = open(FileName, O_RDWR);
    if(FD == -1)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File is successfully created with fd : %d\n",FD);
    }

    close(FD);
    return 0;
}
// Read mode    O_RDONLY
// Write mode    O_WRONLY
// REad + Write mode    O_RDWR