﻿function BUtton(MmM){

 

			 var target1 = document.querySelector('body'); 
 

			 var target2 = document.querySelector('ul'); 

			 var target3 = document.querySelector('h1');

		  	 var target4 = document.querySelector('.lists');

			 var target5 = document.querySelector('.changecolor');


			if(MmM.value === 'black'){

 
     			 target1.style.backgroundColor = 'darkslategray';
 

     			 target1.style.color = 'gold';


			 target2.style.backgroundColor = 'dimgray';
 

     			 target2.style.color = 'powderblue';
 

			 target3.style.backgroundColor = 'slategray';


     			 target3.style.color = 'khaki';

 

     			 MmM.value = 'white';
 

			 target4.style.color = 'goldenrod';

 

			 var alist = document.querySelectorAll('a');
 
			 var i=0;

			 while(i<alist.length){
 

			  alist[i].style.color='powderblue';

			  i=i+1;


			} /*while*/

			} /*if*/

 

 

			else{


			target1.style.backgroundColor='white';

			target1.style.color='black';


			MmM.value='black';

			target2.style.backgroundColor = 'aliceblue';

     			target2.style.color = 'black';

			target3.style.backgroundColor = 'lavender';

     			target3.style.color = 'black';

 
			var alist = document.querySelectorAll('a');

			var i=0;
 
			while(i<alist.length){


			  alist[i].style.color='black';


			  i=i+1;

			}

			target5.style.color = 'mediumslateblue'


			}

		}