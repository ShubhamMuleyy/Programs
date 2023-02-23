import java.util.*;

class MyArray
{
	public int Arr[];
	public int Brr[];

    public MyArray(int iSize)
    {
		Arr = new int[iSize];
		Brr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length + " elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }

		System.out.println("Please enter "+Arr.length + " elements ");
        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Brr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of array are : ");

        for(int iCnt =0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }

        System.out.println();

		for(int iCnt =0; iCnt < Brr.length; iCnt++)
        {
            System.out.print(Brr[iCnt]+"\t");
        }

        System.out.println();

    }
}





class Assignment41_1
{
	public static void main(String Ar[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size of array :);
		int iSize = sobj.nextInt();

		MyArray obj = new MyArray(iSize);

		obj.Accept();
		obj.Display();

	}
}