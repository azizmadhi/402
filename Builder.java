
public class Builder 
{
    Builder() {}
    public static void main(String[] args) 
    {
      System.out.println("Please enter how many widgets to create:");
      final String input = System.console().readLine();
      final int i = Integer.parseInt(input);
      buildList(i);
    }

    private static void buildList( int size) 
    {
      Widget[] list = new Widget[size];
      for (int i = 0; i < size; i++)
      {
        //Create new widget
        list[i] = new Widget();
        //Inform user
        System.out.println(String.format("New widget [%d]:",i) + list[i]);
      }
    }
}

class Widget
{
  Widget() 
  {
    // System.out.println("Widget created");
  }
}
