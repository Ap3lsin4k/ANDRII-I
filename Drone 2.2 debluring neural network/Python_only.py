from scipy.ndimage import convolve
import cv2

blurred_image = cv2.imread("2.jpg")
kernel = # Load kernel/psf
learning_rate = # You need to find this yourself, do a logarithmic line search. Small rate will always converge, but slowly. Start with 0.4 and divide by 2 every time it fails.
maxit = 100

def loss(image):
    return np.sum(convolve(image, kernel) - blurred_image)

def gradient(image):
    return convolve(convolve(image, kernel) - blurred_image)

deblurred = blurred_image.copy()
for _ in range(maxit):
    deblurred -= learning_rate*gradient(image)
