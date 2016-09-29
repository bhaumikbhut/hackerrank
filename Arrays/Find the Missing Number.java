//Java program to find the missing number 
class missingnumber 
{
	int getmissingnumber(int a[], int n) 
	{
		int i, total;
		total  = (n+1)*(n+2)/2;   
		for ( i = 0; i< n; i++)
		   total -= a[i];
		return total;
	}


 
	public static void main(String[] args) 
	{
		missingnumber num = new missingnumber();
		int a[] = {1,2,4,5,6};
		int n = a.length;
		System.out.println(num.getmissingnumber(a, n));
	}
}