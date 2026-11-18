# **************************************************************************** #
#                                                                              #
#                                                            +#                #
#    test_pyramid.py                                        +##                #
#                                                         +###+                #
#    By: lucas <lucas@tsiaraso.com>                     +########+             #
#                                                           +###+              #
#    Created: 2026/11/18 05:48:00 by lucas                   ##+               #
#    Updated: 2026/11/18 05:48:00 by lucas                  #+                 #
#                                                                              #
# **************************************************************************** #

import subprocess
import unittest


class TestPyramidFunctional(unittest.TestCase):
    """Functional tests for Sastantua pyramid geometry and doors."""

    def test_size_one_has_three_lines_and_door(self) -> None:
        res = subprocess.run(
            ["./sastantua", "1"], capture_output=True, text=True, check=True
        )
        lines = res.stdout.splitlines()
        self.assertEqual(len(lines), 3)
        self.assertIn("|", lines[-1])

    def test_size_five_has_doorknob(self) -> None:
        res = subprocess.run(
            ["./sastantua", "5"], capture_output=True, text=True, check=True
        )
        self.assertIn("$", res.stdout)

    def test_size_zero_prints_nothing(self) -> None:
        res = subprocess.run(
            ["./sastantua", "0"], capture_output=True, text=True, check=True
        )
        self.assertEqual(res.stdout, "")
