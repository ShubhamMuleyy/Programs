import java.util.*;

class Pattern
{
	public void Pattern(int row,int col)
	{
		int iCnt3 = 1;
		for(int iCnt = 1;iCnt <= row;iCnt++)
		{
			for(int iCnt1 = 1;iCnt1 <= col ;iCnt1++)
			{
				System.out.print(iCnt3+"\t");
				iCnt3++;
			}
			System.out.println();
		}
	}
}




class Assignment36_5
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