j = []  # Tạo một danh sách rỗng để lưu kết quả
for i in range(2000, 3201):  # Duyệt qua tất cả các số trong đoạn từ 2000 đến 3200
    if (i % 7 == 0) and (i % 5 != 0):  # Kiểm tra xem số i có chia hết cho 7 và không phải là bội số của 5 không
        j.append(i)  # Nếu đúng, thêm số i vào danh sách j
print(','.join(n(str,j))) # In ra màn hình danh sách j, các phần tử cách nhau bằng dấu phẩy
