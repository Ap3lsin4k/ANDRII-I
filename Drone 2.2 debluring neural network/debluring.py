#clc;
#close all;
from cv2 import imread
import cv2
import numpy as np
from scipy.signal import convolve2d

y = imread('2.jpg')  # 'cameraman.tif');
y = np.array(y, dtype=np.float32)
y = cv2.normalize(y.astype('float'), None, 0.0, 1.0, cv2.NORM_MINMAX)
#cv2.imshow("Normalized",y);

def fspecial_gauss(size, sigma):

    """Function to mimic the 'fspecial' gaussian MATLAB function
    """

    x, y = np.mgrid[-size//2 + 1:size//2 + 1, -size//2 + 1:size//2 + 1]
    g = np.exp(-((x**2 + y**2)/(2.0*sigma**2)))
    return g/g.sum()

from scipy.ndimage.filters import generic_filter as gf

#   Define physical shape of filter mask
def circular_filter(image_data, radius):
    kernel = np.zeros((2*radius+1, 2*radius+1))
    y, x = np.ogrid[-radius:radius+1, -radius:radius+1]
    mask = x**2 + y**2 <= radius**2
    kernel[mask] = 1                
    filtered_image = gf(image_data, np.median, footprint = kernel)
    return filtered_image
img = imread('2.jpg')
#circular_filter(img, 25)
height, width, channels = img.shape
PSF = fspecial_gauss(img, 8);

#PSF = fspecial_gauss('disk', 8);

yblur = convolve2d(y,PSF); 
#figure,imshow(yblur);
#wiener deconv
#x = deconvwnr(yblur, PSF, 0.005);
#figure,imshow(x)
"""
#using blind deconv
#psf2 = fspecial('disk', 5.4);
x = deconvblind(yblur, PSF, 18);
figure,imshow(x)

"""
