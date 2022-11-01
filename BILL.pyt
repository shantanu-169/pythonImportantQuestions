total_bill =300
discount_1 =20
discount_2 =10
discount_3 =5

if(total_bill >200):
    print("your discount offer applied of 20%    \n")  
    print("your final bill is   \n")
    total_bill =total_bill -float((total_bill/100)*20)
    input(total_bill)
    print("total_bill")


elif(total_bill>100 and total_bill<200):
    print("your discount offer applied is of 10%  \n")
    print("your final bill is   \n")
    total_bill=total_bill -float((total_bill/100)*10)
 
    input(total_bill)
    print("total_bill")




else :
     print("your diocount is of 5%   \n")
     print("your final bill is   \n") 
     total_bill=total_bill -float((total_bill/100)*5)
     input(total_bill)
     print("total_bill")

     

