# **************************************************************************** #
#                                                                              #
#                                                            +#                #
#    test_cli.py                                            +##                #
#                                                         +###+                #
#    By: lucas <lucas@tsiaraso.com>                     +########+             #
#                                                           +###+              #
#    Created: 2026/11/18 05:48:00 by lucas                   ##+               #
#    Updated: 2026/11/18 05:48:00 by lucas                  #+                 #
#                                                                              #
# **************************************************************************** #

import subprocess
import unittest


class TestSastantuaE2E(unittest.TestCase):
    """End-to-end CLI tests for sastantua."""

    def test_missing_args_prints_usage_and_exits_one(self) -> None:
        res = subprocess.run(["./sastantua"], capture_output=True, text=True)
        self.assertEqual(res.returncode, 1)
        self.assertIn("./sastantua size", res.stdout)

    def test_valid_size_exits_zero(self) -> None:
        res = subprocess.run(
            ["./sastantua", "2"], capture_output=True, text=True
        )
        self.assertEqual(res.returncode, 0)
        self.assertEqual(len(res.stdout.splitlines()), 7)
