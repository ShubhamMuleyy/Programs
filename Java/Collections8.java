import java.util.*;

class Collections8
{
    public static void main(String arg[])
    {
        Stack <Character>sobj = new Stack<Character>();

        sobj.push('a');
        sobj.push('b');
        sobj.push('c');
        sobj.push('d');
        sobj.push('e');
    
        System.out.println("Elements of Stack :"+sobj);

        System.out.println("Popped element is :"+sobj.pop());

        System.out.println("")
    }
}