# **************************************************************************** #
#                                                                              #
#                                                            +#                #
#    test_build.py                                          +##                #
#                                                         +###+                #
#    By: lucas <lucas@tsiaraso.com>                     +########+             #
#                                                           +###+              #
#    Created: 2026/11/18 05:48:00 by lucas                   ##+               #
#    Updated: 2026/11/18 05:48:00 by lucas                  #+                 #
#                                                                              #
# **************************************************************************** #

import os
import subprocess
import unittest


class TestBuildIntegration(unittest.TestCase):
    """Integration test for Makefile build."""

    def test_make_re_produces_executable(self) -> None:
        subprocess.run(["make", "re"], check=True, capture_output=True)
        self.assertTrue(os.path.isfile("./sastantua"))
        self.assertTrue(os.access("./sastantua", os.X_OK))
