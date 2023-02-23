import java.util.*;

class StringDemo
{
	public void StrNCatX(String src,String dest)
	{
		char Arr[] = src.toCharArray();
		char Brr[] = dest.toCharArray();

		System.out.println(src.concat(dest));
	}


}






class Assignment35_1
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the 1 st string");
		String str1 = sobj.nextLine();

		System.out.println("Enter the 2 nd string");
		String str2 = sobj.nextLine();

		StringDemo obj = new StringDemo();

		obj.StrNCatX(str1,str2);
	}
}