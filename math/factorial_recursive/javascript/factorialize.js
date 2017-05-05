function factorialize(num) {
   if (num < 2) {
      return 1;
   } else {
      num = num * factorialize(num - 1);
   }
   return num;
}

console.log(factorialize(10))
