iOSClassifier
=============

Introduction
-------------
Client Software for CNN Classifier on iOS, which allows you to take a picture / select a picture from your photolibrary, edit it, and draw a circle to indicate the part you are intested in. The App will then upload the image to the server, who will analyze the image using CNN (based on Caffe Framework, will be introduced later) and return a classification result to your device.

This project only contains the iOS client part. The server can be found here: https://github.com/EdwardDing/tinyServer4CNN
You can clone both to have a try.

Dependencies & Claim
-------------
iOSClassifier contains many third party libraries which are managed through cocoapods. All 3rd party libraries are listed below:

> ->AMSmoothAlert<br>
> ->GPUImage<br>
> ->MBProgressHUD<br>
> ->MZCroppableView

Warning: AMSmoothAlert depends on GPUImage, who does NOT support 64bit devices.
If this project cannot build successfully on your devices, install cocoapods and use `pod update`

Claim: MZCroppableView has been modified alot, including adding some touchEvent as well as a new function for adding mask to the existing image view according to the path you draw. This function will add a mask that highlight the part you are interested in.

How to use
--------------

>* Set up Caffe environment first. An specific tutorial can be found here: http://caffe.berkeleyvision.org<br>
>* Clone the tinyServer4CNN, set the path as well as IP adress in the .py file properly.<br>
>* Clone iOSClassifier, open `iOSClassifier.workspace` and do some editing work with Supporting Files/Socket/DJRSocket.h file:<br>
        
    #define IP_ADDR                      "127.0.0.1"
    #define HELLO_WORLD_SERVER_PORT      10000
    #define TIME_OUT                     5
    
> > Make sure you set the Ip address and Port Properly. <br>
> > You can leave the TIME_OUT as default, which is 5s. This indicates that you will get an alert if your device can not connect with the server in 5 seconds.<br>

>* Build and Run the project<br>

Functions to be added later
----------------------

This version of iOSClassifier is only a beta1 version.
More functions and user settings are to be added soon.

Video Demo
--------------------

![](https://github.com/EdwardDing/gitImage/raw/master/iOSClassifierDEMO.gif "Demo for iOSClassifier")
