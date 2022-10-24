def format_duration(seconds):
    
    if (seconds==0): return 'now'
    
    minute, hour, day, year = 60, 3600, 86400, 31536000
    
    newYears = seconds//year
    
    newDays = (seconds - newYears * year)//day
    
    newHour = (seconds - newYears * year - newDays * day)//hour
    
    newMinute = (seconds - newYears * year - newDays*day - newHour * hour)//minute
    
    newSecond = (seconds - newYears * year - newDays*day - newHour * hour - newMinute * minute)
    
    print(newDays, newHour, newMinute, newSecond)
    
    time = {"year" : newYears, "day": newDays, "hour": newHour, "minute": newMinute, "second": newSecond}
    
    timeDict = {x:y for x, y in time.items() if y != 0}
    
    dict_len = len(timeDict)
    
    string = ""
    
    if (dict_len==1):
        
        first = list(timeDict)[0]
        
        string = "{} {}".format(timeDict[first], first) if timeDict[first]==1 else "{} {}s".format(timeDict[first], first)
        
    elif dict_len == 2:
        
        first = list(timeDict)[0]
        
        string += "{} {}".format(timeDict[first], first) if timeDict[first]==1 else "{} {}s".format(timeDict[first], first)
            
        string += " and "
            
        two = list(timeDict)[1]
        
        string += "{} {}".format(timeDict[two], two)  if timeDict[two]==1 else "{} {}s".format(timeDict[two], two)
        
    
    elif dict_len == 3:
        
        first = list(timeDict)[0]
        
        string += "{} {}".format(timeDict[first], first) if timeDict[first]==1 else "{} {}s".format(timeDict[first], first)
            
        string += ", "
            
        two = list(timeDict)[1]
        
        string += "{} {}".format(timeDict[two], two)  if timeDict[two]==1 else "{} {}s".format(timeDict[two], two)
    
        string  += " and "
        
        three = list(timeDict)[2]
        
        string += "{} {}".format(timeDict[three], three)  if timeDict[three]==1 else "{} {}s".format(timeDict[three], three)
    
    elif dict_len == 4:
        
        first = list(timeDict)[0]
        
        string += "{} {}".format(timeDict[first], first) if timeDict[first]==1 else "{} {}s".format(timeDict[first], first)
            
        string += ", "
            
        two = list(timeDict)[1]
        
        string += "{} {}".format(timeDict[two], two)  if timeDict[two]==1 else "{} {}s".format(timeDict[two], two)
    
        string  += ", "
        
        three = list(timeDict)[2]
        
        string += "{} {}".format(timeDict[three], three)  if timeDict[three]==1 else "{} {}s".format(timeDict[three], three)
    
        string += " and "
        
        four = list(timeDict)[3]
        
        string += "{} {}".format(timeDict[four], four)  if timeDict[four]==1 else "{} {}s".format(timeDict[four], four)
        
    elif dict_len == 5:
        
        first = list(timeDict)[0]
        
        string += "{} {}".format(timeDict[first], first) if timeDict[first]==1 else "{} {}s".format(timeDict[first], first)
            
        string += ", "
            
        two = list(timeDict)[1]
        
        string += "{} {}".format(timeDict[two], two)  if timeDict[two]==1 else "{} {}s".format(timeDict[two], two)
    
        string  += ", "
        
        three = list(timeDict)[2]
        
        string += "{} {}".format(timeDict[three], three)  if timeDict[three]==1 else "{} {}s".format(timeDict[three], three)
    
        string += ", "
        
        four = list(timeDict)[3]
        
        string += "{} {}".format(timeDict[four], four)  if timeDict[four]==1 else "{} {}s".format(timeDict[four], four)
        
        string += " and "
        
        five = list(timeDict)[4]
        
        string += "{} {}".format(timeDict[five], five)  if timeDict[five]==1 else "{} {}s".format(timeDict[five], five)
        
    
    print(string)
    
    return string

"""Your task in order to complete this Kata is to write a function which formats a duration, given as a number of seconds, 
in a human-friendly way.

The function must accept a non-negative integer. If it is zero, it just returns "now". Otherwise, the duration is expressed as 
a combination of years, days, hours, minutes and seconds.

It is much easier to understand with an example:

* For seconds = 62, your function should return 
    "1 minute and 2 seconds"
* For seconds = 3662, your function should return
    "1 hour, 1 minute and 2 seconds"
For the purpose of this Kata, a year is 365 days and a day is 24 hours.

Note that spaces are important.

Detailed rules
The resulting expression is made of components like 4 seconds, 1 year, etc. In general, a positive integer and one of
 the valid units of time, separated by a space. The unit of time is used in plural if the integer is greater than 1.

The components are separated by a comma and a space (", "). Except the last component, which is separated by " and ", 
just like it would be written in English.

A more significant units of time will occur before than a least significant one. Therefore, 1 second and 1 year is not
 correct, but 1 year and 1 second is.

Different components have different unit of times. So there is not repeated units like in 5 seconds and 1 second.

A component will not appear at all if its value happens to be zero. Hence, 1 minute and 0 seconds is not valid, but it should 
be just 1 minute.

A unit of time must be used "as much as possible". It means that the function should not return 61 seconds, but 1 minute and 
1 second instead. Formally, the duration specified by of a component must not be greater than any valid more significant 
unit of time."""

"""Tests:

test.assert_equals(format_duration(1), "1 second")
test.assert_equals(format_duration(62), "1 minute and 2 seconds")
test.assert_equals(format_duration(120), "2 minutes")
test.assert_equals(format_duration(3600), "1 hour")
test.assert_equals(format_duration(3662), "1 hour, 1 minute and 2 seconds")"""

