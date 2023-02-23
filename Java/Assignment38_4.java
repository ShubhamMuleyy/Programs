import java.util.*;


class Pattern
{
	public void Display(String s)
	{
		char Arr[] = s.toCharArray();
		
		for(int i = Arr.length;i >= 0;i--)
		{
			for(int j = 0;j < Arr.length;j++)
			{
				if(i > j)
				{
					System.out.print("*" + "\t");
				}		
			}
			System.out.println();
		}	
		for(int i = 2;i <= Arr.length;i++)
		{
			for(int j = 1;j <= Arr.length;j++)
			{
				if(j <= i)
				{
					System.out.print("*" + "\t");
				}		
			}
			System.out.println();
		}	
	}
}


class Assignment38_4
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string :");
		String str = sobj.nextLine();

		Pattern pobj = new Pattern();
		pobj.Display(str);
	}
}