
import java.util.*;


class Number
{
	public void Display(int Arr[],int iNo1,int iNo2)
	{	
		int iCnt = 0;
		
		System.out.println("Range is :");
		for(iCnt = Arr.length - 1;iCnt >= 0;iCnt--)
		{
			if(iNo1 >= Arr[iCnt] || Arr[iCnt] <= iNo2)
			{
				System.out.println(Arr[iCnt]);
			}
		}
		
	}	
}



class Assignment34_4
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size :");
		int iSize = sobj.nextInt();

		int Arr[] = new int[iSize];
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}

		System.out.println("Enter the first number in range :");
		int iNo1 = sobj.nextInt();

		System.out.println("Enter the second number in range :");
		int iNo2 = sobj.nextInt();

		Number obj = new Number();

		obj.Display(Arr,iNo1,iNo2);	
	}
}