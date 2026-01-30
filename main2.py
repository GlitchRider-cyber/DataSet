import pandas as pd
import numpy as np
df=pd.read_csv('attainment.csv')
print(df.head())
df=df.replace('?',np.nan)
print(df[df.isnull().any(axis=1)])
df=df.loc[:,df.isnull().mean()<0.5]
print(df)