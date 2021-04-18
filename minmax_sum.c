
char** split_string(char*);


void miniMaxSum(int arr_count, int* arr) {
int min=arr[0], max=arr[0];
long int sum=0;
for(int i=1i;i<arr_count;++i)
{
    if(arr[i]<min) min = arr[i];
    if(arr[i]>max) max = arr[i];
    sum+=arr[i];
}
printf("%ld %ld",  sum-max,  sum-min);

}
