# -*- coding: utf-8 -*-
import numpy as np
import matplotlib.pyplot as plt

def gr4():
  NS = np.array( [10, 50, 100, 200, 300, 400, 500] )
  NSS = np.arange(0.0,2100.0, 100.1)
  coreN = [.00016075750000000000, .03222778250000000000, .15843543250000000000, 2.92659251250000000000, 5.94558274750000000000, 18.48865700750000000000, 28.51396526250000000000]
  coreH = [.13016075750000000000, .13222778250000000000, .1443543250000000000, 2.12659251250000000000, 3.44558274750000000000, 4.48865700750000000000, 7.51396526250000000000]
  
  TH= np.array([    1,     2,   4,    8,      10,    16,    20  ])
  P1= np.array([ 0.06, 0.03, 0.022, 0.02,    0.02,  0.02,  0.02 ])
  P2= np.array([ 1.165, 0.65, 0.393, 0.36,  0.35,  0.33,  0.33 ])
  P25= np.array([ 9.165, 5.95, 3.8, 2.925,  3.005,  2.685,  2.705 ])
  P3= np.array([ 54.3 , 35.58, 19.98, 17.24, 17.01, 15.8,  15.4 ])
  P4= np.array([ 108.32,64.845, 43.88, 34.71, 32.86, 31.24,  32 ])
  
  plt.plot(TH, np.log(P1), 'rs--',  markersize=8)
  plt.plot(TH, np.log(P2),  'g*--', markersize=8)
  plt.plot(TH, np.log(P25), 'c<--',  markersize=8)
  plt.plot(TH, np.log(P3), 'bo--', markersize=8) 
  plt.plot(TH, np.log(P4), 'y>--', markersize=8)
  leg = plt.legend(( u'146 событий', u'290 событий', u'448 событий', u'680 событий', u'759 событий'),'upper right', shadow=True)
  plt.xlabel(u'Число потоков')
  plt.ylabel(u'Логарифм времени работы')
  plt.xlim(1, 20)
  plt.xticks(TH)
  #plt.title('Iteratively reweighted least squares with analytic Hessian vs Newton')
  #plt.axis([0, 2010, -1, 50])
  plt.grid(True)
  plt.show()

def txx():
  TH= np.array([    1,     2,   4,    8,      10,    16,    20  ])
  P1= np.array([ 0.06, 0.03, 0.022, 0.02,    0.02,  0.02,  0.02 ])
  P2= np.array([ 1.165, 0.65, 0.393, 0.36,  0.35,  0.33,  0.33 ])
  P25= np.array([ 9.165, 5.95, 3.8, 2.925,  3.005,  2.685,  2.705 ])
  P3= np.array([ 54.3 , 35.58, 19.98, 17.24, 17.01, 15.8,  15.4 ])
  P4= np.array([ 108.32,64.845, 43.88, 34.71, 32.86, 31.24,  32 ])
  for pb, ps in [[P1,146], [P2,290], [P25, 448], [P3, 680], [P4,759]]:
      for ti,threads in enumerate(list(TH)):
          print threads,'&', ps,'&', '%.3f'%(pb[ti]),'&', '%.2f'%(pb[0]/pb[ti]), '\\\\'
      print '\hline'

def gr5():
  NS = np.array( [10, 50, 100, 200, 300, 400, 500] )
  NSS = np.arange(0.0,2100.0, 100.1)
  
  
  TH= np.array([    1,     2,   4,    8,      10,    16,    20  ])
  P1= np.array([ 0.06, 0.03, 0.022, 0.02,    0.02,  0.02,  0.02 ])
  P2= np.array([ 1.165, 0.65, 0.393, 0.36,  0.35,  0.33,  0.33 ])
  P25= np.array([ 9.165, 5.95, 3.8, 2.925,  3.005,  2.685,  2.705 ])
  P3= np.array([ 54.3 , 35.58, 19.98, 17.24, 17.01, 15.8,  15.4 ])
  P4= np.array([ 108.32,64.845, 43.88, 34.71, 32.86, 31.24,  32 ])
  
  plt.plot(TH, P1[0]/P1, 'rs--', markersize=8)
  plt.plot(TH, P2[0]/P2, 'g*--', markersize=8)
  plt.plot(TH, P25[0]/P25, 'c<--', markersize=8)
  plt.plot(TH, P3[0]/P3, 'bo--', markersize=8)
  plt.plot(TH, P4[0]/P4, '>y--', markersize=8)
  leg = plt.legend(( u'146 событий', u'290 событий', u'448 событий', u'680 событий', u'759 событий'),'lower right', shadow=True)
  plt.xlabel(u'Число потоков')
  plt.xticks(TH)
  plt.ylabel(u'Ускорение')
  plt.xlim(1, 20)
  #plt.title('Iteratively reweighted least squares with analytic Hessian vs Newton')
  #plt.axis([0, 2010, -1, 50])
  plt.grid(True)
  plt.show()
  
def gr6():
  els = [146, 290, 448, 680, 759]
  time =[0.06, 1.165, 9.16, 54.3, 108.32]
  x = np.arange(0,800,10)
  y = (1.0114**x)*0.01936
  plt.plot(x, y, '-', linewidth=20, color='#BBBBBB')
  plt.plot(els, time, 'rs--', linewidth=2)
  leg = plt.legend(( u'Экспоненциальная сложность', u'Время работы алгоритма'),'upper left', shadow=True)
  plt.xticks(els)
  plt.xlabel(u'Число событий')
  plt.ylabel(u'Время работы в секундах')
  plt.grid(True)
  plt.show()

def cuD_t():
  N =  np.array([10,    100,   250,  500,  900,  1500])
  cuT= np.array([0.002, 0.011, 0.03, 0.08, 0.26, 0.49])
  cpuT=np.array([0.002, 0.16,  0.54, 1.54, 4.187,9.94])
  plt.plot(N, cpuT,  'g*--', markersize=8)
  plt.plot(N, cuT,   'rs--',  markersize=8)
  leg = plt.legend(( u'CPU 1 поток', u'CUDA (NVIDIA 8800GTX)'),'upper left', shadow=True)
  plt.xticks(N)
  plt.xlabel(u'Число точек')
  plt.ylabel(u'Время работы в секундах')
  plt.grid(True)
  plt.show()
  
def cuD_su():
  N =  np.array([10,    100,   250,  500,  900,  1500])
  cuT= np.array([0.002, 0.011, 0.03, 0.08, 0.26, 0.49])
  cpuT=np.array([0.002, 0.16,  0.54, 1.54, 4.187,9.94])
  plt.plot(N, cpuT/cuT,  'r*-', markersize=8)
  plt.xticks(N)
  plt.xlabel(u'Число точек')
  plt.ylabel(u'Ускорение работы')
  plt.grid(True)
  plt.show()
  
def cuL_t():
  N =  np.array([3213,   6773,  8262,  11189])
  cuT= np.array([0.09,    0.3,  0.181, 0.23])
  cpuT=np.array([5.82,   37.31, 25.34, 32.31])
  nt  =np.array([35,     90,    58,    53])
  cuT=cuT/nt;
  cpuT=cpuT/nt;
  plt.plot(N, np.log(cpuT),  'g*--', markersize=8)
  plt.plot(N, np.log(cuT),   'rs--',  markersize=8)
  leg = plt.legend(( u'CPU 1 поток', u'CUDA (NVIDIA 8800GTX)'),'center left', shadow=True)
  plt.xticks(N)
  plt.xlabel(u'Длина наблюдаемого периода')
  plt.ylabel(u'Логарифм времени работы')
  plt.grid(True)
  plt.show()

def cuL_su():
  N =  np.array([3213,   6773,  8262,  11189])
  cuT= np.array([0.09,    0.3,  0.181, 0.23])
  cpuT=np.array([5.82,   37.31, 25.34, 32.31])
  nt  =np.array([35,     90,    58,    53])
  cuT=cuT/nt;
  cpuT=cpuT/nt;
  plt.plot(N, cpuT/cuT,  'r*-', markersize=8)
  plt.xticks(N)
  plt.xlabel(u'Длина наблюдаемого периода')
  plt.ylabel(u'Ускорение работы')
  plt.grid(True)
  plt.show()

def cuD_tex():
  N =  np.array([10,    100,   250,  500,  900,  1500])
  cuT= np.array([0.002, 0.011, 0.03, 0.08, 0.26, 0.49])
  cpuT=np.array([0.002, 0.16,  0.54, 1.54, 4.187,9.94])
  for i in [0, 1, 2, 3, 4, 5]:
      print N[i], '&', '%.2f'%(cpuT[i]), '&', '%.2f'%(cuT[i]), '&', '%.2f'%(cpuT[i]/cuT[i]), '\\\\'

def cuL_tex():
  N =  np.array([3213,   6773,  8262,  11189])
  cuT= np.array([0.09,    0.3,  0.181, 0.23])
  cpuT=np.array([5.82,   37.31, 25.34, 32.31])
  nt  =np.array([35,     90,    58,    53])
  cuT=cuT/nt;
  cpuT=cpuT/nt;
  for i in [0, 1, 2, 3]:
      print N[i], '&', '%.3f'%(cpuT[i]), '&', '%.6f'%(cuT[i]), '&', '%.2f'%(cpuT[i]/cuT[i]), '\\\\'

#Phenom4()
#gr6()
#gr2()
#Adcc()