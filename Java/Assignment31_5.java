import java.util.*;


class StringDemo
{
	public boolean ChkVowel(String s)
	{
		boolean bFlag = false;
		char Arr[] =s.toCharArray(); 

		for(int i = 0;i < s.length();i++)
		{
			if(Arr[i] == 'a' ||Arr[i] == 'e' ||Arr[i] == 'i' ||Arr[i] == 'o' ||Arr[i] == 'u' ||Arr[i] == 'A' ||Arr[i] == 'E' ||Arr[i] == 'I' ||Arr[i] == 'O' ||Arr[i] == 'U' )
			{
				bFlag = true;
			}
		}

		if(bFlag == true)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}


class Assignment31_5
{
	public static void main(String s[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string :");

		String str = sobj.nextLine();

		StringDemo obj = new StringDemo();

		boolean bRet = obj.ChkVowel(str);

		if(bRet == true)
		{
			System.out.println("String has vowel ");
		}
		else
		{
			System.out.println("String has not a vowel ");
		}

	}
}