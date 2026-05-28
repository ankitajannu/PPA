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
        return -1;
    }
    else
    {
        printf("File is successfully created with FD : %d\n",FD);
    }

    write(FD,"Marvellous Infosystems Pune",27);

    close(FD);
    return 0;
}
