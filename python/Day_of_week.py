#Find the day of the week for a given date in the past or future in Python

# importing the module
import calendar

d,m,y=map(int,input('Enter the value of date,month and year: ').split())

a=['Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday']

try:
    s=calendar.weekday(y,m,d)
    print('Weekday:',a[s])
except ValueError:
    print('You have entered an invalid date.')
