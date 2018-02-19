
# Assume that the birthday and current date are correct dates (and no 
# time travel). 
#
def leap(year):
    if year%400==0:
        return True
    elif year%100==0:
        return False
    elif year%4==0:
        return True
def days(year,month):
    if month==1 or month==3 or month==5 or month==7 or month==8 or month==10  or month==12:
        return 31
    elif month==2:
        if leap(year):
            return 29
        else:
            return 28
    else:
        return 30

def next_day(year,month,day):
    if day<days(year,month):
        return (year,month,day+1)
    else:
        if month<12:
            return (year,month+1,1)
        else:
            return (year+1,1,1)

def daysBetweenDates(year1, month1, day1, year2, month2, day2):
    day=0
    while year1!=year2 or month1!=month2 or day1!=day2:
        year1,month1,day1=next_day(year1,month1,day1)
        day=day+1
       # print (day1, month1 ,year1)
        #if day==50:
         #  break
    return day
#print daysBetweenDates(2012,3,1,2012,8,25)

print daysBetweenDates(2012,1,1,2012,2,28) #58 
print daysBetweenDates(2012,1,1,2012,3,1) #60
print daysBetweenDates(2011,6,30,2012,6,30) #366
print daysBetweenDates(2011,1,1,2012,8,8) # 585 
print daysBetweenDates(1900,1,1,1999,12,31) #36523

