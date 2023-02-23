import java.util.*;

class Pattern
{
	public void Pattern(int row,int col)
	{
		char ch = 'A';
		char ch1 = 'a';
		for(int iCnt = 1;iCnt <= row;iCnt++)
		{
			for(int iCnt1 = 1;iCnt1 <= col ;iCnt1++)
			{
				if(iCnt % 2 == 0)
				{
					System.out.print(ch1+"\t");
				}
				else
				{
					System.out.print(ch+"\t");
				}
				ch++;
				ch1++;
			}
			ch = 'A';
			ch1 = 'a';
			System.out.println();
		}
	}
}




class Assignment36_4
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