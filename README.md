# Systems Programming Assignments — C, JavaScript & WebAssembly

Coursework projects from the *Systems Programming* course at RAF, implemented in **C, JavaScript and WebAssembly**.  
Focus areas: numeric computation performance, image processing, pixel buffers and histogram analysis.

---

## 🟢 Zadatak 1 — Pi Approximation (Leibniz Series)

Leibniz approximation of π implemented in:

- C → compiled to WebAssembly
- JavaScript version

Input: number of iterations  
Output: approximation result + execution time comparison (WASM vs JS)

---

## 🟡 Zadatak 2 — Image Brightness Filter

User uploads an image and selects brightness parameter.

Formula:

new_pixel = old_pixel + param  
(clamped to range 0–255)

Parameter range: −50 to +50

Output:

- original image
- brightness-adjusted image (side-by-side)

Implemented in C and JavaScript (pixel-by-pixel processing).

---

## 🔵 Zadatak 3 — RGB Image Histogram

Program:

- reads image
- iterates through pixels
- builds frequency arrays for:
  - Red channel
  - Green channel
  - Blue channel

Output:

- original image
- RGB histogram visualization

Histogram may be displayed stacked or per-channel.

---

## 🛠 Tech Stack

• C 
• JavaScript 
• WebAssembly 
• pixel buffers 
• performance timing

---

👩‍💻 **Author:** Marija Erić — Final-year Computer Engineering student (RAF Belgrade)
