import java.util.Scanner;

class Program29
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;                 
        
        scanner = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        sName = scanner.nextLine();

        System.out.println("Enter Your Age : ");
        iAge = scanner.nextInt(); 

        System.out.print("Enter Your Marks : ");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome "+sName);
        System.out.println("Your age is :"+iAge);
        System.out.println("Your Marks is :"+fMarks);
    }
}