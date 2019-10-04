from os import listdir
import os
import cv2

import numpy as np
pictures_num = 3 #int(input("Введіть число фотографій для однієї ділянки:"))

params = list()
final = "final/" # path to save images
i = 0
try:
    os.mkdir("final")
except OSError:
    print ("Creation of the directory %s failed" % "path")
else:
    print ("Successfully created the directory %s " % "path")

for path_to_file in listdir("images"):
    img = cv2.imread("images/" + path_to_file, cv2.IMREAD_GRAYSCALE)
    laplacian_var = cv2.Laplacian(img, cv2.CV_64F).var()

    params.append((laplacian_var, path_to_file, img))
    print(path_to_file, laplacian_var)
    if laplacian_var < 5:
        print("Image blurry")
        print()
    #cv2.imshow("Img", img)

    i += 1
    if i is pictures_num:
        best_picture = max(params)  # laplacian_var, name
        print("The winner:", best_picture[1], best_picture[0], type(best_picture[2]))
        # cv2.imshow("Img", cv2.imread("images/" + best_picture[1], cv2.IMREAD_GRAYSCALE))  # showing the best picture
        i = 0
        params = list()
        image_to_save = img = cv2.imread("images/" + best_picture[1])
 #       image_to_save.save()
        cv2.imwrite(final+best_picture[1], image_to_save)

def panorama():
    images = []
    for path_to_file in listdir(final):
        img = cv2.imread(final+path_to_file, cv2.IMREAD_COLOR)
        # img = cv2.resize(img,dim,interpolation = cv2.INTER_AREA)
        images.append(img)
    # stitcher = cv2.createStitcher()\n",
    stitcher = cv2.Stitcher.create()
    ret, pano = stitcher.stitch(images)

    if ret == cv2.STITCHER_OK:
        cv2.imshow('Panorama', pano)
        cv2.waitKey()
        cv2.destroyAllWindows()
    else:
        print("Error during Stitching", ret)
# todo save
panorama()
cv2.waitKey(0)
cv2.destroyAllWindows()
