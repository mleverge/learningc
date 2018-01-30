def MSD(x, y) :
	n = len(x)
	a, b, c, d = np.ones((n, n))*x, np.ones((n, n))*x, np.ones((n, n))*y, np.ones((n, n))*y
	a, c = np.transpose(a), np.transpose(c)
	for k in range(n) :
		b[k], d[k] = np.roll(b[k], -k), np.roll(d[k], -k)
	m = np.sqrt( (b-a)*(b-a) + (c-d)*(c-d))
	for k in range(n) :
		print m[-k:]
	return m
