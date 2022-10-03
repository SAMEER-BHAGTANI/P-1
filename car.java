class vehicle
{
	String name;
	void drive();
}

class car extends vehicle
{
		name="My_Car";
		
		void drive()
		{
			System.out.println("Driving My_Car...!!!");
		}
	
	public static void main(String[] args)
	{
		car obj=new car();
		
		System.out.println("Name : "+obj.name);
		obj.drive();
	}
}
