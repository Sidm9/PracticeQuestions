const arr = [900, 940, 950, 1100, 1500, 1800]
const dep = [910, 1200, 1120, 1130, 1900, 2000]
n = arr.length
let i = 1
let j = 0
let plat_needed = 1
let res = 1
while (i < n && j < n) {
    if (arr[i] <= dep[j]) { plat_needed += 1; i += 1; }
    else
        if (arr[i] > dep[j]) { plat_needed -= 1; j += 1; }
    res = Math.max(res, plat_needed);
}
console.log(res);