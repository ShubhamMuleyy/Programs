import java.io.*;

class BufferedInput2
{
	public static void main(String A[]) throws IOException
	{
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);
		String name = null;
		int Age = 0;
		float marks = 0.0f;
		
		System.out.println("Enter ypur name :");
		name = bobj.readLine();

		System.out.println("Enter your age :");
		Age = Integer.parseInt(bobj.readLine());

		System.out.println("Enter your marks :");
		marks = Float.parseFloat(bobj.readLine());
		
		System.out.println("Name :"+name);
		System.out.println("Age :"+Age);
		System.out.println("marks :"+marks);

	}

}