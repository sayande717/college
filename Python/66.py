import pandas as pd
#Working with Datasets
dataset={
    'vehicles':['v1','v2','v3'],
    'wheels':[2,4,6]
}
#Print the dataset
val = pd.DataFrame(dataset)
print(val,'\n')
#Working with lists
list = [2,4,6]
#Print the entire list
print(pd.Series(list))
#Create custom labels
label = pd.Series(list, index = ["l0", "l1", "l2"])
print(label['l2'])
