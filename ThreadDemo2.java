
  import java.util.*;
  
  class Deposite  extends Thread
  {
     int new_balance,old_balance,deposite;
     String name,AccNo;
    public Deposite(){  //defined constructor
    Scanner sc=new Scanner(System.in);
     System.out.print("Account Holder Name: ");
     name=sc.nextLine();
     System.out.print("Account Number: ");
     AccNo=sc.nextLine();
     System.out.print("Enter Deposite Amount: ");
     deposite=sc.nextInt();
     old_balance = 30231;
     new_balance=(old_balance+deposite);
    }
     public void run()
     {
       try
       {
        System.out.println();
        System.out.println(name+", Acc No. -> "+AccNo+",,  New_Balance-> "+new_balance);
        Thread.sleep(1000);
       }
       catch(InterruptedException e1)
       {
       
       }
     }
  }
  
  class Withdraw extends Thread
  {
    int new_balance,old_balance,withdraw;
    String name,AccNo;
    public Withdraw(){  //defined constructor
    Scanner sc = new Scanner(System.in);
    System.out.print("Account Holder Name: ");
    name=sc.nextLine();
    System.out.print("Account Number: ");
    AccNo=sc.nextLine();
    System.out.print("Enter Withdrawal Amount: ");
    withdraw=sc.nextInt();
    old_balance=45567;
    new_balance=(old_balance-withdraw);
    }
    public void run()
    {
     try
       {
       System.out.println();
        System.out.println(name+", Acc No. -> "+AccNo+",,  New_Balance-> "+new_balance);
        Thread.sleep(1000);
       }
       catch(InterruptedException e1)
       {
       
       }
     }
  }
  
  
  class ThreadDemo2
  {
    public static void main(String args[])
    {
      Deposite t1 = new Deposite();
      Withdraw t2 = new Withdraw();
      
      t1.run();
      t2.run();
    }
  }
  
  
