import sys
import itertools
import hashlib

daHash = "1b657b7fe26eda5b3c1309d340f1674d"
for i in range(1, 100):
	print("Trying", i, "character...")
	for x in itertools.product(("a", "b", "c"), repeat=i):
		x = str(''.join(x))
		m = hashlib.md5()
		m.update(x.encode('utf'))
		if m.hexdigest().lower() == daHash:
			print("FOUND IT: ", x)
			sys.exit()