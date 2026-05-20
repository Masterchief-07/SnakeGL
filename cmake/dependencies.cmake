include(cmake/CPM.cmake)

CPMAddPackage(
    NAME glfw
    GITHUB_REPOSITORY glfw/glfw
    VERSION 3.4
    GIT_TAG 3.4
    OPTIONS "GLFW_BUILD_EXAMPLES OFF" "GLFW_BUILD_TESTS OFF" "GLFW_BUILD_DOCS OFF"
)

# CPMAddPackage(
#     NAME glad
#     GITHUB_REPOSITORY Dav1dde/glad
#     VERSION v2.0.8
#     GIT_TAG v2.0.8
#     OPTIONS "GG_STATIC ON" "GG_SHARED OFF"
# )