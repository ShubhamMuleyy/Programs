import java.util.*;

class Pattern
{
	public void Pattern(int row,int col)
	{
		char ch = 'A';
		for(int iCnt = row;iCnt > 0;iCnt--)
		{
			for(int iCnt1 = col;iCnt1 > 0 ;iCnt1--)
			{
				System.out.print(iCnt+"\t");
			}
			ch++;
			System.out.println();
		}
	}
}




class Assignment36_3
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