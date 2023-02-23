
import java.util.*;


class Number
{
	public int LastOcc(int Arr[],int iNo)
	{	
		int iCnt = 0;

		for(iCnt = Arr.length - 1;iCnt > 0;iCnt--)
		{
			if(Arr[iCnt] == iNo)
			{
				break;
			}
		}
		return iCnt;
	}	
}



class Assignment34_3
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

		System.out.println("Enter the number you want to find :");
		int iNo = sobj.nextInt();

		Number obj = new Number();

		int iRet = obj.LastOcc(Arr,iNo);
		System.out.println("The Last occ of that number is :"+iRet);	
	}
}