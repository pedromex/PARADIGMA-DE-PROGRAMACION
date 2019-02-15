fibonacci_aux = \n first second->
  if n == 0 then [] else
  [first] ++ fibonacci_aux (n - 1) second (first + second)
fibonacci = \n-> fibonacci_aux n 0 1
main = putStrLn (show (fibonacci 10))