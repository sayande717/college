from matplotlib.lines import _LineStyle
import matplotlib.pyplot as plt
import numpy as np

x = np.array([1,6])
y = np.array([3,10])
#Plot the line on the graph
plt.plot(x,y)
plt.show()

#Plot a dashed line on the graph
plt.plot(x,y,linestyle='dashed')
plt.show()

#Plot a bar graph
x = np.array(["B1", "B2", "B3", "B4"])
y = np.array([2, 4, 8, 5])
#Vertical bar
plt.bar(x,y)
#Horizontal bar
plt.barh(x,y)
plt.show()
