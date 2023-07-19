/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
     var filArr = [];
    for (var i = 0; i < arr.length; i++) {
        if (fn(arr[i], i)) {
            filArr.push(arr[i]);
        }
    }
    return filArr;
};