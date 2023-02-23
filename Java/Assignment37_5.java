import java.util.*;

class Pattern
{
	public void Pattern(int row,int col)
	{
		for(int iCnt = 1;iCnt <= row;iCnt++)
		{
			for(int iCnt1 = col;iCnt1 > 0;iCnt1--)
			{
				System.out.print(iCnt+"\t");
			}
			System.out.println();
		}
	}
}


class Assignment37_5
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