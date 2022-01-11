

import java.util.*;
public class main{// here everything is written inside the class , the file
    // name and class name should be same     

      public static void main(String[] args) {  // function
        // the first function which gets called during execution is function main

        //1. printing 
        //System.out.println("hello world");   // println is itself an method 
        //method are those functions which are written inside classes.
        
        //2. variables       temporary datatype
        String name = "mango";
        int age = 21;


        //3. Data Types 
        // primitive        // storing range is fixed
        // byte - 1 [-128 to 127]
        // short - 2
        //  int - 4
        // long - 8
        // float - 4    3.14
        // double - 8
        // char - 2     a,b,c,d
        // boolean - 1 true / false

        // for long number
        //long phone = 12345678900L;
        //float pi = 3.14F;


        // non primitive/reference types      no limit in storing , no fixed size
        //String girl = new String("mango");
        String girl = "mango";
        System.out.println(girl.length());   // length is an method for the girl

        System.out.println(girl.charAt(0));     // char at the index value

        // replace
        String newgirl = girl.replace('m', 'b');        // replacing character
        //System.out.println(newgirl);

        // in java strings are immutable


        // substrings
        //System.out.println(girl.substring(0, 3));   //(start, last index-1)


        // arrays
        int[] mango = new int[3];       // array name mango , size is 3
        mango[0] = 1;
        mango[1] = 2;
        // default initialise is 0

        System.out.println(mango.length);       // length of the array
        Arrays.sort(mango);         // sorting the array
        // package needed to be imported


        int[] fruit = {1,2,3};
        int[][] fruits = {{1,2,3},{4,5,6}};
        System.out.println(fruits[1][2]);

        
        
        




        
       
    }
}