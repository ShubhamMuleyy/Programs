import java.util.*;

class Pattern
{
	public void Pattern(int row,int col)
	{
		char ch = 'A';
		for(int iCnt = 1;iCnt <= row;iCnt++)
		{
			for(int iCnt1 = 1;iCnt1 <= col ;iCnt1++)
			{
				System.out.print(ch+"\t");
			}
			ch = 'A';
			System.out.println();
		}
	}
}




class Assignment36_2
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter number of rows :");
		int rows = sobj.nextInt();

		System.out.println("Enter number of columns :");
		int columns = sobj.nextInt();

		Pattern pobj = new Pattern();

		pobj.Pattern(rows,columns);
	}
}