import subprocess
import random

number = int(input("Enter your selection from 1 to 5 "))

if number == 1:
	# subprocess.call('cd ../Example_1/bin/', shell = True)
	subprocess.call('./bin/test_1 --nosample_bool', shell = True)
elif number == 2:
	# subprocess.call('cd ../Example_1/bin/', shell = True)
	subprocess.call('./bin/test_1 --sample_double=99999999.99 --sample_string="THIS IS CASE 2"', shell = True)
elif number == 3:
	# subprocess.call('cd ../Example_1/bin/', shell = True)
	subprocess.call('./bin/test_1 --sample_double=0.0000001 --sample_bool --sample_string="WHAT ARE YOU DOING"', shell = True)
elif number == 4:
	# subprocess.call('cd ../Example_1/bin/', shell = True)
	subprocess.call('./bin/test_1 --sample_int=0', shell = True)
else:
	# subprocess.call('cd ../Example_1/bin/', shell = True)
	subprocess.call('./bin/test_1', shell = True)



'''
for i in range(10):
	
	number = input("Enter your selection from 1 to 5 ")

	# number = i

	if number == 1:
		# subprocess.call('cd ../Example_1/bin/', shell = True)
		subprocess.call('./bin/test_1 --nosample_bool', shell = True)
	elif number == 2:
		# subprocess.call('cd ../Example_1/bin/', shell = True)
		subprocess.call('./bin/test_1 --sample_double=99999999.99 --sample_string="THIS IS CASE 2"', shell = True)
	elif number == 3:
		# subprocess.call('cd ../Example_1/bin/', shell = True)
		subprocess.call('./bin/test_1 --sample_double=0.0000001 --sample_bool --sample_string="WHAT ARE YOU DOING"', shell = True)
	elif number == 4:
		# subprocess.call('cd ../Example_1/bin/', shell = True)
		subprocess.call('./bin/test_1 --sample_int=0', shell = True)
	else:
		# subprocess.call('cd ../Example_1/bin/', shell = True)
		subprocess.call('./bin/test_1', shell = True)

print("Execution completed")
'''


