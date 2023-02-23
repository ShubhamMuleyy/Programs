import java.util.*;

class ArrayX
{
	public int Arr[];

	public ArrayX(int iSize)
	{
		 Arr = new int[iSize];
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("ENter the elements of array :");

		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}

	public void Display()
	{
		System.out.println("Elements of array are :");

		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			System.out.print(Arr[iCnt] + "\t");
		}
		System.out.println();
	}

}

class Marvellous extends ArrayX
{
	public Marvellous(int iSize)
	{
		super(iSize);
	}

	public void Divisible()
	{
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] % 11 == 0)
			{
				System.out.println(Arr[iCnt]);
			}
		}
	}
}


class Assignment32_5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter size of array :");
		int iSize = sobj.nextInt();

		Marvellous aobj = new Marvellous(iSize);

		aobj.Accept();
		aobj.Display();
		aobj.Divisible();
	}
}