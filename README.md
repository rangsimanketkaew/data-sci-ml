# Machine Learning
Tips and Tricks for Machine Learning (+Deep Learning)

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
