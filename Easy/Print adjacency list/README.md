<h2><a href="https://www.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1?page=1&category=Graph&difficulty=Easy&sortBy=latest">Print adjacency list</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an&nbsp;</span></span><span style="font-family: arial, helvetica, sans-serif; font-size: 18px; user-select: auto;">undirected graph with&nbsp;</span><strong style="font-family: arial, helvetica, sans-serif; font-size: 18px; user-select: auto;">V&nbsp;</strong><span style="font-family: arial, helvetica, sans-serif; font-size: 18px; user-select: auto;">nodes and </span><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">E</strong> <strong style="user-select: auto;">edges</strong>, create and return an <a href="https://www.geeksforgeeks.org/adjacency-list-meaning-definition-in-dsa/" target="_blank" rel="noopener" style="user-select: auto;">adjacency list</a> of the graph</span></span><span style="font-size: 18px; font-family: arial, helvetica, sans-serif; user-select: auto;">. <strong style="user-select: auto;">0-based indexing</strong> is followed everywhere.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:<br style="user-select: auto;"></strong>V = 5, E = 7<br style="user-select: auto;">edges = {(0,1),(0,4),(4,1),(4,3),(1,3),(1,2),(3,2)}
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/701247/Web/Other/5c5cf82d-6510-48e7-834e-311f933ce758_1685086928.png" alt="" style="user-select: auto;">
<strong style="user-select: auto;">Output:</strong> 
{{1,4}, 
 {0,2,3,4}, 
 {1,3},
 {1,2,4},
 {0,1,3}}
<strong style="user-select: auto;">Explanation</strong>:
Node 0 is connected to 1 and 4.<br style="user-select: auto;"></span><span style="font-size: 18px; user-select: auto;">Node 1 is connected to 0,2,3 and 4.<br style="user-select: auto;"></span><span style="font-size: 18px; user-select: auto;">Node 2 is connected to 1 and 3.<br style="user-select: auto;">Node 3 is connected to 1,2 and 4.<br style="user-select: auto;">Node 4 is connected to 0,1 and 3.</span>
</pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:<br style="user-select: auto;"></strong>V = 4, E = 3<br style="user-select: auto;">edges = {(0,3),(0,2),(2,1)}
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/701247/Web/Other/e8e7865d-f04d-4d93-bf1f-c6b6baee639a_1685086929.png" alt="" style="user-select: auto;">

<strong style="user-select: auto;">Output:</strong> 
{{2,3} 
 {2}, 
 {0,1} 
 {0}}
<strong style="user-select: auto;">Explanation</strong>:<br style="user-select: auto;"></span><span style="font-size: 18px; user-select: auto;">Node 0 is connected to 2 and 3.<br style="user-select: auto;">Node 1 is only connected to 2.<br style="user-select: auto;">Node 2 is connected to 0 and 1.<br style="user-select: auto;">Node 3 is only connected to 0.<br style="user-select: auto;"></span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your task:</strong><br style="user-select: auto;">You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">printGraph()</strong> which takes the integer V denoting the number of vertices and <strong style="user-select: auto;">edges</strong> as input parameters and returns the list of list denoting the adjacency list.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(V + E)<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(V + E)</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 ≤ V, E ≤ 10<sup style="user-select: auto;">5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Graph</code>&nbsp;<code>Data Structures</code>&nbsp;