import java.util.Arrays;
import java.util.Random;

class TArray{
    int size=6;
    int[] arr;
    int index=0;
    public TArray(){
        arr=new int[size];
    }
    public TArray(int size){
        this.size=size;
        arr=new int[size];
    }
    public synchronized void add(int a){
                if(index<size){
                    arr[index++]=a;
                    System.out.println(Thread.currentThread().getName()+" added "+a);
                }
                else
                    System.out.println("No empty position left to insert data!");
    }
    public void display(){
        System.out.println("Present elements of the array:");
        for(int i:arr){
            System.out.print(i+" ");
        }
        System.out.println();
    }
}

class WriteThread implements Runnable{
    Thread t;
    TArray tArray;
    Random r=new Random();
    public WriteThread(TArray tArray){
        this.tArray=tArray;
        t=new Thread(this);
        t.start();
    }
    public void run(){
        for(int i=0;i<3;i++){
            tArray.add(r.nextInt(100));
        }
    }
}

public class thread21{
    public static void main(String[] args)throws InterruptedException{
        TArray tArray=new TArray(10);

        tArray.display();

        WriteThread t1=new WriteThread(tArray);
        WriteThread t2=new WriteThread(tArray);

        t1.t.join();
        t2.t.join();

        tArray.display();
    }
}
