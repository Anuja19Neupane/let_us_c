// wap that extracts part of the given string from the specified position. for example ,
// if the string is "working with strings is fun", then if form position 4, 4 characters are to be
// extracted then the program should return string as "king" . if the number of characters to be extracted
// is 0 then the program should extract entire string from the specified position.

# include <stdio.h>
#include <string.h>

void extract_string(char* input,char* output, int start_position, int num_chars)

{
    int j=0;
    for(int i=start_position;i<start_position+num_chars;i++)
    {
        output[j]=input[i];
        j++;
    }
    output[j]='\0';
}

int main()
{
    char sentence[100]="Working with strings is fun";
    char output[5];
    extract_string(sentence,output,3,4);// 0 dekhi 3 ota character
    printf("%s\n",output);
}