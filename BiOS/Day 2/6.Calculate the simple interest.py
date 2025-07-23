principal = float(input("Enter the Principal amount (P): "))
rate = float(input("Enter the Rate of interest per annum (R%): "))
time = float(input("Enter the Time period in years (T): "))
simple_interest = (principal * rate * time) / 100
print(f"Simple Interest = {simple_interest:.2f}")
