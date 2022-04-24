import pandas as pd
import numpy as np
from matplotlib import pyplot as plt

#open current file
filename=""

#read current file data,write data into list
data=pd.read_excel(filename,sheet_name="")
data=np.array(data)

#init time
time=[n for n in range(1990,2010)]

#get observations and simulations
obs,sim=[],[]
for row in data:
    obs_v=row[0]
    obs.append(obs_v)

    sim_v=row[1]
    sim.append(sim_v)

#paint broken line in one figure
fig=plt.figure(dpi=128,figsize=(8,6))
plt.plot(time,obs)
plt.plot(time,sim)