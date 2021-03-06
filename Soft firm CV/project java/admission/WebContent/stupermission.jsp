<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>AJAX JsonArray Example</title>
<link href='http://fonts.googleapis.com/css?family=Oxygen' rel='stylesheet' type='text/css'>
<style type="text/css">
table, td, th
{
border:1px solid green;
font-family: 'Oxygen', sans-serif;
}
th
{
background-color:green;
color:white;
}
body
{
	text-align: center;
}
.container
{
	margin-left: auto;
	margin-right: auto;
	width: 40em;
}
h4
{
	font-family: 'Oxygen', sans-serif;
	color:#1E90FF;
}
</style>
<script src="http://code.jquery.com/jquery-latest.min.js"></script>
<script type="text/javascript">
$(document).ready(function() {
	$("#tablediv").hide();
     $("#showTable").click(function(event){
           $.get('PopulateTablePer?id=41',function(responseJson) {
        	   if(responseJson!=null){
            	   $("#countrytable").find("tr:gt(0)").remove();
            	   var table1 = $("#countrytable");
	               $.each(responseJson, function(key,value) { 
	               		   var rowNew = $("<tr><td></td><td></td><td></td><td></td><td></td><td></td><td></td></tr>");
	                       rowNew.children().eq(0).text(value['id']); 
	                       rowNew.children().eq(1).text(value['apply']); 
	                       rowNew.children().eq(2).text(value['loginper']); 
	                       rowNew.children().eq(3).text(value['payment']); 
	                       rowNew.children().eq(4).text(value['seatplan']); 
	                       rowNew.children().eq(5).text(value['admitcard']); 
	                       rowNew.children().eq(6).text(value['result']); 
	                       rowNew.appendTo(table1);
	               });
                }
            });
            $("#tablediv").show();          
	 });      
});
</script>
</head>
<body class="container">
<h1>AJAX Retrieve Data from Database in Servlet and JSP using JSONArray</h1>
<h4>Demo by Priya Darshini, Tutorial at www.programming-free.com</h4>
<input type="button" value="Show Table" id="showTable"/>
<br/>
<br/>
<div id="tablediv">
<table cellspacing="0" id="countrytable"> 
    <tr> 
        <th scope="col">id</th> 
        <th scope="col">apply</th> 
        <th scope="col">loginper</th> 
        <th scope="col">payment</th> 
        <th scope="col">seatplan</th> 
        <th scope="col">admitcard</th>          
          <th scope="col">result</th>          
    </tr> 
</table>
</div>




</body>
</html>