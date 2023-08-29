
package array;
public class arrayAvg {
    public static void main(String[] args) {
        // Create and initialize the array
        int[] myArray = {10, 20, 30, 40};

        // Calculate the sum of the elements in the array
        int arraySum = 0;
        for (int i = 0; i < myArray.length; i++) {
            arraySum += myArray[i];
        }

        // Calculate the average by dividing the sum by the number of elements
        double average = (double) arraySum / myArray.length;

        // Display the average
        System.out.println("The average of the elements is: " + average);
    }
}