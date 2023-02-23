import java.util.*;

class StringDemo
{
	public void Reverse(String s)
	{
		char Arr[] = s.toCharArray();

		for(int iCnt = Arr.length-1 ;Arr.length > 0;iCnt--)
		{
			System.out.println(Arr[iCnt]);
		}
	
	}
}



class Assignment31_7
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("ENter the string :");

		String str = sobj.nextLine();
		System.out.println("Number of chacaters are : "+str.length());

		StringDemo obj = new StringDemo();

		obj.Reverse(str);
	}
}