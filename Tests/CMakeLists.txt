include(AddCatch2)

set(SOURCE_FILES	
	Tests.cpp
)

set(LIBRARY_NAME Lib)

add_executable(UnitTests ${SOURCE_FILES})
target_link_libraries(UnitTests PRIVATE Lib Catch2::Catch2WithMain)

include(CTest)
include(Catch)
catch_discover_tests(UnitTests)
