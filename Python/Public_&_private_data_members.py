class ABC():
	def __init__(self, var1, var2):
		self.var1=var1
		self.__var2=var2
	def display(self):
		print("From class method, var1=", self.var1)
		print("From class method, var2=", self.__var2)
obj=ABC(10, 20)
obj.display()	
print("From class method, var1=", obj.var1)
print("From class method, var2=", obj._ABC__var2)	