import java.util.*;

class Pattern
{
	public void Pattern(int row,int col)
	{
		for(int iCnt = 1;iCnt <= row;iCnt++)
		{
			for(int iCnt1 = 1;iCnt1 <= col;iCnt1++)
			{
				if(iCnt1 == iCnt)
				{
					System.out.print(iCnt+"\t");
				}
				else if(iCnt == 1)
				{
					System.out.print(iCnt1+"\t");
				}
				else if(iCnt == row)
				{
					System.out.print(iCnt1+"\t");
				}
				else if(iCnt1 == 1)
				{
					System.out.print(iCnt1+"\t");
				}
				else if(iCnt1 == col)
				{
					System.out.print(iCnt1+"\t");
				}
				else
				{
					System.out.print(" "+"\t");
				}
				
			}
			System.out.println();
		}
	}
}




class Assignment40_5
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