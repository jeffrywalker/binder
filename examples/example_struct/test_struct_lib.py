import sys, os

sys.path.append(os.path.join(sys.path[0], "build", "Release"))
import test_struct

f = test_struct.testers.test_my_struct()

print(f.an_int)

print("done.")
