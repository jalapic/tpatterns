#/bin/sh
nvcc -I"/opt/matlab/extern/include" --cuda "mex_CALC_LH.cu" --output-file "mex_CALC_LH.cpp" 
/opt/matlab/bin/mex -I/opt/cuda/include -L/opt/cuda/lib64 -lcudart mex_CALC_LH.cpp
nvcc -I"/opt/matlab/extern/include" --cuda "mexD_CMP.cu" --output-file "mexD_CMP.cpp" 
/opt/matlab/bin/mex -I/opt/cuda/include -L/opt/cuda/lib64 -lcudart mexD_CMP.cpp




