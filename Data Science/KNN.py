from sklearn import tree
from sklearn.datasets import load_iris
from sklearn.metrics import accuracy_score
from sklearn.neighbors import KNeighborsClassifier
from sklearn.model_selection import train_test_split




def MarvellousKNeighbor():
	border = "_"*50

	iris = load_iris()

	data = iris.data
	target = iris.target

	print(border)
	print("Actual data set")
	print(border)

	for i in range(len(iris.target)):
		print("ID : %d,Label %s,Feature :%s" %(i,iris.data[i],iris.target[i]))
		print("Size of Actual data set %d"%(i + 1))


def main():

	Accuracy = MarvellousKNeighbor()
	print("Accuracy of classification algo with KNN is",Accuracy * 100,"%")

	if __name__ == "__main__":
		main()





