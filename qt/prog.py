import sys
from PyQt4 import QtCore, QtGui
from test_form import Ui_Form

class MyForm(QtGui.QMainWindow):
	def __init__(self, parent=None):
		QtGui.QWidget.__init__(self, parent)
		self.ui = Ui_Form()
		self.ui.setupUi(self)
		self.connect(self.ui.pushButton, QtCore.SIGNAL("clicked()"), self.lol)
		#self.ui.pushButton.pushEvent.connect(self.lol)
	#@QtCore.pyqtSlot()
	def lol(self):
		self.ui.lineEdit.setText("eeeeeeee")

app = QtGui.QApplication(sys.argv)
myapp = MyForm()
myapp.show()
sys.exit(app.exec_())
