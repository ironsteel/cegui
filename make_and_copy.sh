#!/bin/bash
make -j4
cp /home/rangeli/projects/cegui/lib/libCEGUIBase_Static.a /home/rangeli/projects/cegui-android-libs/cegui-base/armeabi
cp /home/rangeli/projects/cegui/lib/libCEGUIOpenGLESRenderer_Static.a /home/rangeli/projects/cegui-android-libs/opengles/armeabi
cp /home/rangeli/projects/cegui/lib/libCEGUITinyXMLParser_Static.a /home/rangeli/projects/cegui-android-libs/tinyxml/armeabi
cp /home/rangeli/projects/cegui/lib/libCEGUIFreeImageImageCodec_Static.a /home/rangeli/projects/cegui-android-libs/free-image-codec/armeabi
cp /home/rangeli/projects/cegui/lib/libCEGUICoreWindowRendererSet_Static.a /home/rangeli/projects/cegui-android-libs/cegui-windows/armeabi
cp /home/rangeli/projects/cegui/lib/libCEGUICommonDialogs_Static.a /home/rangeli/projects/cegui-android-libs/common-dialogs/armeabi
