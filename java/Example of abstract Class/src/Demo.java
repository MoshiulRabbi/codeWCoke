
public class Demo extends MyClass {
	
	public void disp2()
	{
		System.out.println("Overriding abstract method");
	}
	
	public static void main(String[] args) {
		 
		Demo obj = new Demo();
		obj.disp2();
	}

}
