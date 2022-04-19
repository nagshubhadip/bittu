//Author:

import java.util.Scanner;

public class DetermineNextDate {
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int month;
		int day;
		int year;
		
		System.out.println("Enter a date (MM DD YYYY):");
		month = scnr.nextInt();
		day = scnr.nextInt();
		year = scnr.nextInt();
		
		//calling function isLastDayOfMonth
		if(isLastDayOfMonth(month, day)) {
			if(month == 12) {  //checking if it is the last month or not
				day = 1;
				month = 1;
				year = year+1;
			}
			else {
				day = 1;
				month = month+1;
			}
		}
		else //i.e. it is not the last day
			day = day+1;
		
		System.out.println("Next date is "+month+" "+day+" "+year);
	}
	
	public static boolean isLastDayOfMonth(int month, int day) {
		if(month == 2 && day == 28)  //for month 2
			return true;
		
		//for month which has 31 days
		else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if(day == 31)
				return true;
		}
		
		//for month which has 30 days
		else if(month == 4 || month == 6 || month == 9 || month == 11) {
			if(day == 30)
				return true;
		}
		return false;  //if last date of every month is not satisfied, then return false
	}
}

