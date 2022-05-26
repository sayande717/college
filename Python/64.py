import datetime as dt,calendar

today = dt.date.today()
print("Today's date is: ",today)

datetime = dt.datetime.now()
print("Today's date & time:",datetime)

cal = calendar.month(2022,5)
print("Calendar:\n",cal)