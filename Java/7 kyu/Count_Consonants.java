/*Write a function consonantCount, consonant_count or ConsonantCount that takes a string of English-language text and returns
the number of consonants in the string.

Consonants are all letters used to write English excluding the vowels a, e, i, o, u.
 */

public class Consonants {
    public static int getCount(String str) {
      
      int count = 0;
      
      String my_str = str.toLowerCase();
      
      for(int i = 0; i < my_str.length(); i++){
        
        char ch = my_str.charAt(i);
        if(ch=='a' || ch=='e' || ch == 'i' || ch == 'o' || ch =='u'){
          
        } else {
          if((ch >= 'a' && ch <= 'z')){
            ++count;
          }
        }
      }
      return count;
    }
  }

/* Reference solution */

public class Consonants {
    public static int getCount(String str) {
      return str.replaceAll("(?i)[aeiou\\d\\W_]", "").length();
    }
  }