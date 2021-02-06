def get_ip():
	address = request.META.get('HTTP_X_FORWARDED_FOR')
	if address:
		ip = address.split(',')[-1].strip()
	else:
		ip = request.META.get('REMOTE_ADDR')
	return ip

ip = get_ip()