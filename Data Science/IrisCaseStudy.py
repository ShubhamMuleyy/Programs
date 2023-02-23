from sklearn.datasets import load_iris
from sklearn.metrics import accuracy_score
from sklearn.model_selection import train_test_split
from scipy.spatial import distance
# from sklearn.metrics.pairwise import euclidean_distances


def ecu(a,b):
	return distance.eculidean(a,b)

class MarvellousKNeighborsClassifier:

	def fit(self,trainingdata,trainingtarget):
		self.TrainingData = trainingdata
		self.TrainingTarget = trainingtarget

	def closest(self,row):
		mininumdistance = euc(row,self.TrainingData[0])
		mininumindex = 0

		for i in range(1,len(self.TrainingData)):
			Distance = euc(row, self.TrainingData[i])
			if Distance < minimumdistance:
				minimumdistance = Distance
				mininumindex = i

		return self.TrainingTarget[minimumindex]

	
	def predict(self,TestData):
		predicitions = []
		for value in TestData:
			result = closest(value)
			predictions.append(result)

		return predicitons

def MarvellousKNeighborsClassifier():
	Dataset = load_iris()

	Data = Dataset.data
	Target = Dataset.target

	#Data_train, Data_test, Target_train, Target_test = train_test_split(Data, Target, test_size = 0.5)

	Data_train, Data_test, Target_train, Target_test = train_test_split(Data, Target, test_size = 0.5)

	Classifier = KNeighborsClassifier()

	Classifier.fit(Data_train,Target_train)

	Predictions = Classifier.predict(Data_test)

	Accuracy = accuracy_score(Target_test,Predictions)

	return Accuracy

if __name__ == "__main__":
    main()