import Data.Ratio (numerator, denominator)
--import Math.NumberTheory.Primes.Factorisation (gcd)

-- Function to convert a number to its mixed rational form i + a/b
convertToMixedRational :: Rational -> (Integer, Integer, Integer)
convertToMixedRational x = 
  let (i, f) = properFraction x    
      num = numerator f            
      denom = denominator f        
      g = gcd num denom             
      (a, b) = (num `div` g, denom `div` g)  
  in (i, a, b)   -- Return in the form i + a/b

-- Main function to interact with the user
main :: IO ()
main = do
   putStrLn "Enter a positive rational number :"
   num <- getLine                  
   let number = read num :: Rational 
   let (i, a, b) = convertToMixedRational number  
   putStrLn $ "Mixed Rational Representation: " ++ show i ++ " + " ++ show a ++ "/" ++ show b
