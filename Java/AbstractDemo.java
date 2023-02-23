

abstract class Arithmetic
{
	public int Addition(int No1,int No2)
	{
		return No1 + No2;
	}
	public abstract int Substraction(int No1,int No2);
}

class Marvellous extends Arithmetic
{
	public int Substraction(int No1,int No2)
	{
		return No1 - No2;
	}
}

class AbstractDemo
{
	public static void main(String Arr[])
	{
		Arithmetic mobj = new Arthimetic();
		int Ret = 0;

		Ret = mobj.Addition(11,10);
		System.out.println("Addition is :"+Ret);

		Ret = mobj.Substraction(11,10);
		System.out.println("Substraction is :"+Ret);
		
	}

}