# List header files
set(HEADER_FILES
    encrypt.h
    decrypt.h
)

# Include directories
target_include_directories(SecureFileCrypt PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
