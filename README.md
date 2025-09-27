# 🧵 Pointer Operations in C++  

---

## 🎯 Aim  
To study and implement pointer operations in C++ and understand the difference between **call by value** and **call by reference** parameter-passing methods.  

---

## 📚 Theory  

In C++, the way we pass parameters to functions determines whether changes inside the function affect the original variables.  

### 📦 Call by Value  
- **Definition:** A copy of the actual parameter is passed to the function.  
- **Effect:** Changes happen only on the copy → originals remain unchanged.  
- **Working:** Function operates in its own scope and does not affect caller variables.  

### 🔗 Call by Reference  
- **Definition:** The address or reference of actual parameters is passed, allowing direct modification of originals.  
- **Effect:** Changes done inside the function reflect in the caller variables.  
- **Working:** Function receives pointers (or references) → dereferences them to access and modify actual memory.  

---

## 📊 Comparison Table  

| ⚙️ Feature                 | 📦 Call by Value           | 🔗 Call by Reference       |
|-----------------------------|----------------------------|-----------------------------|
| **Data Passed**             | Copy of value              | Address / reference         |
| **Changes affect original** | ❌ No                      | ✅ Yes                      |
| **Memory Use**              | Extra copy made            | No extra copy               |
| **Safety**                  | Safer (no side effects)    | Can change caller data      |
| **Typical Use Case**        | Read-only operations       | In-place modifications      |  

---

## 🖼️ Visual Representation  

📌 Call by Value vs Call by Reference  

<img width="346" height="255" alt="image" src="https://github.com/user-attachments/assets/797991e8-a436-474e-87e0-bf274ca271a9" />

---

## 📋 Algorithms  

### 🔹 Employee Salary Increment Check  

1. **Start**  
2. Input details:  
   - `yearsCompleted` → Number of years employee has worked  
   - `hasResearchProjects` → Worked on research projects (Yes/No)  
   - `hasNewProjectPipeline` → New research project in pipeline (Yes/No)  
   - `profitGenerated` → Profit generated in Rs  
   - `currentSalary` → Current salary of employee  
3. Call function `checkIncrement()` by passing **addresses** of above values.  
4. Inside function:  
   - Initialize `conditionsMet = 0`  
   - If `yearsCompleted >= 1`, increment `conditionsMet`.  
   - If `hasResearchProjects == true`, increment `conditionsMet`.  
   - If `hasNewProjectPipeline == true`, increment `conditionsMet`.  
   - If `profitGenerated > 100000`, increment `conditionsMet`.  
5. If `conditionsMet >= 3`:  
   - Increase salary by **20%**  
   - Print `"Eligible for increment"` and new salary  
6. Else:  
   - Print `"Not eligible for increment"` and unchanged salary  
7. **End**  

---

### 🔹 Reverse a String using Pointers  

1. **Start**  
2. Input a string `str1`.  
3. Find length of string → `n = str1.length()`.  
4. Store base address of string in a pointer: `ptr = &str1[0]`.  
5. Display message `"Reversed String"`.  
6. Loop from `i = n - 1` to `0`:  
   - Print `*(ptr + i)`  
7. After loop ends, reversed string is displayed.  
8. **End**  

---

## 🧠 Conclusion  

This experiment demonstrates the difference between parameter-passing methods in C++.  

- 📦 **Call by Value** → Works on copies, originals remain safe.  
- 🔗 **Call by Reference** → Works directly on real data, originals are modified.  
- ✅ Key Insight:  
  - Use **Call by Value** for safety (read-only operations).  
  - Use **Call by Reference** for in-place updates and efficiency.  
