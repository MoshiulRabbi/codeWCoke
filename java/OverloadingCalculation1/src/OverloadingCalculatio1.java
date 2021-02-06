
public class OverloadingCalculatio1 {

	
	void sum(int a,long b){System.out.println(a+b);}
	void sum(int a,int b,int c){System.out.println(a+b+c);}
	public static void main(String args[]){
	OverloadingCalculatio1 obj=new OverloadingCalculatio1();
	obj.sum(20,20);
	obj.sum(20,20,20);
	}
	}

