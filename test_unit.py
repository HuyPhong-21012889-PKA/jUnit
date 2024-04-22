import unittest
from unittest.mock import patch
import io
import sys
import program  # Import chương trình bạn muốn kiểm tra


class TestProgram(unittest.TestCase):
    # Test lựa chọn 1: Tính tổng hai số
    @patch('builtins.input', side_effect=['1', '4', '5'])
    @patch('sys.stdout', new_callable=io.StringIO)
    def test_add_numbers(self, mock_stdout, mock_input):
        program.main()
        self.assertEqual(mock_stdout.getvalue().strip(), "Tổng của hai số là: 9")

    # Test lựa chọn 2: Tính hiệu hai số
    @patch('builtins.input', side_effect=['2', '8', '3'])
    @patch('sys.stdout', new_callable=io.StringIO)
    def test_subtract_numbers(self, mock_stdout, mock_input):
        program.main()
        self.assertEqual(mock_stdout.getvalue().strip(), "Hiệu của hai số là: 5")

    # Test lựa chọn 3: Thoát
    @patch('builtins.input', side_effect=['3'])
    @patch('sys.stdout', new_callable=io.StringIO)
    def test_exit_program(self, mock_stdout, mock_input):
        with self.assertRaises(SystemExit):
            program.main()
        self.assertEqual(mock_stdout.getvalue().strip(), "Chương trình kết thúc.")

    # Test lựa chọn không hợp lệ
    @patch('builtins.input', side_effect=['a', '4', '3'])
    @patch('sys.stdout', new_callable=io.StringIO)
    def test_invalid_choice(self, mock_stdout, mock_input):
        program.main()
        self.assertIn("Lựa chọn không hợp lệ", mock_stdout.getvalue().strip())


if __name__ == '__main__':
    unittest.main()
