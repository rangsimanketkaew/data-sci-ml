# Machine Learning
Tips and Tricks for Machine Learning (+Deep Learning)

## Install packages for ML

- `conda create -n tf-gpu python=3.7.9` && `conda activate tf-gpu`
- `conda install tensorflow-gpu pandas scikit-learn`


## Packages for chemistry
- `conda install -c rdkit rdkit`
- `conda install -c openbabel openbabel` # v. 2.4.1 with pybel
- `conda install -c conda-forge openbabel` # v. 3.x.x but no pybel

## Check if TF can see GPU

```
from tensorflow.python.client import device_lib
print(device_lib.list_local_devices())
```


## Dropout & Batch Normalization

- Dropout:
  - Used to avoid overfitting
  - Simple to implement
  - Widely adopted
- Batch Normalization:
  - Enables faster training / higher learning rates
  - Reduce the dependency over careful initialization
  - Widely adopted

- Apply dropout after the last batch normalization layer

## Optimizer

- AdamW (https://github.com/OverLordGoldDragon/keras-adamw)
