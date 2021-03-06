# This file was automatically generated by bakefile.
#
# Any manual changes will be lost if it is regenerated,
# modify the source .bkl file instead if possible.

# You may define standard make variables such as CFLAGS or
# CXXFLAGS to affect the build. For example, you could use:
#
#      make CXXFLAGS=-g
#
# to build with debug information. The full list of variables
# that can be used by this makefile is:
# AR, CC, CFLAGS, CPPFLAGS, CXX, CXXFLAGS, LD, LDFLAGS, MAKE, RANLIB.

# You may also specify config=Debug|Release
# or their corresponding lower case variants on make command line to select
# the corresponding default flags values.
ifeq ($(config),debug)
override config := Debug
endif
ifeq ($(config),release)
override config := Release
endif
ifeq ($(config),Debug)
override CPPFLAGS += -DDEBUG
override CFLAGS += -g -O0
override CXXFLAGS += -g -O0
override LDFLAGS += -g
else ifeq ($(config),Release)
override CPPFLAGS += -DNDEBUG
override CFLAGS += -O2
override CXXFLAGS += -O2
else ifneq (,$(config))
$(warning Unknown configuration "$(config)")
endif
#
# Additionally, this makefile is customizable with the following
# settings:
#
#      ISHIKO_CPP_ERRORS_ROOT             Path to the Ishiko Errors installation
#      ISHIKO_CPP_PLATFORM_ROOT           Path to the Ishiko Platform installation
#      ISHIKO_CPP_BOOST_ROOT              Path to the Boost installation
#      ISHIKO_CPP_FILESYSTEM_ROOT         Path to the Ishiko FileSystem installation
#      ISHIKO_CPP_TEXT_ROOT               Path to the Ishiko/Text installation
#      ISHIKO_CPP_TYPES_ROOT              Path to the Ishiko Types installation
#      ISHIKO_CPP_DIFF_ROOT               Path to the Ishiko Diff installation
#      ISHIKO_CPP_PROCESS_ROOT            Path to the Ishiko Process installation
#      ISHIKO_CPP_TESTS_ROOT              Path to the Ishiko Tests installation
#      LIBGIT2_ROOT                       Path to the libgit2 installation
#      ISHIKO_CPP_COLLECTIONS_ROOT        Path to the Ishiko Collections installation
#      ISHIKO_CPP_TASKS_ROOT              Path to the Ishiko/Tasks installation
#      CODESMITHYIDE_VERSIONCONTROL_ROOT  Path to the CodeSmithyIDE/VersionControl installation

# Use "make RANLIB=''" for platforms without ranlib.
RANLIB ?= ranlib

CC := cc
CXX := c++

# The directory for the build files, may be overridden on make command line.
builddir = .

ifneq ($(builddir),.)
_builddir := $(if $(findstring $(abspath $(builddir)),$(builddir)),,../../)$(builddir)/../GNUmakefile/
_builddir_error := $(shell mkdir -p $(_builddir) 2>&1)
$(if $(_builddir_error),$(error Failed to create build directory: $(_builddir_error)))
endif

# ------------
# Configurable settings:
# 

# Path to the Ishiko Errors installation
ISHIKO_CPP_ERRORS_ROOT ?= $(ISHIKO_CPP)/errors
# Path to the Ishiko Platform installation
ISHIKO_CPP_PLATFORM_ROOT ?= $(ISHIKO_CPP)/platform
# Path to the Boost installation
ISHIKO_CPP_BOOST_ROOT ?= $(ISHIKO_CPP_THIRD_PARTY_BOOST)
# Path to the Ishiko FileSystem installation
ISHIKO_CPP_FILESYSTEM_ROOT ?= $(ISHIKO_CPP)/filesystem
# Path to the Ishiko/Text installation
ISHIKO_CPP_TEXT_ROOT ?= $(ISHIKO_CPP)/text
# Path to the Ishiko Types installation
ISHIKO_CPP_TYPES_ROOT ?= $(ISHIKO_CPP)/types
# Path to the Ishiko Diff installation
ISHIKO_CPP_DIFF_ROOT ?= $(ISHIKO_CPP)/diff
# Path to the Ishiko Process installation
ISHIKO_CPP_PROCESS_ROOT ?= $(ISHIKO_CPP)/process
# Path to the Ishiko Tests installation
ISHIKO_CPP_TESTS_ROOT ?= $(ISHIKO_CPP)/tests
# Path to the libgit2 installation
LIBGIT2_ROOT ?= $(LIBGIT2)
# Path to the Ishiko Collections installation
ISHIKO_CPP_COLLECTIONS_ROOT ?= $(ISHIKO_CPP)/collections
# Path to the Ishiko/Tasks installation
ISHIKO_CPP_TASKS_ROOT ?= $(ISHIKO_CPP)/tasks
# Path to the CodeSmithyIDE/VersionControl installation
CODESMITHYIDE_VERSIONCONTROL_ROOT ?= $(CODESMITHYIDE)/version-control

# ------------

all: $(_builddir)CodeSmithyGitTests

$(_builddir)CodeSmithyGitTests: $(_builddir)CodeSmithyGitTests_main.o $(_builddir)CodeSmithyGitTests_GitRepositoryTests.o $(_builddir)CodeSmithyGitTests_GitTaskFactoryTests.o
	$(CXX) -o $@ $(LDFLAGS) $(_builddir)CodeSmithyGitTests_main.o $(_builddir)CodeSmithyGitTests_GitRepositoryTests.o $(_builddir)CodeSmithyGitTests_GitTaskFactoryTests.o -L$(ISHIKO_CPP_COLLECTIONS_ROOT)/lib -L$(ISHIKO_CPP_BOOST_ROOT)/lib -L$(ISHIKO_CPP_TASKS_ROOT)/lib -L$(ISHIKO_CPP_ERRORS_ROOT)/lib -L$(LIBGIT2_ROOT)/lib -L$(CODESMITHYIDE_VERSIONCONTROL_ROOT)/lib -L$(ISHIKO_CPP_FILESYSTEM_ROOT)/lib -L$(ISHIKO_CPP_TEXT_ROOT)/lib -L$(ISHIKO_CPP_TYPES_ROOT)/lib -L$(ISHIKO_CPP_DIFF_ROOT)/lib -L$(ISHIKO_CPP_PROCESS_ROOT)/lib -L$(ISHIKO_CPP_TESTS_ROOT)/lib -lCodeSmithyGit -lIshikoTasks -lIshikoTests -lIshikoProcess -lIshikoErrors -lgit2 -lboost_filesystem -lssl -lcrypto -lpcre -lz -pthread

$(_builddir)CodeSmithyGitTests_main.o: ../../Source/main.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/include -I$(ISHIKO_CPP_BOOST_ROOT)/include -I$(ISHIKO_CPP_TASKS_ROOT)/include -I$(ISHIKO_CPP_ERRORS_ROOT)/include -I$(LIBGIT2_ROOT)/include -I$(CODESMITHYIDE_VERSIONCONTROL_ROOT)/include -I$(ISHIKO_CPP_PLATFORM_ROOT)/include -I$(ISHIKO_CPP_FILESYSTEM_ROOT)/include -I$(ISHIKO_CPP_TEXT_ROOT)/include -I$(ISHIKO_CPP_TYPES_ROOT)/include -I$(ISHIKO_CPP_DIFF_ROOT)/include -I$(ISHIKO_CPP_PROCESS_ROOT)/include -I$(ISHIKO_CPP_TESTS_ROOT)/include -std=c++11 ../../Source/main.cpp

$(_builddir)CodeSmithyGitTests_GitRepositoryTests.o: ../../Source/GitRepositoryTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/include -I$(ISHIKO_CPP_BOOST_ROOT)/include -I$(ISHIKO_CPP_TASKS_ROOT)/include -I$(ISHIKO_CPP_ERRORS_ROOT)/include -I$(LIBGIT2_ROOT)/include -I$(CODESMITHYIDE_VERSIONCONTROL_ROOT)/include -I$(ISHIKO_CPP_PLATFORM_ROOT)/include -I$(ISHIKO_CPP_FILESYSTEM_ROOT)/include -I$(ISHIKO_CPP_TEXT_ROOT)/include -I$(ISHIKO_CPP_TYPES_ROOT)/include -I$(ISHIKO_CPP_DIFF_ROOT)/include -I$(ISHIKO_CPP_PROCESS_ROOT)/include -I$(ISHIKO_CPP_TESTS_ROOT)/include -std=c++11 ../../Source/GitRepositoryTests.cpp

$(_builddir)CodeSmithyGitTests_GitTaskFactoryTests.o: ../../Source/GitTaskFactoryTests.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $(CXXFLAGS) -MD -MP -pthread -I$(ISHIKO_CPP_COLLECTIONS_ROOT)/include -I$(ISHIKO_CPP_BOOST_ROOT)/include -I$(ISHIKO_CPP_TASKS_ROOT)/include -I$(ISHIKO_CPP_ERRORS_ROOT)/include -I$(LIBGIT2_ROOT)/include -I$(CODESMITHYIDE_VERSIONCONTROL_ROOT)/include -I$(ISHIKO_CPP_PLATFORM_ROOT)/include -I$(ISHIKO_CPP_FILESYSTEM_ROOT)/include -I$(ISHIKO_CPP_TEXT_ROOT)/include -I$(ISHIKO_CPP_TYPES_ROOT)/include -I$(ISHIKO_CPP_DIFF_ROOT)/include -I$(ISHIKO_CPP_PROCESS_ROOT)/include -I$(ISHIKO_CPP_TESTS_ROOT)/include -std=c++11 ../../Source/GitTaskFactoryTests.cpp

clean:
	rm -f $(_builddir)*.o
	rm -f $(_builddir)*.d
	rm -f $(_builddir)CodeSmithyGitTests

.PHONY: all clean

# Dependencies tracking:
-include $(_builddir)*.d
