# Copyright (c) 2026 Wind River Systems, Inc.

# Adjust PACKAGECONFIG settings
PACKAGECONFIG:append:pn-clang = " libomp"
PACKAGECONFIG:append:pn-qtbase-native = " gui"
PACKAGECONFIG:append:pn-python3 = " tk"
