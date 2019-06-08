import hashlib

criptografar = hashlib.sha1()
criptografar.update(b"a misplaced decimal point will always end up where it will do the greatest damage. unknowm")
criptografar.digest()
criptografar.hexdigest()
