class Maths
{
    public int iNo1;
    public int iNo2;

    public Maths()
    {
        iNo1 = 21;
        iNo2 = 31;
    }

    public Maths(int a,int b)
    {
        iNo1 = a;
        iNo2 = b;
    }

    public int Addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;

    }

    public int Multiplication()
    {
        int iAns = 0;
        iAns = iNo1 * iNo2;
        return iAns;

    }

}




class Demo1
{
    public static void main(String arr[])
    {
        System.out.println("Inside main function");

        Maths mobj1 = new Maths();
        Maths mobj2 = new Maths(11,21);

        int iRet = 0;

        iRet = mobj1.Addition();
        System.out.println("Addition is"+iRet);

        iRet = mobj2.Multiplication();
        System.out.println("Addition is"+iRet);



    }

}