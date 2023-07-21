import java.util.Scanner;

public class untitled {
    public static void main(String[] args) {
//       method 1
//        int[] array= new int[4];
//       array[0]= 20;
//       array[1]= 30;
//       array[2]= 40;
//       array[3] = 50;
//        System.out.println(array);

//        using for loop
//        Scanner sc = new Scanner(System.in);
//        int array[] = new int[5];
//            for (int i = 0; i<array.length;i++)
//            {
//             array[i]=sc.nextInt();
//
//
//
//
//    }
////        easiest way
//        System.out.print(Arrays.toString(array));


//2D array
        Scanner sc = new Scanner(System.in);
        int arr[][] = new int[3][3];
        for (int row = 0; row < arr.length; row++) {
            for (int col = 0; col < arr[row].length; row++) {
                arr[row][col] = sc.nextInt();
            }
        }
        for (int row = 0; row < arr.length; row++) {
            for (int col = 0; col < arr[row].length; row++) {

                System.out.println(arr[row][col]);
            }
        }
        System.out.println();
    }
}
 {
    
}
