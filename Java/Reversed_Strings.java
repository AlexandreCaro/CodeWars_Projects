/*Complete the solution so that it reverses the string passed into it.

'world'  =>  'dlrow'
'word'   =>  'drow'

 */

public class Kata {

    public static String solution(String str) {
      
      String reversed = "";
      // Your code here...
      for(int i = str.length()-1; i >= 0; i--){
        reversed += str.charAt(i);
      }
      
      return reversed;
    }
  
  }