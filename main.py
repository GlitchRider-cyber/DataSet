import pandas as pd
import numpy as np
df=pd.read_csv('Employee_list.csv',usecols=['Name','Age','Profession','Salary'],index_col='Name')
print(df.sort_values(by=['Age','Salary']))
print(df.groupby('Profession')['Salary'].mean())
print(df.groupby('Profession')['Salary'].max())
print(df.groupby('Profession')['Salary'].min())
print(df['Salary'].median())
print(df['Salary'].mean())
print(df['Salary'].mode()[0])
print(df['Salary'].kurt())
print(df['Salary'].skew())
df['Profession']=df['Profession'].map({
    'Engineer':0,
    'Doctor':1,
    'Teacher':2
})
print(df)
