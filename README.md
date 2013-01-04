# CEGUI Android Port Try (cloned from official CEGUI hg repo)

## Building instructions for linux

1. Clone this repo and checkout android-port branch
2. Open the [dependencies repo](https://github.com/ironsteel/cegui-android-deps-prebuild) in a browser and download it as a zip file
3. Extract the zip file somewhere and then copy the *dependencies* dir to the cegui root dir
4. Download the android ndk for linux from [this link](http://dl.google.com/android/ndk/android-ndk-r8d-linux-x86.tar.bz2) and extract it somewhere.
5. Add the location of the ndk to your $PATH env var
6. Add the location of cegui root dir in a env var in your bashrc/profile like this
    export CEGUI_ROOT=/path/to/cegui/root/dir
7. Goto cegui root dir and make a directory called *android* and goto that dir
8. Then run *../build_android {NDK_LOCATION} {ABI}* where  *{NDK_LOCATION}* points to your android ndk root and {ABI} is the target architecture.
    You can ommit the second argument as we build for armeabi-v7a by default since for now the dep libs are compiled only for that architecture.
9. Type *make* to build cegui and optionally specify -j option with number of compilation threds.
10. If everything goes OK, you can proceed to the [cegui test application repository](https://github.com/ironsteel/cegui-android-test) and follow the instructions there. 
