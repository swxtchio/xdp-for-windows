TARGETTYPE=LIBRARY

MSC_WARNING_LEVEL=/W4 /WX
TEST_CODE=1

UMTYPE=console
USE_MSVCRT=1
USE_UNICRT=1

INCLUDES=\
    $(SDK_INC_PATH); \
    $(XDP_SDK_INC); \
    $(XDP_ROOT)\test\build_headers\sdk; \