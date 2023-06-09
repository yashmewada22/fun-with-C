#include <stdio.h>
int count=0;
float avg;
int main()
{
    int num, avg_len;
    int arr[100];
    int elem,i,temp;
    int temp_num;
  
    temp = 0;
   
    printf("Enter the number of elements to be added in the array\n");
    scanf("%d",&elem);
    printf("Enter the numbers\n");
    for (i=0;i<elem;i++)
    {
        scanf("%d",&arr[i]);
    }
    /*Calulate the first n-moving average*/
    printf("Enter the size of average\n");
    scanf("%d",&avg_len);
    if (avg_len > elem)
    {
        avg_len = elem;
        printf("n-moving average length is greater then the length of the array, hence assigning length of array as length of n-moving average which is %d\n",elem);
    }
    for(i=0;i<avg_len;i++)
    {
        temp = temp+arr[i];
    }
    avg = temp/avg_len;
    printf("Intial avg for %d number is %f\n",avg_len,avg);
    int loop=0;
    
    /*loop the code to add the numbers at the end of the array and Calulate the n-moving average which
    will move the array by 1 element and will take only n elements for average calculation
    
    for example
    to calculate 5 - moving average
    intial array 1 2 3 4 5
    avg = 3
    add new number 6 to the end of an array as 1 2 3 4 5 6
    but for 5-moving avg calculation, only 2 3 4 5 6 will be consider and avg = 4
    */
    while (loop != 4)
    {
        printf("Do you want to add another number?\n Press 1 for yes\n Press 2 for no\n");
        scanf("%d",&num);
        /*if selected no, then the previously stored avg value will be displayed*/
        switch(num)
        {
            case 1:
            temp = 0;
            printf("Add a number\n");
            scanf("%d",&temp_num); //get a new number from the user
            if(count == 0) //adding a number for the 1st time
            {
                arr[elem] = temp_num; //store the number to end of an array and increment the count and element size
                count = count + 1;
                elem = elem + 1;
                
            }
            else if (count > 0) //adding number for the 2nd, 3rd...time
            {
                arr[elem] = temp_num;
                elem = elem + 1;
                count = count + 1;
            }
            /*shifting the array by one in every loop and calulating the total sum with the help of count
            and number of elements*/ 
            for (i=count; i < elem; i++) 
            {
                temp = temp + arr[i];
                
            }
            avg = (float)temp/(float)avg_len; //calulate the moving avergae using new number
            printf("The new avg after adding %dth element is %f\n",elem,avg);
            break;
            
            case 2:
            printf("The previous avg with %dth element is %f\n",elem,avg); //display the previous avergae
            break;
            
        }
        loop++;
   }
    return 0;
}
