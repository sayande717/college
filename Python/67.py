from scipy import constants
from scipy.sparse import csr_matrix 
import numpy as np
#Prints 1 liter in cubic meters
print(constants.liter)
#Prints the value of Pi
print(constants.pi)
#Viewing data except the zeros.
arr=np.array([[0,0,0,],
              [0,0,1],
              [1,0,2]])
print(csr_matrix(arr).data)
#Counting the non-zeros
print('No. of non-zero elements:',csr_matrix(arr).count_nonzero())