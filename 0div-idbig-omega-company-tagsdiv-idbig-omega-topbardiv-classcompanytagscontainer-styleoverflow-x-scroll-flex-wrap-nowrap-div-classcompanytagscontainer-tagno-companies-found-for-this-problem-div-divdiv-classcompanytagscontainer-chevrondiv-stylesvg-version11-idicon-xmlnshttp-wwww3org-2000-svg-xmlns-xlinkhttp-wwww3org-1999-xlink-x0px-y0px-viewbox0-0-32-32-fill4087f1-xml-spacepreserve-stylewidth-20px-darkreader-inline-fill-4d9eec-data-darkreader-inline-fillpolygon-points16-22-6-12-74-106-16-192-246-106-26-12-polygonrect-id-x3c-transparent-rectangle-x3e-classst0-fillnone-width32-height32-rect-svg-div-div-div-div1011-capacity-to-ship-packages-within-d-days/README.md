<h2><a href="https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div style=""><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px; --darkreader-inline-fill: #4d9eec;" data-darkreader-inline-fill=""><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>1011. Capacity To Ship Packages Within D Days</a></h2><h3>Medium</h3><hr><div><p>A conveyor belt has packages that must be shipped from one port to another within <code>days</code> days.</p>

<p>The <code>i<sup>th</sup></code> package on the conveyor belt has a weight of <code>weights[i]</code>. Each day, we load the ship with packages on the conveyor belt (in the order given by <code>weights</code>). We may not load more weight than the maximum weight capacity of the ship.</p>

<p>Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within <code>days</code> days.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> weights = [1,2,3,4,5,6,7,8,9,10], days = 5
<strong>Output:</strong> 15
<strong>Explanation:</strong> A ship capacity of 15 is the minimum to ship all the packages in 5 days like this:
1st day: 1, 2, 3, 4, 5
2nd day: 6, 7
3rd day: 8
4th day: 9
5th day: 10

Note that the cargo must be shipped in the order given, so using a ship of capacity 14 and splitting the packages into parts like (2, 3, 4, 5), (1, 6, 7), (8), (9), (10) is not allowed.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> weights = [3,2,2,4,1,4], days = 3
<strong>Output:</strong> 6
<strong>Explanation:</strong> A ship capacity of 6 is the minimum to ship all the packages in 3 days like this:
1st day: 3, 2
2nd day: 2, 4
3rd day: 1, 4
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> weights = [1,2,3,1,1], days = 4
<strong>Output:</strong> 3
<strong>Explanation:</strong>
1st day: 1
2nd day: 2
3rd day: 3
4th day: 1, 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= days &lt;= weights.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>1 &lt;= weights[i] &lt;= 500</code></li>
</ul>
</div>