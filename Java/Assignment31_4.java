import java.util.*;


class StringDemo
{
	public boolean ChkVowel(String s)
	{
		boolean bFlag = true;

		for(int i = 0;i < s.length();i++)
		{
			if(s.charAt(i) == 'a' ||s.charAt(i) == 'e' ||s.charAt(i) == 'i' ||s.charAt(i) == 'o' ||s.charAt(i) == 'u' ||s.charAt(i) == 'A' ||s.charAt(i) == 'E' ||s.charAt(i) == 'I' ||s.charAt(i) == 'O' ||s.charAt(i) == 'U' )
			{
				bFlag = true;
			}
			else
			{
				bFlag = false;
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


class Assignment31_4
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
			System.out.println("It is a vowel ");
		}
		else
		{
			System.out.println("It is not a vowel ");
		}

	}
}