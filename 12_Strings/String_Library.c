// This program demonstates string library functions in c

#include<stdio.h>
#include<string.h>

int main()
{
	char src1[6] = "Hello";
	char dest1[6];
	printf("-----------------Demo of strcpy-----------------\n");
	strcpy(dest1,src1);

	printf("Source string : %s\n",src1);
	printf("After copy destination string is %s\n",dest1);
  
	char src2[12] = "Hello World";
	char dest2[12];

	printf("\n\n-----------------Demo of strncpy-----------------\n");

	strncpy(dest2,src2,4);

	// We have to explicitely insert \0 at the end of string
	dest2[4]='\0';
	
	printf("Source string : %s\n",src2);
	printf("After copying 4 bytes destination string is %s\n",dest2);

	char src3[50] = "Hello ";
    char dest3[50] = "World!";
 
	printf("\n\n-----------------Demo of strcat-----------------\n");
	printf("Source string : %s\n",src3);
	printf("Destination string is %s\n",dest3);

	strcat(src3, dest3);

	printf("After concatenation string is %s\n",src3);

	char src4[50] = "Hello ";
    char dest4[50] = "World!";
 
	printf("\n\n-----------------Demo of strncat-----------------\n");
	printf("Source string : %s\n",src4);
	printf("Destination string after concatenating 3 characters is %s\n",dest4);

	strncat(src4, dest4,3);

	printf("After concatenation string is %s\n",src4);

	char src5[50] = "Hello ";
 
	printf("\n\n-----------------Demo of strlen-----------------\n");
	printf("Source string : %s \n",src5);
	printf("Sting length is %d\n",strlen(src5));

	char src6[50] = "Hello";
    char dest6[50] = "Hello";
 
	printf("\n\n-----------------Demo of strcmp-----------------\n");
	printf("First string : %s\n",src6);
	printf("Second string : %s\n",dest6);

	if(strcmp(src6,dest6)== 0)
	{
		printf("Both the strings are equal\n");
	}
	else
	{
		printf("Both the strings are not equal\n");	
	}

	char src12[50] = "Hello";
    char dest12[50] = "HElLo";
 
	printf("\n\n-----------------Demo of stricmp-----------------\n");
	printf("First string : %s\n",src12);
	printf("Second string : %s\n",dest12);

	if(stricmp(src12,dest12)== 0)
	{
		printf("Both the strings are equal\n");
	}
	else
	{
		printf("Both the strings are not equal\n");	
	}
  
	char src7[50] = "Hello World";
    char dest7[50] = "Hello";
 
	printf("\n\n-----------------Demo of strncmp-----------------\n");
	printf("First string : %s\n",src7);
	printf("Second string : %s\n",dest7);

	if(strncmp(src7,dest7,5)== 0)
	{
		printf("Both the strings are equal\n");
	}
	else
	{
		printf("Both the strings are not equal\n");	
	}

	 char str8[] = "This is a sample string";
	 char * p;

	 printf("\n\n-----------------Demo of strchr-----------------\n");

	 printf ("String is : %s\n", str8);
	 p = strchr(str8,'s');
	 printf ("Character s is found at location %d\n", p - str8 + 1);

	 printf("Search all occurance of character s is:\n");
	 while (p != NULL)
	{
		printf ("Found at position : %d\n",p - str8 + 1);
		p = strchr(p + 1,'s');
	}


	 char str9[] = "This is a sample string";
	 char * p2;

	 printf("\n\n-----------------Demo of strrchr-----------------\n");

	 printf ("String is : %s\n", str9);
	 p2 = strrchr(str9,'s');
	 printf ("Last occurance of character s is at position %d\n", p2 - str9 + 1);

	char str10[] = "Pre-Placement UNIX SDK PPL";
	char str11[] = "Placement";
	char *p3;

	printf("\n\n-----------------Demo of strstr-----------------\n");

	printf ("Source String is : %s\n", str10);
	printf ("Destination String is : %s\n", str11);

	p3 = strstr(str10,str11);
	if(p3 == NULL)
	{
		printf("There is no substring\n");
	}
	else
	{
		printf("%s is a substring of %s at location %d\n",str11,str10,p3-str10+1);
	}


	char str13[] ="First Second Third Fourth Fifth";
	char * p5;
	
	printf("\n\n-----------------Demo of strstr-----------------\n");

	printf("Original string is : %s\n",str13);
	
	printf("Tokens in string are:\n");
	p5 = strtok (str13," ");
	while (p5 != NULL)
	{
		printf ("%s\n",p5);
		p5 = strtok (NULL, " ");
	}

	return 0;
}
