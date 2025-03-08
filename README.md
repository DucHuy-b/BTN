# Báo cáo Bài tập lớn - Nhóm 9
## 1. Thông tin nhóm
| STT | Họ và tên | MSSV | Vai trò |
|----|------------|------|---------|
| 1  | Phạm Sao Mai | 24022814 | Nhóm trưởng |
| 2  | Nguyễn Ngọc Bảo | 24022768 | Thành viên |
| 3  | Nguyễn Hữu Hải Đăng | 24022770 | Thành viên |
| 4 | Nguyễn Hoàng Việt | 24022843 | Thành viên |
| 5 | Dương Nguyễn Đức Huy | 24022799 | Thành viên |
---
## 2. Thông tin bài tập
- Tìm đường đi ngắn nhất trong mê cung có chướng ngại vật
---
## 3. Hướng giải quyết bài toán
### a. Phân tích bài toán
- Mô tả sơ bộ  
Bài toán yêu cầu tìm đường đi ngắn nhất từ điểm bắt đầu (0,0) đến điểm đích (N-1,N-1) trong một mê cung kích thước N×N. Mê cung được biểu diễn dưới dạng ma trận N x N gồm các giá trị:  
 0: Ô có thể đi qua.  
 1: Ô không thể đi qua (vật cản).  
Người chơi có thể di chuyển theo 4 hướng: trái, phải, lên, xuống.
- Đầu vào  
Một số nguyên N là kích thước của mê cung.  
Một ma trận N x N chứa các giá trị 0 hoặc 1, biểu thị đường đi hoặc vật cản.  
- Đầu ra  
Số bước đi ngắn nhất từ (0,0) đến (N-1,N-1).  
Nếu không có đường đi, in "No path found".  
### b.Thuật toán/ hướng tiếp cận
- Sử dụng đệ quy kết hợp với thuật toán tìm kiếm quay lui ( backtracking ) để tìm đường đi tối ưu.
- Backtracking là thuật toán đơn giản được hiểu là giải quyết vấn đề thông qua xây dựng dần lời giải, khi gặp trường hợp không hợp lệ sẽ thử lại hướng khác.
  ___

- Khai báo thư viện và định nghĩa cấu trúc  
![image](https://github.com/user-attachments/assets/bcc1a18e-c6e8-4297-a00d-9769186326a8)  
- Mảng hướng di chuyển  
![image](https://github.com/user-attachments/assets/08dd05a3-f603-41af-b4fc-1c7c80972772)
- Kiểm tra tính hợp lệ của ô trong mê cung
  ![image](https://github.com/user-attachments/assets/f8aeb7ee-2fd3-4cdb-bca2-5cc09004c064)
- Hàm đệ quy tìm đường PathFind()  
![image](https://github.com/user-attachments/assets/242cab0d-b59a-4ed2-a226-6ec6132bd53d)  
- Duyệt các hướng di chuyển hợp lệ
- ![image](https://github.com/user-attachments/assets/85f70849-45b2-417e-b964-3b2245914dbf)
- Hàm main
- ![image](https://github.com/user-attachments/assets/cf4ebd0d-43b4-44a4-9d91-cd527bf43120)  
- Gọi hàm tìm đường và in ra kết quả
- ![image](https://github.com/user-attachments/assets/3482ac76-7ea0-4b8a-957e-b7882f1c18e7)
---
## 4. Ví dụ minh hoạ
### Ví dụ 1
![image](https://github.com/user-attachments/assets/748a0550-5478-4da7-8ce2-c63bdf198793)  
- Giải thích:
  Các bước đi có thể thử
1.	Xuất phát từ (0,0). Có thể đi xuống (1,0) vì (0,1) là tường (1).
2.	Từ (1,0), chỉ có thể đi sang phải (1,1).
3.	Từ (1,1), có thể đi sang phải (1,2).
4.	Từ (1,2), có thể đi xuống (2,2) (là đích).  
Lí do không chọn đường còn lại  
•	Không thể đi phải ngay từ đầu vì (0,1) = 1.  
•	Khi đến (1,1), có thể đi trái (1,0) nhưng quay lại đường cũ không hiệu quả.  
•	Khi đến (1,2), đi xuống (2,2) là đích nên kết thúc.  
Đường đi ngắn nhất được chọn  
 (0,0) → (1,0) → (1,1) → (1,2) → (2,2)    
👉 Tổng số bước: 4
### Ví dụ 2
![image](https://github.com/user-attachments/assets/7233ec28-bef5-4dfe-9e46-a58ce53f5d1f)  
- Giải thích:
  Các bước đi có thể thử
1.	Xuất phát từ (0,0). Có thể đi sang phải (0,1).
2.	Từ (0,1), có thể đi xuống (1,1).
3.	Từ (1,1), có thể đi xuống (2,1).
4.	Từ (2,1), có thể đi xuống (3,1).
5.	Từ (3,1), có thể đi sang phải (3,2).
6.	Từ (3,2), có thể đi sang phải (3,3) (là đích).  
Lí do không chọn đường còn lại    
•	Khi đến (0,1), nếu đi trái (0,0), ta quay lại đường cũ nên bỏ qua.  
•	Khi đến (1,1), nếu đi trái (1,0), bị chặn bởi 1.  
•	Khi đến (3,1), đi xuống (4,1) không hợp lệ (ngoài phạm vi), đi phải (3,2) là lựa chọn duy nhất.  
Đường đi ngắn nhất được chọn  
 (0,0) → (0,1) → (1,1) → (2,1) → (3,1) → (3,2) → (3,3)    
👉 Tổng số bước: 6
### Ví dụ 3
![image](https://github.com/user-attachments/assets/df2ff63e-bf6c-40f4-9d2d-98da1764ccb3)
- Giải thích
  Các bước đi có thể thử
1.	Xuất phát từ (0,0). Có thể đi xuống (1,0).
2.	Từ (1,0), có thể đi sang phải (1,1).
3.	Từ (1,1), có thể đi sang phải (1,2).
4.	Từ (1,2), có thể đi sang phải (1,3).
5.	Từ (1,3), có thể đi sang phải (1,4).
6.	Từ (1,4), có thể đi xuống (2,4).
7.	Từ (2,4), có thể đi sang trái (3,4).
8.	Từ (3,4), có thể đi sang trái (3,3).
9.	Từ (3,3), có thể đi xuống (4,3).
10.	Từ (4,3), có thể đi sang phải (4,4) (là đích).
Lí do không chọn đường còn lại    
•	Khi đến (0,0), nếu đi phải (0,1), sẽ bị chặn ngay bởi (0,2) = 1, nên không đi.  
•	Khi đến (1,4), nếu đi xuống (2,4), hợp lệ và tiếp tục đi được đến đích.  
•	Khi đến (3,3), đi xuống (4,3) là hợp lý hơn đi trái quay lại.  
Đường đi ngắn nhất được chọn  
 (0,0) → (1,0) → (1,1) → (1,2) → (1,3) → (1,4)    
→ (2,4) → (3,4) → (3,3) → (4,3) → (4,4)    
👉 Tổng số bước: 8
---
## 5. Link video báo cáo
















  













