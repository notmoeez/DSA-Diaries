# Find Target in Rotated Sorted Array (Medium)

- Binary search approach will be used.
- Get the mid point of the array and check if it is equal to target, if it is then return it otherwise figure out if it is a part of the rotated part of the array or the unrotated part.
- To find which part of the array mid is located in, compare the element at mid with the element at left most part of the array.
- if element at mid is greater than element at left most position, mid is inside the rotated part. Otherwise in the unrotated part.
- This is because as the array was sorted hence both rotated and unrotated parts will be sorted. Therefore any element in the unrotated part will be less than an element in the rotated part, so if an element is compared with the left most element of the array and is smaller than it hence that element is in the unrotated part. And if an element is greater than left most element hence it must be in rotated array and not in unrotated part as all elements in unrotated part are smaller than left most element.

If Mid in Rotated Part
- check if target is greater than element at mid.
- if yes, move your search towards the right part of the array.
- if not, the target could be in any of the rotated and unrotated parts of the array.
- Hence check if target is greater then element at right most position.
- if yes, move towards left part of the array.
- If not, move towards the right part.

If Mid in Unrotated Part
- check if target is less than element at mid.
- if yes, move your search towards the left part of the array.
- if not, the target could be in any of the rotated and unrotated parts of the array.
- Hence check if target is greater then element at right most position.
- if yes, move towards left part of the array.
- If not, move towards the right part.
