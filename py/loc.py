import requests
import json

api = ""

get = f"https://www.googleapis.com/geolocation/v1/geolocate?key={api}"

r = requests.post(get)

data = r.json()



print(data)