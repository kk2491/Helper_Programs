import pandas as pd

data1 = pd.read_csv("example.csv")
print(data1)

nrows = data1.shape[0]

fl = open("script_1.txt", 'a')

for i in range(0, nrows):
	temp = data1["Header1"].loc[i]
	fl.write("\t" + temp + "\n")

fl.close()

