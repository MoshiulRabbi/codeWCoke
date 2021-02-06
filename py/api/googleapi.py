api = ""
idd = ""

from googleapiclient.discovery import build
my_api_key = api
my_cse_id = idd

def google_search(search_term, api_key, cse_id, **kwargs):
    service = build("customsearch", "v1", developerKey=api_key)
    res = service.cse().list(q=search_term, cx=cse_id, **kwargs).execute()
    return res



result = google_search("Coffee", my_api_key, my_cse_id)
print(result)