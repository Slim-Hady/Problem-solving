/**
 * @param {number[]} cost
 * @return {number}
 */
var minimumCost = function(cost) {
    let ans = 0;
    if(cost.length <= 2){
       for(let i = 0; i < cost.length; i++){
            ans += cost[i];
        }
        return ans; 
    }
    cost.sort((a, b) => a-b);
    let cnt = 0;
    for(let i = cost.length-1; i >= 0; i--){
        if(cnt === 2){
            cnt = 0;
            continue;
        } 
        ans += cost[i];
        cnt++;
    }
    return ans;
};
