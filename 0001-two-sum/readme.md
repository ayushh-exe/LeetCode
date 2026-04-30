# 1200. Minimum Absolute Difference

## Easy

---

Given an array of integers `arr`, return all pairs of elements with the **minimum absolute difference** of any two elements.

Each pair `[a, b]` must follow:
- `a < b`
- The difference `b - a` is equal to the minimum absolute difference in the array
- Return the pairs in **ascending order**

---

### Example 1:


Input: arr = [4,2,1,3]
Output: [[1,2],[2,3],[3,4]]
Explanation: After sorting arr = [1,2,3,4]
Differences are: (2-1=1), (3-2=1), (4-3=1)
Minimum difference is 1 → return all such pairs.


---

### Example 2:


Input: arr = [1,3,6,10,15]
Output: [[1,3]]


---

### Example 3:


Input: arr = [3,8,-10,23,19,-4,-14,27]
Output: [[-14,-10],[19,23],[23,27]]


---

### Constraints:

- `2 <= arr.length <= 10^5`
- `-10^6 <= arr[i] <= 10^6`
- All elements are **distinct**

---

### Follow-up:

Can you solve it efficiently in **O(n log n)** time?

---

Complexity:
Time Complexity: O(n log n) (due to sorting)
Space Complexity: O(1) (excluding output)