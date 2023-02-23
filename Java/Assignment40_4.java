import java.util.*;

class Pattern
{
	public void Pattern(int row,int col)
	{
		for(int iCnt = 1;iCnt <= row;iCnt++)
		{
			for(int iCnt1 = col;iCnt1 > 0;iCnt1--)
			{
				if(iCnt1 == iCnt || iCnt == row || iCnt1 == col ||iCnt == 1||iCnt1 == 1)
				{
					System.out.print("*"+"\t");
				}
				else if(iCnt < iCnt1)
				{
					System.out.print("#"+"\t");
				}
				else
				{
					System.out.print("$"+"\t");
				}

			}
			System.out.println();
		}
	}
}




class Assignment40_4
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