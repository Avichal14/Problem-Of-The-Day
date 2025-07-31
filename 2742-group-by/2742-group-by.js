/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
    let arr=this;
      const grouped_Arr={};
      for(a of arr)
      {
          let key=fn(a);
          if(key in grouped_Arr)
          {
             grouped_Arr[key].push(a);  
          }
          else
          {
             grouped_Arr[key]=[a];  
          }
      }
      return grouped_Arr;
};


/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */