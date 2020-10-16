
solveFizzBuzz :: Int -> String
solveFizzBuzz n 
  | n `mod` 15 == 0  = "FizzBuzz"
  | n `mod` 3  == 0  = "Fizz"
  | n `mod` 5  == 0  = "Buzz"
  | otherwise        = show n

getEnd :: Int -> Int -> String
getEnd x n
  | x == n = "."
  | otherwise = ","

readAInt :: IO Int
readAInt = readLn

main = do
  n <- readAInt
  putStrLn $ unwords [ solveFizzBuzz x ++ getEnd x n | x <-[1..n]]
