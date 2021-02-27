# Install TensorFlow

## Install packages for ML

- `conda create -n tf-gpu python=3.7.9` && `conda activate tf-gpu`
- `conda install tensorflow-gpu pandas scikit-learn`

## Check if TF can see GPU

```
from tensorflow.python.client import device_lib
print(device_lib.list_local_devices())
```
