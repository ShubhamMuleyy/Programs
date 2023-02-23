from sklearn import datasets
from sklearn.neighbors import KNeighborsClassifier
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score

def WinePredictor():

	wine = datasets.load_wine()
	
	print(wine.feature_names)

	print(wine.target_names)

	print(wine.data[0:5])

	print(wine.target)

	X_train, X_test, y_train, y_test = train_test_split(
    wine.data, wine.target, test_size= 0.30)

	knn = 	KNeighborsClassifier(n_neighbors=4)

	knn.fit(X_train,y_train)

	Predict = knn.predict(X_test)

	print("Accuracy is :",accuracy_score(y_test,Predict))


def main():
	print("Wine predictor data:")

	print("Machine learning Application")

	print("Wine Predictor using K Nearest Neighbor Algorithm")

	WinePredictor()


if __name__ == "__main__":
	main()