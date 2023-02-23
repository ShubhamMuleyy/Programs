import java.util.*;


class Number
{
	public int Arr[];

	public Number(int iSize)
	{
		Arr = new int[iSize];
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the array :");
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}


	public int FirstOcc(int iNo)
	{
		int iCnt = 0;
		
		for(iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] == iNo)
			{
				break;
			}
		}

		if(iCnt == Arr.length)
		{
			return -1;
		}
		else
		{
			return iCnt;
		}
		
	}
}


class Assignment34_2
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size you want in array :");
		int iSize = sobj.nextInt();

		System.out.println("Enter the number you want to search :");
		int iNo = sobj.nextInt();

		Number nobj = new Number(iSize);

		nobj.Accept();
		int iRet = nobj.FirstOcc(iNo);
	
		System.out.println("The first Occurance of that number is index :"+iRet);	
	}

}