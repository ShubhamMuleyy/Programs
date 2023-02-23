import java.util.*;

class Collections6
{
    public static void main(String arg[])
    {
        ArrayList<Float>aobj =new ArrayList<Float>();
        
        aobj.add(10.6f);
        aobj.add(20.6f);
        aobj.add(30.6f);
        aobj.add(40.6f);
        aobj.add(50.6f);

        aobj.addFirst(1.60);

        aobj.addLast(100.60);

        Iterator iobj = aobj.iterator();
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
        aobj.clear();
    }
}


