################################################################################
# Custom cmake module for CEGUI to find EGL 
#
# Placeholder module to create some vars we can manually set.
# Later will create a proper tests (or steal them, anyway)
################################################################################
include(FindPackageHandleStandardArgs)

find_path(EGL_H_PATH NAMES EGL/egl.h)
find_library(EGL_LIB NAMES EGL)
mark_as_advanced(EGL_H_PATH EGL_LIB)

find_package_handle_standard_args(EGL DEFAULT_MSG EGL_LIB EGL_H_PATH)

# set up output vars
if (EGL_FOUND)
    set (EGL_INCLUDE_DIR ${OPENGLES_H_PATH})
    set (EGL_LIBRARIES ${EGL_LIB})
else()
    set (OPENGLES_INCLUDE_DIR)
    set (OPENGLES_LIBRARIES)
endif()

