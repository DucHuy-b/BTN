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









