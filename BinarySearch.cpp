class BinarySearch<T extends Comparable<T>> {
  int binarySearch(T[] array, T target) {
      int low = 0;
      int high = array.length - 1; 
    

      while (low <=high) {
        int mid = low + (high - low) / 2;

        int comparison = array[mind].compareTo(target);
        if (comparison ==0) {
            return mid; 
        } else if (comparison < 0){
           low = mid + 1;
        } else {
           high = mid -1;
         }
      }
      return -1;
}

  public static void main(String[] args) {
   BinarySearch<Integer> intSearch = new BinarySearch<>();
   integer[] intArray = {1,3,5,7,9};
   System.out.println("index of 5: " + intSearch.binarySearch(intArray,5));

    BinarySearch<Double>doubleSearch = new BinarySearch<>();
    Double[] doublearray = {1.1, 2.2, 3.3, 4.4, 5.5};
    System.out.printIn("index of 3.3: " + doubleSearch.binarySearch(doubleArray, 3.3));

    BinarySearch<String>stringSearch = new BinarySearch<>():
    String[] stringArray = {"apple", "banana", "cherry", "date"};
    System.out.printIn("index of 'cherry': " + stringSearch.binarySearch(stringArray, "cherry"));
 }
}