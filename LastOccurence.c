/*
    Accept N numbers from user and one number, return last occurance of that number */
/*
 
Input :
N : 8
Array :         12     46    -56      45       45       85      45      96
Number :      45
Output :        6
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      55      55
 Number :      55
 Output :        7
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      45      96
 Number :      58
 Output :        -1
 
 */
 
 
#include<stdio.h>
#include<stdlib.h>

#include<stdio.h>
#include<stdlib.h>

int LastOccurence(int arr[],int iSize,int iNo)
{
  int iCnt = 0;
  int iCount = 0;
  
    if(arr == NULL)
    {
        return -1;
    }
    if(iSize <= 0)
    {
        return -1;
    }
	
	for(iCnt = iSize-1; iCnt >= 0; iCnt--)
	{
	   if(arr[iCnt] == iNo)
	   {
		  break;
	   }
	}

    if(iCnt == iSize)
	{
	   return -1;
	}
	else
	{
	   return iCnt;
	}
}

 int main()
 {
   int iNo = 0;
   int *ptr = NULL;
   int iCnt = 0;
   int iValue = 0;
   int iRet = 0;
   
   printf("Enter The N Numbers \n");
   scanf("%d",&iNo);
   
   if(iNo == 0)
   {
	   printf("Error : Invalid Input \n");
	   return -1;
   }
   ptr = (int*) malloc (sizeof(int) * iNo);
   
   if(ptr == NULL)
   {
	   printf("Error : unable to allocate memory \n");
	   return -1;
   }
   printf("Enter the values\n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }
   
   printf("values are \n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      printf("%d\n",ptr[iCnt]);
   }
   
   printf("Enter the no to cheack first occurance\n");
   scanf("%d",&iValue);
   
   iRet = LastOccurence(ptr,iNo,iValue);
   
   if(iRet == -1)
   {
      printf("Given no is not present in the list \n");
   }
   else
   {
      printf("Last Occurence of no is : %d",iRet);
   }
   
      free(ptr);
 return 0;
 }
 
 /*
 
 output
 
 Enter The N Numbers
5
Enter the values
89
75
41
25
41
values are
89
75
41
25
41
Enter the no to cheack first occurance
41
Last Occurence of no is : 4

*/