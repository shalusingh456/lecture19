 #include<iostream>
 using namespace std;
 
 int main()
 {
 	cout<<"input an array of elemnts which you have to sort, let us say: 6 elements";
 	
 	int i;
 	int j;
 	int a[6];
 	for(i=0;i<6;i++) cin>>a[i];
 	
 	int key;  
 	for(j=1;j<6;j++)
 	{
	 
	 
	 
	 key = a[j];  // we are storing the element which is to be inserted
 	i = j-1;
 	
 	while(a[i]>key && i>>i>=0)
 	{
 		a[i+1] = a[i];
 		i--;
 		
	 }
	 
	 a[i+1] = key;
	 
	 for(i=0;i<6;i++) cout<<a[i];
 
 }
 }