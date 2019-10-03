"#Read the images from your directory\n",
import cv2
import os
dim=(400,300)

images=[]
path = 'img2'
for file in os.listdir(path):
    img = cv2.imread(path+'/'+file, cv2.IMREAD_COLOR)
    #img = cv2.resize(img,dim,interpolation = cv2.INTER_AREA)
    images.append(img)

#stitcher = cv2.createStitcher()\n",
stitcher = cv2.Stitcher.create()
ret,pano = stitcher.stitch(images)

if ret==cv2.STITCHER_OK:
    cv2.imshow('Panorama',pano)
    cv2.waitKey()
    cv2.destroyAllWindows()
else:
    print("Error during Stitching", ret)
