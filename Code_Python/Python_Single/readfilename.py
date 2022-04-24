import os

file_path="C:\\Users\\10254\\OneDrive\\毕业设计\\MARRMoT-master\\MARRMoT\\Models\\Model files"
path_list=os.listdir(file_path)
print(path_list)
path_name=[]

def saveList(pathName):
    for file_name in pathName:
        with open("E:\\model-name.txt","a")as f:
            f.write("\'"+file_name.split(".")[0]+"\'"+",..."+"\n")
def dirList(path_list):
    for i in range(0,len(path_list)):
        path=os.path.join(file_path,path_list[i])
    if os.path.isdir(path):
        saveList(os.listdir(path))
dirList(path_list)
saveList(path_list)