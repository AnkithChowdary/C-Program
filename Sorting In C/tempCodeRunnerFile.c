void merge(int arr[], int start, int mid, int end) {
//     int i = start, j = mid + 1, k = 0, temp[end - start + 1];
//     while (i <= mid && j <= end) {
//         if (arr[i] < arr[j]) {
//             temp[k] = arr[i];
//             k++, i++;
//         } else {
//             temp[k] = arr[j];
//             k++, j++;
//         }
//     }
//     while (i <= mid)
//         temp[k++] = arr[i++];

//     while (j <= end)
//         temp[k++] = arr[j++];
// }