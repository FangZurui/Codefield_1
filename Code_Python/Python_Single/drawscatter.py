import pandas as pd
from matplotlib import pyplot as plt
import numpy as np

filename="E:\CodeField1\Code_Python\Python_Single\weather.csv"

#从文件中获取数值
data=pd.read_csv(filename,encoding="utf-8")
data=np.array(data)
print(data)

times,obv1s,obv2s=[],[],[]
#提取表格中每一列数据
for row in data:
    time=row[0]
    times.append(time)
    obv1=row[1]
    obv1s.append(obv1)
    obv2=row[2]
    obv2s.append(obv2)

#绘制折线图
fig=plt.figure(dpi=128,figsize=(7,6))           #初始化figure窗口，可绘制多条曲线
plt.plot(times,obv1s)
plt.plot(times,obv2s)

plt.show()
