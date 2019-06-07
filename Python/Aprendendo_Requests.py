import requests

r = requests.get("https://api.codenation.dev/v1/challenge/dev-ps/generate-data?token=f17ed6eb08071cbbb546640145c635e29e4ec19e")
r.text
print(r)
