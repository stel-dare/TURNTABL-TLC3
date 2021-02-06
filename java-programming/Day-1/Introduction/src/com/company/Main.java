package com.company;

public class Main {

    public static String Weather(int temperature){
        if(temperature <= 0) return "Frozen";
        else if(temperature <= 14) return "Cold";
        else if(temperature <= 24) return "Cool";
        else if(temperature <= 40) return "Warm";
        else if(temperature <= 60) return "Hot";
        else if(temperature <= 80) return "Very Hot";
        else if(temperature <= 99) return "Extremely Hot";
     return "Boiling";
    }

    public static void OneToNine(int number){
        switch (number){
            case 0:
                System.out.println("Zero");
                break;
            case 1:
                System.out.println("One");
                break;
            case 2:
                System.out.println("Two");
                break;

            case 3:
                System.out.println("Three");
                break;

            case 4:
                System.out.println("Four");
                break;
            case 5:
                System.out.println("Five");
                break;

            case 6:
                System.out.println("Six");
                break;

            case 7:
                System.out.println("Seven");
                break;
            case 8:
                System.out.println("Eight");
                break;

            case 9:
                System.out.println("Nine");
                break;
        }
    }

    public static void RandomWithinRange() {
        // With a while loop
//        int num = 1;
//        while(num != 0){
//            System.out.println(num);
//            num = (int) (Math.random() * (3- -3 +1)) -3;
//        }

        // With do-while loop
        int num;
        do {
            num = (int) (Math.random() * (3 - -3 + 1)) - 3;
            System.out.println(num);
        } while (num != 0);
    }

    public static void PrintMultiplicationTables(){
        for(int i=1; i<=10; i++){
            for(int j=1; j<=12; j++){
                System.out.println(i+" * "+ j + " = "+i*j);
            }
            System.out.println("**************************");
        }
    }

    public static void SixNumbersInRange(int max){
    for (int i=1; i<=6; i++) System.out.println((int)(Math.random()*(max-1+1)) + 1);

    }



    public static void main(String[] args) {
	    // Check if Number if Even Or Odd
        int ran = (int)(Math.random()*100)+1;
        System.out.println(ran%2==0?"Even":"Odd");

        // Describe Weather
        System.out.println(Weather(ran));

        // Print Random Number 0-9 in word
        OneToNine((int)(Math.random()*10));

        // Random numbers between -3 and 3
        RandomWithinRange();

        // Print Multiplication Table For 1-10
        PrintMultiplicationTables();

        // Six numbers in range
        SixNumbersInRange(49);
    }
}
