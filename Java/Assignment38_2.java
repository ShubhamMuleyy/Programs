import java.util.*;


class Pattern
{
	public void Display(String s)
	{
		char Arr[] = s.toCharArray();
		

		for(int i = Arr.length;i >= 0;i--)
		{
			for(int j = 0;j <= Arr.length;j++)
			{
				if(i > j)
				{
					System.out.print(Arr[j] + "\t");
				}		
			}
			System.out.println();
		}	
	}
}


class Assignment38_2
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