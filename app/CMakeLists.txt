add_executable("executable" main.cpp)
# target_include_directories("executable" PUBLIC ${OpenCV_INCLUDE_DIRS})
# target_link_libraries("executable" PUBLIC
#     opencv
#     )
target_include_directories("executable" PRIVATE
        ${OPENCV_CONFIG_FILE_INCLUDE_DIR}
        ${OPENCV_MODULE_opencv_core_LOCATION}/include
        ${OPENCV_MODULE_opencv_highgui_LOCATION}/include
)
target_link_libraries("executable" opencv_core opencv_highgui)
