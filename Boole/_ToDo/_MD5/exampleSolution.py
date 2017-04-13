import sys
import itertools
import hashlib

daHash = "6b75a5b332f76d024104efa5e3e4f8ed"
for i in range(1, 100):
	print("Trying", i, "character...")
	for x in itertools.product(("a", "$"), repeat=i):
		x = str(''.join(x))
		m = hashlib.md5()
		m.update(x.encode('utf'))
		if m.hexdigest().lower() == daHash:
			print("FOUND IT: ", x)
			sys.exit()