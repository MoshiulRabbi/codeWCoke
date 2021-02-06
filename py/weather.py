import requests

#lat = input()
#lon = input()

location = input()

api = "fsdfsdf"


#by city name
getweather = f"http://api.openweathermap.org/data/2.5/weather?q={location}&appid={api} "


#by coordinates
#get_weather_by_coor = f"http://api.openweathermap.org/data/2.5/weather?lat={lat}&lon={lon}&appid={api}"



req = requests.get(getweather)
data = req.json()

if data.get('cod')=='404':
	print("data not found")
else:
	print(data)

