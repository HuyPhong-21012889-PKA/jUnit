def main():
    while True:
        # Hiển thị menu lựa chọn
        print("Menu:")
        print("1. Tính tổng hai số")
        print("2. Tính hiệu hai số")
        print("3. Thoát")

        choice = input("Nhập lựa chọn của bạn: ")

        # Kiểm tra lựa chọn và thực hiện hành động tương ứng
        if choice == '1':
            add_numbers()
        elif choice == '2':
            subtract_numbers()
        elif choice == '3':
            print("Chương trình kết thúc.")
            break
        else:
            print("Lựa chọn không hợp lệ. Vui lòng chọn lại.")


def add_numbers():
    num1 = float(input("Nhập số thứ nhất: "))
    num2 = float(input("Nhập số thứ hai: "))
    result = num1 + num2
    print("Tổng của hai số là:", result)


def subtract_numbers():
    num1 = float(input("Nhập số thứ nhất: "))
    num2 = float(input("Nhập số thứ hai: "))
    result = num1 - num2
    print("Hiệu của hai số là:", result)


if __name__ == "__main__":
    main()
