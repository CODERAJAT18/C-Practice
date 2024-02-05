// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int char_size;
//     printf("Enter No. of Charachters in your eID: ");
//     scanf("%d",&char_size);

//     char *char_ptr;
//     char_ptr = (char*)calloc(char_size,sizeof(char));

//     for(int i=1;i<=3;i++)
//     {
//         printf("Enter eID for Employee %d: ",i);
//         for(int j=0;j<char_size;j++)
//         {
//             scanf("%c",&char_ptr[j]);
//         }
//     }

//     for(int i=1;i<=3;i++)
//     {
//         printf("\nEmployee ID for Employee %d = %s",i,char_ptr);
//         // scanf("%s",&char_ptr[i]);
//     }
//     return 0;
// }