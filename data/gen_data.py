import numpy as np
max_val = np.iinfo(np.int32).max
data = np.random.randint(0, max_val, size=10**8)
np.savetxt('./data.txt', data, fmt='%d')

