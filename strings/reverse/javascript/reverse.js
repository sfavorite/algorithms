function reverseString(str) {
   if (str) {
      var temp = str.split('');
      temp = temp.reverse();
      str = temp.join('');
      return str;
  }
 }
