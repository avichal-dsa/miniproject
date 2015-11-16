//SCIENTIFIC CALCULATOR. Copyright (C) 2015 AVICHAL AGRAWAL 111403058

/*This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14159265
void add();                                          //function declarations which are to be used
void subtract();
void multiply();
void linearequation();
void determinant();
void inverse();
void eigenvalue();
void matrix();
void integration();
void differentiation();
void complexnumber();
void vectors();
void mean();
void median();
void mode();
float standard_deviation();
void variance();
void mergesort(int*,int,int);
void mergesortedsubarray();
void statistics();
void graphical();
void distance();
void geometric();
double slope(double,double,double,double);
double intercept(double,double,double,double);
void equation();
void slope_intercept();
void point_slope();
void midpoint();
void slopeintercept();
void bestfit();
void differential();
void areavolume();
void geometric();
void area();
void volume();
void area_for_twodimensional_objects();
void area_for_threedimensional_objects();
void volume_for_twodimensional_objects();
void volume_for_threedimensional_objects();
void area_of_square();
void area_of_rectangle();
void area_of_triangle();
void area_of_circle();
void area_of_parallelogram();
void area_of_ellipse();
void area_of_cube();
void area_of_cuboid();
void area_of_cylinder();
void area_of_rectangle();
void area_of_sphere();
void area_of_cone();
void cone();
void sphere();
void cube();
void cuboid();
void cylinder();
void coordinate();
void Coord_conver();
int quadratic(double a, double b, double c, double Roots[]);
void polynomial();
void linear_best_fit_equation();
int det(int A[100][100],int n);
float f(float x ,float n);      //function definition
float fsin(float x);
float fcos(float x);
float ftan(float x);
float fasin(float x);
float facos(float x);
float fatan(float x);
float fexp(float x);
double addition(double,double);           //functions for addition
double subtraction(double,double);        //functions for subtraction
double multiplication(double,double);     //functions for multiplication
double division(double,double);            //functions for division

double addition(double x,double y) {
	return (x+y);
}                      // addition defined}
double subtraction(double x,double y) {
	return (x-y);
}                       // subtraction defined
double multiplication(double x,double y) {
	return (x*y);
}                        // multiplication defined
double division(double x,double y) {
	return (x/y);
}                    // division defined
void basic();
//void geometric();
void advanced();
int main() { 
	char a[1],choice[1],choose[1];
	SC1:  printf("WELCOME TO SCIENTIFIC CALCULATION\n\n\n");
        printf("DIVIDED INTO 3 CATEOGORIES\n\n\n");
        printf("PRESS ANY KEY TO CONTINUE\n\n\n");
        scanf("%s",a);
        system("clear");
	printf("CHOOSE YOUR OPTION\n");
	printf("1.BASIC\t2:GEOMETRIC & UTILITIES\t3:ADVANCED\n");
        scanf("%s",choice);
        printf("\n");
	if(choice[0]=='1') {
		basic();
	}
	if(choice[0]=='2') {
		geometric();
	}
	else if(choice[0]=='3') {
		advanced();
	}
	else {
		printf("ERR\n");
		goto SC2;
	}
   SC2: printf("\nCONTINUE WITH CALCULATOR\n");
	scanf("%s",choose);
	if(choose[0]=='y'||choose[0]=='Y') {   
		system("clear");
        	goto SC1;
	}
        else if(choose[0]=='n'||choose[0]=='N') {
        	return 0;
	}
	else {   	
		printf("ERR\n\n");
        	goto SC2;
	}
	return 0;
}

void basic() {
    {
	int ch,flag,ch1;
	char c;
	double a,b;
	double res=0;
	double x,n; 
	do
	{
		printf("Which of the following operations would you like to do?\n");
		printf("\n\t1.Algebraic operations\t\t2.Trigonometric Operations\n");      // for printing initial menu of basic operations
		scanf("%d",&ch1);     // input for whether Algebraic or trigonometric operations
		switch(ch1)    // switch case for the sub-menu
		{

		case 1:
        	printf("\n\n\t1.Addition\t\t2.Subtraction\t\t3.Multiplication\t\t4.Division\t\t5.x^n\t\t\t6.e^x\t\t\t\t7.log_n (x)\t\t8.ln(x)\t\t\t9. 10^x\n");  // Printing sub-menu under main menu
		scanf("%d",&ch);  // selection input for which algebraic operation to perform
		switch(ch) { //switch case for sub-menu operations under algebraic operation
			case 1:	printf("Enter the 1st number:");     // addition
				scanf("%lf",&a);
				printf("Enter the 2nd number:");
				scanf("%lf",&b);
				res=addition(a,b);
				printf("\n result=%lf",res);
				printf("\n  continue with the operation? If yes then set flag=1 else set flag=0 \n");
				printf("\n flag=");
				scanf("%d",&flag);   // for the selection if we want to continue other operations with the result(flag1=> answer carry forwarded,flag=0: given two options: y or Y= reset, other : terminate, function defined at the end)
				break;
			case 2: printf("Enter the 1st number:");      // subtraction
				scanf("%lf",&a);
				printf("Enter the 2nd number:");
				scanf("%lf",&b);
				res=subtraction(a,b);
				printf("\n result=%lf",res);
				printf("\n  continue with the operation? If yes then set flag=1 else set flag=0 \n");
				printf("\n flag=");
				scanf("%d",&flag);
				break;
			case 3: printf("Enter the 1st number:");      // multiplication
				scanf("%lf",&a);
				printf("Enter the 2nd number:");
				scanf("%lf",&b);
				res=multiplication(a,b);
				printf("\n result=%lf",res);
				printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag=");
				scanf("%d",&flag);
				break;
			case 4: printf("Enter the 1st number:");          // division
				scanf("%lf",&a);
				printf("Enter the 2nd number:");
				scanf("%lf",&b);
				res=division(a,b);
				printf("\n result=%lf",res);
				printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag=");
				scanf("%d",&flag);
				break;
			case 5:                                          // for x^n
                     		printf("you have chosen to do x^n\n");
                     		printf("enter the values of x and n respectively\n");
                     		scanf("%lf%lf",&x,&n);
                     		printf("result is=%lf\n",pow(x,n));
                     		res=pow(x,n);
                     		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag=");
				scanf("%d",&flag);
				break;
            		case 6: printf("You have chosen to do e^x\n");            // for e^x
                     		printf("Enter the value of x\n");
                     		scanf("%lf",&x);
                     		res=exp(x);
                     		printf("The result is %lf\t",res);
                     		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag=");
				scanf("%d",&flag);
				break;
            		case 7: printf("You have chosen to do log_n (x)\n");              //for log x to the base n
                     		printf("Enter the value of x\n");
                     		scanf("%lf",&x);
                     		printf("enter the value of n\n");
                     		scanf("%lf",&n);
                     		res=log(x)/log(n);
                     		printf("the result is %lf\n\t",res);
                     		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag=");
				scanf("%d",&flag);
				break;
            		case 8: printf("you have chosen to do ln x\n");    //for log x to the base e
                     		printf("Enter the value of x\n");
                     		scanf("%lf",&x);
                     		res=log(x);
                     		printf("the result is %lf\n\t",res);
                     		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag=");
				scanf("%d",&flag);
				break;
            		case 9: printf("you have chosen to do 10^x\n");       // for computing 10^x
                     		printf("enter the value of x\n");
                     		scanf("%lf",&x);
                     		res=pow(10,x);
                     		printf("the result is %lf\n\t",res);
                     		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag=");
				scanf("%d",&flag);
				break;
             		default:printf("\n wrong choice!\n");                //other choices
                      		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag=");
				scanf("%d",&flag);
				break;



		}
		break;
		case 2: printf("\n You have selected Trigonometric operations\n");        // for trigonometric functions
                	printf("\nWhich of the following operations do you want to perform?\n");
                	printf("\n\t1.sin x\t\t2.cos x\t\t3.tan x\t\t4.arcsin x\t\t\t5.arccos x\t6.arctan x\t7.sinh x\t8.cosh x\t\t\t9.tanh x\n");  // printing sub-menu under trigonometric functions
                	scanf("%d",&ch);              // input for sub-menu operation choice
                	switch(ch) {
				int ch2;
                    		case 1: printf("You have chosen to do sin operation\n");  // sin x
                          		printf("1.degree\t 2.radian\n");
                           		scanf("%d",&ch2);                                          // for selection of input unit : radian or degree
                           		switch(ch2) {
                           
                               			case 1: printf("Enter the angle in degree\t\n");    //for degree
                                       			scanf("%lf",&x);
                                       			res = sin (x*PI/180);
                                       			printf("the answer is %lf\n\t",res);
                                       			break;

					        case 2: printf("enter the angle in radian\n\t");          // radian
                                       			scanf("%lf",&x);
                                       			res=sin(x);
                                       			printf("The result is %lf\n\t",res);
                                       			break;

                                        }
                           		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag=");
                                        scanf("%d",&flag);
					break;
                     			case 2: printf("You have chosen to do cosine operation\n");       // for cos x
                             			printf("1.Degree\t2.Radian\t\n");
                             			scanf("%d",&ch2);                                          // for unit choice
                             			switch(ch2) {
                           					
                               				case 1: printf("Enter the angle in degree\n\t"); // degree
                                       				scanf("%lf",&x);
                                       				res = cos (x*PI/180);
                                       				printf("the answer is %lf\n\t",res);
                                       				break;

					           	case 2: printf("enter the angle in radian\t\n");  //radian
                                       				scanf("%lf",&x);
                                       				res=cos(x);
                                       				printf("The result is %lf \t\n",res);
                                       				break;

                           			}
                           			printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					        printf("\n flag=");
                                       		scanf("%d",&flag);
					        break;
                    				case 3:  printf("You have chosen to do tan operation\n");  //tan x
                             				 printf("1.Degree\t2.Radian\t\n");
                             				 scanf("%d",&ch2);
                             			switch(ch2) {
                           
                               				case 1: printf("Enter the angle in degree\t\n");
                                       				scanf("%lf",&x);
                                       				res = tan (x*PI/180);
                                       				printf("the answer is %lf\n\t",res);
                                       				break;

					           	case 2: printf("enter the angle in radian\t\n");
                                       				scanf("%lf",&x);
                                       				res=tan(x);
                                       				printf("The result is %lf\n\t",res);
                                       				break;

                           			}
                           			printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					        printf("\n flag=");
                                       		scanf("%d",&flag);
					        break;
                    				case 4: printf("you have chosen to do arcsin x\n");  // for sin inverse
                            				printf("\n1.Degree\2.Radian\n");
                            				scanf("%d",&ch2);   // for the unit choice of output
                            				switch(ch2) {
                            
                                				case 1: printf("Enter the value of x\n");
                                        				scanf("%lf",&x);
                                        				res=asin(x)*180.0/PI; // to give the result in degree
                                        				printf("The result in degree is=%lf\t\n",res);
                                        				break;
                                				case 2: printf("Enter the value of x\n");
                                        				scanf("%lf",&x);
                                        				res=asin(x);
                                        				printf("The result in radian is=%lf\t\n",res);
                                        				break;
                            				}
                            				printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					                printf("\n flag=");
                                       			scanf("%d",&flag);
					                break;
                    					case 5: printf("you have chosen to do arccos x\n");   // cos inverse
                            					printf("\n1.Degree\t2.Radian\n");
                            					scanf("%d",&ch2);                                   //for unit choice of output
                            					switch(ch2) {
                            					
                                					case 1: printf("Enter the value of x\n");    //degree
                                        					scanf("%lf",&x);
                                       						res=acos(x)*180.0/PI;
                                        					printf("The result in degree is=%lf\t\n",res);
                                        					break;
                                					case 2: printf("Enter the value of x\n");   //radian
                                        					scanf("%lf",&x);
                                        					res=acos(x);
                                        					printf("The result in radian is=%lf\t\n",res);
                                        					break;
                            					}
                            					printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					                   	printf("\n flag=");
                                       				scanf("%d",&flag);
					                   	break;
                    						case 6: printf("you have chosen to do arctan x\n");   //tan inverse
                            						printf("\n1.Degree\2.Radian\n");
                            						scanf("%d",&ch2);
                            						switch(ch2) {
                            					
                                						case 1: printf("Enter the value of x\n");
                                        					scanf("%lf",&x);
                                        					res=atan(x)*180.0/PI;
                                        					printf("The result in degree is=%lf\t\n",res);
                                        					break;
                                					case 2: printf("Enter the value of x\n");
                                        					scanf("%lf",&x);
                                        					res=atan(x);
                                        					printf("The result in radian is=%lf\t\n",res);
                                        					break;
                            						}
                             						printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					                   		printf("\n flag=");
                                       					scanf("%d",&flag);
					                   		break;
                     							case 7: printf("You have chosen to do 'sinh x' operation\n");   //for sin hyperbolic operation
                             							printf("1.degree\t 2.radian\n");
                             							scanf("%d",&ch2);
                           							switch(ch2) {
                           									
                               								case 1: printf("Enter the angle in degree\t\n");
                                       								scanf("%lf",&x);
                                       								res = sinh (x*PI/180);
                                       								printf("the answer is %lf\t\n",res);
                                       								break;

					           					case 2: printf("enter the angle in radian\t\n");
                                       								scanf("%lf",&x);
                                       								res=sinh(x);
                                       								printf("The result is %lf\t\n",res);
                                       								break;

                           							}
                              							printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
                              							printf("\n flag=");
                              							scanf("%d",&flag);
                              							break;
                    								case 8: printf("You have chosen to do 'cosh x' operation\n");   //for cos hyperbolic function
                             								printf("1.degree\t 2.radian\n");
                             								scanf("%d",&ch2);
                           								switch(ch2) {
                           					
                               									case 1: printf("Enter the angle in degree\t\n");
                                       									scanf("%lf",&x);
                                       									res = cosh (x*PI/180);
                                       									printf("the answer is %lf\t",res);
                                       									break;

					           						case 2: printf("enter the angle in radian\t\n");
                                       									scanf("%lf",&x);
                                       									res=cosh(x);
                                       									printf("The result is %lf\t\n",res);
                                       									break;

                           								}
                              								printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
                              								printf("\n flag=");
                              								scanf("%d",&flag);
                              								break;
                    									case 9: printf("You have chosen to do 'tanh x' operation\n");  // for tan hyperbolic operations
                             									printf("1.degree\t 2.radian\n");
                             									scanf("%d",&ch2);
                             									switch(ch2) {
                           										
                               										case 1: printf("Enter the angle in degree\t\n");
                                       										scanf("%lf",&x);
                                      										res = tanh (x*PI/180);
                                       										printf("the answer is %lf\t\n",res);
                                       										break;

					           							case 2: printf("enter the angle in radian\t\n");
                                       										scanf("%lf",&x);
                                       										res=tanh(x);
                                       										printf("The result is %lf\t\n",res);
                                       										break;

                           									}
                              									printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
                              									printf("\n flag=");
                              									scanf("%d",&flag);
                              									break;






                				}
				}

				if(flag==1)    // to continue with the result



         			do {
			   		int ch1;
			    		printf("Which of the following operations would you like to do?\n");
		        		printf("\n\t1.Algebraic operations\t\t2.Trigonometric Operations\n");  // continuing the initial menu
		        		scanf("%d",&ch1);    // for operation selection
		       	 		switch(ch1) {
		        
            					case 1:
							printf("\n\n\t1.Addition\t\t2.Subtraction\t\t3.Multiplication\t\t4.Division\t\t5.x^n\t\t\t6.e^x\t\t\t\t7.log_n (x)\t\t8.ln(x)\t\t\t9. 10^x\n");
							scanf("%d",&ch);
							switch(ch) {
								
								case 1://  addition
					 			printf("Enter the number to be added with the result:");
					 			scanf("%lf",&x);
					 			res=addition(res,x);    // the previous res is taken as input in the function and new result is stored in 'res'
					 			printf("\n result=%lf",res);
					 			printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					 			printf("\n flag=");
					 			scanf("%d",&flag);
					 			break;
						case 2: printf("Enter the number to be subtracted with the result:"); //subtraction
					 		scanf("%lf",&x);
					 		res=subtraction(res,x);
					 		printf("\n result=%lf",res);
					 		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					 		printf("\n flag=");
					 		scanf("%d",&flag);
					 		break;
						case 3: printf("Enter the number to be multiplied with the result:"); // multiplication
					 		scanf("%lf",&x);
					 		res=multiplication(res,x);
					 		printf("\n result=%lf",res);
					 		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					 		printf("\n flag=");
					 		scanf("%d",&flag);
						 	break;
						case 4: printf("Enter the number to be divided with the result:");  // division
					 		scanf("%lf",&x);
					 		res=division(res,x);
					 		printf("\n result=%lf",res);
					 		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					 		printf("\n flag=");
					 		scanf("%d",&flag);
					 		break;
							double n;
                    				case 5: printf("enter n\n");
                       					scanf("%lf", &n);
                       					res=pow(res,n);
                       					printf("the result is %lf\n",res);
                       					printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
                       					printf("\n flag=");
                       					scanf("%d", &flag);
                       					break;
							double x;
                    				case 6: printf("you are going to do e^x with x as the previous result\n");
                       					res=exp(res);
                       					printf("the result is %lf\t\n",res);
                       					printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					   		printf("\n flag=");
                       					scanf("%d",&flag);
					   		break;
                    				case 7: printf("You have chosen to do log_n (x) with x as the previous result\n");
                       					printf("Enter the value of n\n");
                       					scanf("%lf",&n);
                       					res=log(res)/log(n);
                       					printf("the result is %lf\t\n",res);
                       					printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					   		printf("\n flag=");
                       					scanf("%d", &flag);
					   		break;
                    				case 8: printf("You have chosen to do ln x with x as the previous result\n");
                        				res=log(res);
                        				printf("the result is %lf\t\n",res);
                        				printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					    		printf("\n flag=");
                        				scanf("%d",&flag);
					    		break;
                    				case 9: printf("you have chosen to do 10^x with x as the previous result\n");
                        				res=pow(10,res);
                        				printf("the result is %lf\t\n",res);
                        				printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					    		printf("\n flag=");
                        				scanf("%d", &flag);
					    		break;
                        				default: printf("\n wrong choice!");
                        				break;

            				}	
            				break;

             				case 2: printf("\nYou have selected Trigonometric operations\n");  // continuing with trigonometric functions
                     				printf("\nWhich of the following operations do you want to perform?\n");
                     				printf("\n\t1.sin x\t\t2.cos x\t\t3.tan x\t\t4.arcsin x\t\t\t5.arccos x\t6.arctan x\t7.sinh x\t8.cosh x\t\t\t9.tanh x\n");
                     				scanf("%d", &ch);
                     				int ch2;
                     				switch(ch) {
                         		case 1: printf("you have chosen to do sin operation with the previous result as answer\n");
                                 		printf("1.degree\t 2.radian\n");
                                 		scanf("%d", &ch2);
                                 		switch(ch2) {
                               				case 1:
                                       				res = sin (res*PI/180);  // taking the previous result as input and storing the new result in res
                                       				printf("the answer is %lf\t\n",res);
                                       				break;

							case 2:
                                       				res=sin(res);
                                       				printf("The result is %lf\t\n",res);
                                       				break;

                           			}
                                 		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					        printf("\n flag=");
                                 		scanf("%d", &flag);
					        break;
                          			case 2: printf("you have chosen to do cos operation with the previous result as answer\n");
                                  			printf("1.degree\t 2.radian\n");
                                  			scanf("%d", &ch2);
                                 			switch(ch2) {
                           
                               					case 1:
                                       					res = cos (res*PI/180);
                                       					printf("the answer is %lf\t\n",res);
                                       					break;

					           		case 2:
                                       					res=cos(res);
                                       					printf("The result is %lf\t\n",res);
                                       					break;

                           				}
                                   			printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					                printf("\n flag=");
                                   			scanf("%d", &flag);
					                break;
                          				case 3: printf("you have chosen to do tan operation with the previous result as answer\n");
                                  				printf("1.degree\t 2.radian\n");
                                  				scanf("%d", &ch2);
                                 				switch(ch2) {
                           
                               						case 1:
                                       						res = tan(res*PI/180);
                                       						printf("the answer is %lf\t\n",res);
                                       						break;

					           			case 2:
                                       						res=tan(res);
                                       						printf("The result is %lf\t\n",res);
                                       						break;

                           					}
                                   				printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					               		printf("\n flag=");
                                   				scanf("%d",&flag);
					               		break;
                          					case 4: printf("you have chosen to do arcsin operation with the previous result as answer\n");
                                  					printf("1.degree\t 2.radian\n");
                                  					scanf("%d", &ch2);
                                 				switch(ch2) {
                           
                               						case 1:
                                       						res = asin(res)*180.0/PI;
                                       						printf("the answer is %lf\t\n",res);
                                       						break;

					           			case 2:
                                       						res=asin(res)*180.0/PI;
                                       						printf("The result is %lf\t\n",res);
                                       						break;

                           					}
                                   				printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					               		printf("\n flag=");
                                   				scanf("%d", &flag);
					               		break;
                          					case 5: printf("you have chosen to do arccos operation with the previous result as answer\n");
                                  					printf("1.degree\t 2.radian\n");
                                  					scanf("%d", &ch2);
                                 					switch(ch2) {
                               							case 1:
                                       							res = acos(res)*180.0/PI;
                                       							printf("the answer is %lf\t\n",res);
                                       							break;

					           				case 2:
                                       							res=acos(res)*180.0/PI;
                                       							printf("The result is %lf\t\n",res);
                                       							break;

                           						}
                                   					printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					               			printf("\n flag=");
                                   					scanf("%d",&flag);
					               			break;
                         					case 6: printf("you have chosen to do arctan operation with the previous result as answer\n");
                                  					printf("1.degree\t 2.radian\n");
                                  					scanf("%d", &ch2);
                                 				switch(ch2) {
                           
                               						case 1:
                                       					res = atan(res)*180.0/PI;
                                       					printf("the answer is %lf\t\n",res);
                                       					break;

					           			case 2:
                                       					res=atan(res)*180.0/PI;
                                       					printf("The result is %lf\t\n",res);
                                       					break;

                           					}
                                  			 	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					               		printf("\n flag=");
                                   				scanf("%d", &flag);
					               		break;
                         					case 7: printf("you have chosen to do 'sinh x' operation with the previous result as answer\n");
                                  					printf("1.degree\t 2.radian\n");
                                  					scanf("%d", &ch2);
                                 					switch(ch2) {
                           
                               							case 1:
                                       						res = sinh (res*PI/180);
                                       						printf("the answer is %lf\t\n",res);
                                       						break;

					           				case 2:
                                       						res=sinh(res);
                                       						printf("The result is %lf\t\n",res);
                                       						break;

                           						}
                                 					printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					             			printf("\n flag=");
                                 					scanf("%d", &flag);
                                 					break;
                         					case 8: printf("you have chosen to do 'cosh x' operation with the previous result as answer\n");
                                  					printf("1.degree\t 2.radian\n");
                                  					scanf("%d", &ch2);
                                 					switch(ch2) {
                           
                               							case 1:
                                       						res = cosh (res*PI/180);
                                       						printf("the answer is %lf\t\n",res);
                                       						break;

					           				case 2:
                                       						res=cosh(res);
                                       						printf("The result is %lf\t\n",res);
                                       						break;

                           						}
                                 					printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					             			printf("\n flag=");
                                 					scanf("%d", &flag);
                                 					break;
                          					case 9: printf("you have chosen to do 'tanh x' operation with the previous result as answer\n");
                                  				printf("1.degree\t 2.radian\n");
                                  				scanf("%d", &ch2);
                                 				switch(ch2) {
                           							
                               						case 1:
                                       					res = tanh (res*PI/180);
                                       					printf("the answer is %lf\t\n",res);
                                       					break;

					           			case 2:
                                       					res=tanh(res);
                                       					printf("The result is %lf\t\n",res);
                                       					break;

                           					}
                                 				printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					             		printf("\n flag=");
                                 				scanf("%d", &flag);
                                 				break;


                     			}

				}

                     	}
			while(flag==1);

			printf("\n Do you want to continue? press 'y' or 'Y' to continue.else press any other key \n");
			c=getchar();
			
		} while(c == 'y' || c == 'Y');      // for reset of all the previous calculations and starting fresh calculations
		getchar();
	}
	return;
}

void advanced() {
	char choice[1],choose[1];
	AD1:printf("WELCOME TO ADVANCED CALCULATION\n");
    	printf("OPERATIONS CAN BR PERFORMED\n\n");
    	printf("1:MATRIX\t\t\t2:COMPLEX NUMBERS\t3:INTEGRATION\n\n");
    	printf("4:DIFFERENTATION\t\t5:VECTOR\t\t6:STATISTICS\n\n");
    	printf("7:DIFFERENTIAL EQUATION\t\t8:GRAPHICAL\n\n");
    	printf("ENTER CHOICE\n");
    	scanf("%s", choice);
    	if(choice[0]=='1') {
    		matrix();
    	}
	if(choice[0]=='2') {
		complexnumber();
    	}
	if(choice[0]=='3') {
    		integration();	
	}
    	if(choice[0]=='4') {
    		differentiation();
	}
    	if(choice[0]=='5') {	
	vectors();
	}
    	if(choice[0]=='6') {
    	statistics();
	}
    	if(choice[0]=='7') {	
	differential();
	}
    	if(choice[0]=='8') {	
	graphical();
	}

	AD2:printf("\nCONTINUE WITH ADVANCE CALCULATION\n");
    	    scanf("%s", choose);
    	    if(choose[0]=='y'||choose[0]=='Y') { 
	    	goto AD1;
	    }
		else if(choose[0]=='N'||choose[0]=='n') {
            return;
	    }
	    else {
    
            	//printf("ERR");
            	goto AD2;
    	    }
	    return;
	}


void matrix() {
	float A[100][100],B[100][100],C[100][100];      //Variables declarations
	int row1,column1,row2,column2,k,i,j;
	char choice[1],choose[1];
    		//LABEL for GOTO STATEMENT
    MAT:{
	printf("\n Welcome to advanced calculation\n");                  //MENU of OPERATIONS
	printf(" U CAN PERFORM:\n");
	printf("1:ADDITION\t");
	printf("2:SUBTRACTION\t");
	printf("3:MULTIPLICATION\t");
	printf("4:LINEAR EQUATION\n");
	printf("5:DETERMINANT\t");
	printf("6:EIGEN VALUE\t");
	printf("\n Enter your choice");
	scanf("%s", choice);                                  //ENTER YOUR CHOICE
	if(choice[0]=='1') {                         //depending upon your choice respective functions will be called
		add();
	}                                 //function call for add
	if(choice[0]=='2') {
		subtract();
	}                              //function call for subtract
	if(choice[0]=='3') {
		multiply();
	}                              //function call for multiply
	if(choice[0]=='4') {
		linearequation();
	}                         //function call for linear equations
	if(choice[0]=='5') {
	determinant();
	}
	if(choice[0]=='6') {
	eigenvalue();
	}
	printf("\n");

 	MAT1:{
	printf("CONTINUE(Y/N)\n");
	scanf("%s", choose);
	if(choose[0]=='Y'){
    	system("clear");
    	goto MAT;
	}
	if(choose[0]=='N')
    	return ;
	else {
	printf("ERR\n");
	goto MAT1;
	}
    }	

 }
 return;
}


void add() {      //enter the rowa and column of the matrix 1 and 2
	float A[100][100],B[100][100],C[100][100];      //Variables declarations
	int row1,column1,row2,column2,k,i,j;
	char choice[1],choose[1];
	printf("\n order 1st matrix\n");
	scanf("%d", &row1);
	scanf("%d", &column1);
	printf("\norder 2 matrix\n");
	scanf("%d", &row2);
	scanf("%d", &column2);
        if((row1==row2)&&(column1==column2)) {    //checking condition for addition
		printf("\nEnter matrix1\n");
		for( i=0;i<row1;i++) {
           
                	for( j=0;j<column1;j++) {
               
                   		scanf("%f\t", &A[i][j]);
                   		printf("\n");
               		}
               		printf("\n\n");
           	}          //printing matrix 1
           	for( i=0;i<row1;i++) {
           			
                	for( j=0;j<column1;j++) {
                
                   		printf("%f\t",A[i][j]);

               		}
               		printf("\n");
           	}              //enter values of matrix 2
           	printf("\nEnter matrix 2\n");
           	for( i=0;i<row1;i++) {
               		for( j=0;j<column1;j++) {
                   		scanf("%f\t", &B[i][j]);
                   		printf("\n");
              	        }
               		printf("\n\n");
           	}//printing matrix 2
           	printf("\n");
           	for( i=0;i<row1;i++) {
           		for( j=0;j<column1;j++) {
                   		printf("%f\t",B[i][j]);

               		}
               		printf("\n");
           	}//calculating addition of matrix
           	for( i=0;i<row1;i++) {
               		for( j=0;j<column1;j++) {
               			C[i][j]=A[i][j]+B[i][j];

               		}
           	}//printing the result
           	printf("\n\n RESULT\n");
               	for( i=0;i<row1;i++) {
               		for( j=0;j<column1;j++) {
                   		printf("%f\t", C[i][j]);
			}
               		printf("\n");
           	}
       	}//if the condition is not satisfied then print an error message
       	else
        printf("ERROR");
	return;            //return

}
void subtract() {                      //function definition for subtraction
	float A[100][100],B[100][100],C[100][100];      //Variables declarations
    	int row1,column1,row2,column2,k,i,j;
    	char choice[1],choose[1];
   	printf("\norder 1st matrix\n");
    	scanf("%d", &row1);
    	scanf("%d", &column1);
    	printf("\n order 2nd matrix\n");
    	scanf("%d %d", &row2 , &column2);
       	//checking condition for subtraction
       	if((row1==row2)&&(column1==column2)) {
        	printf("\nEnter matrix 1\n");
           	//entering matrix 1
           	for( i=0;i<row1;i++) {
               		for( j=0;j<column1;j++) {
                		scanf("%f",&A[i][j]);
                   		printf("\n");
               		}
               		printf("\n\n");
           	}//printing matrix 1
           	for( i=0;i<row1;i++) {
               		for( j=0;j<column1;j++) {
                   		printf("A[i][j]\t");

               		}
               		printf("\n");
           	}//enter matrix 2 
           	printf("\nEnter matrix 2\n");
           	for( i=0;i<row1;i++) {
               		for( j=0;j<column1;j++) {
                   		scanf("%f", &B[i][j]);
                   		printf("\n");
               		}
               		printf("\n\n");
           	}//printing matrix 2
           	for( i=0;i<row1;i++) {
               		for( j=0;j<column1;j++) {
                   		printf("B[i][j]\t");

               		}
               		printf("\n");
           	}//calculating subtraction
           	for( i=0;i<row1;i++) {
               		for( j=0;j<column1;j++) {
                		C[i][j]=A[i][j]-B[i][j];

               		}
           	}//printing result of subtraction
           	printf("Result\n");
               	for( i=0;i<row1;i++) {
               		for( j=0;j<column1;j++) {
                   		printf("C[i][j]\t");

               		}
               		printf("\n");
           	}
           }//if the condition fails then printing an error message
           else
           printf("ERROR");

}
void multiply() {                       //function definition for multiplication
	float A[100][100],B[100][100],C[100][100];      //Variables declarations
    	int row1,column1,row2,column2,k,i,j;
    	char choice[1],choose[1];
    	printf("\n order 1st matrix\n");
    	scanf("%d", &row1);
    	scanf("%d", &column1);
    	printf("\norder 2nd matrix\n");
    	scanf("%d", &row2);
    	scanf("%d", &column2);
    	printf("\n");
    		//entering matrix 1
    	printf("Enter Matrix 1:\n");
    	for(i=0;i<row1;i++) {
        	for(j=0;j<column1;j++) {
            		scanf("%f",&A[i][j]);

        	}
        	printf("\n");
    	}
    	//entering matrix 2
    	printf("Enter matrix 2:");
    	printf("\n");
    	for(i=0;i<row2;i++) {
        	for(j=0;j<column2;j++) {
            		scanf("%f", &B[i][j]);

        	}
        	printf("\n");
    	}
    	//printing matrix 1

    	printf("\n");
    	printf("Matrix 1 is");
    	printf("\n");
    	for(i=0;i<row1;i++) {
        	for(j=0;j<column1;j++) {
            		printf("%f\t",A[i][j]);
        	}
        	printf("\n");
    	}
	//printing matrix 2

    	printf("\n");
  	printf("Matrix 2 is:");
  	printf("\n");

    	for(i=0;i<row2;i++) {
        	for(j=0;j<column2;j++) {
            		printf("%f\t",B[i][j]);
        	}
        	printf("\n");
    	}
    	//performing multiplication
     	for(i=0;i<row1;i++) {
        	for(j=0;j<column2;j++) {
           		C[i][j]=0;
            		for(k=0;k<row2;k++) {
            			C[i][j]+=A[i][k]*B[k][i];
          	  	}
        	}
    	}

	//printing the result
    	printf("RESULT:");
    	printf("\n");
    	for(i=0;i<row1;i++) {
        	for(j=0;j<column2;j++) {
            		printf("%f\t",C[i][j]);
        	}
        	printf("\n");
    	}
}

void linearequation() {                          //function definition for linear equation
	int i, j, k, n;
	float MatA[100][100], MatB[100], X[100];
	float Divisor, Factor, sum;
	printf("Enter variables?\n");
	scanf("%d", &n);
	//reading matrix A
	printf("ENTER COFFICIENTS OF  EQ1 2 &3\n");
	for(i=0; i< n; i++){
		for(j=0; j < n; j++){
			scanf("%f", &MatA[i][j]);
		}
		printf("\n");
	}
	//reading matrix B
	printf("\nENTER VALUES OF EQ 1 2 & 3\n");
	for(i=0; i< n; i++){
		scanf("%f", &MatB[i]);
	}
	//Gauss elimination
	for (i=0; i< n; i++){
		Divisor = MatA[i][i];
		MatA[i][i] = 1.0;
		// divide all values in the row by the divisor
		// to recalculate all coefficients in that row
			for (j = i+1; j < n; j++){
			MatA[i][j] = MatA[i][j]/Divisor;
			}
			//Also divide the corresponding RHS element
			MatB[i] = MatB[i]/Divisor;
			// now replace subsequent rows, by subtracting the
			// appropriate portion of the ithequation from it
			if (i+1 < n) {
				for (k=i+1; k<n; k++){
				Factor = MatA[k][i];
				MatA[k][i] = 0.0;
				for (j = i+1; j < n; j++){
					MatA[k][j] = MatA[k][j] -Factor * MatA[i][j];
				}
				MatB[k] = MatB[k] -Factor * MatB[i];
			}
	}
}
// back substitution starting with last variable
X[n-1] = MatB[n-1];
for (i= n-2; i>=0; i--){
	// Sum up ithrow using values of X already determined
	sum = 0.0;
	for (j = i+1; j < n; j++){
		sum = sum + MatA[i][j] * X[j];
	}
	X[i] = MatB[i] -sum;
}

for (i=0; i<n; i++){
	printf("X[%d] is %f\n",i,X[i]) ;
}
return ;
}

void determinant() {
	int A[100][100],n,result,i,j;
    	char choice[1];

    	deta1:
    	printf("\nENTER ORDER\n");
    	scanf("%d", &n);
    	printf("\nENTER ELEMENTS\n");
    	for(i=0;i<n;i++) {
        	for(j=0;j<n;j++) {
            		scanf("%d", &A[i][j]);

        	}
        	printf("\n");
    	}
    	printf("MATRIX\n");
    	for(i=0;i<n;i++) {
        	for(j=0;j<n;j++) {
        		printf("%d\t",A[i][j]);}
        		printf("\n");
    		}
    		result=det(A,n);
    		printf("ANSWER==%d",result);


    		return ;
 	}
 	int det(int A[100][100],int n){
     		int sum=0,C[100][100];
     		if(n=2) {
         		sum=A[0][0]*A[1][1]-A[1][0]*A[0][1] ;
         		return sum;
     		}
     		int i,j,m,h,k;
     		for(m=0;m<n;m++) {
         		h=0;k=0;
         	for(i=1;j<n;j++) {
          		for(j=0;k<n;k++) {
              			if(k=m) {				
					continue;
				}
              			C[h][k]=A[i][j];
              			k++;
              			if(k==n-1) {
                  			h++;
                  			k=0;
              			}
          		}
         	}
         	sum=sum+A[0][m]*pow(-1,m)*det(C,n-1);
      }
      return sum;
}

void eigenvalue() {
	float A[2][2],b,c,Z1,Y1,Y2;
    	int i,j,k,n;
    	printf("ENTER ORDER\n");
    	printf("2X2\n");
	
    	printf("ENTER MATRIX\n");
    	for(i=0;i<2;i++) {
        	for(j=0;j<2;j++) {
            		scanf("%f", &A[i][j]);
        	}
        	printf("\n");
    	}
    	printf("MATRIX IS:\n");
    	for(i=0;i<2;i++) {
        	for(j=0;j<2;j++) {
            		printf("%f\t",A[i][j]);
        	}
        	printf("\n");
    	}
    	b=(A[0][0]+A[1][1]);
    	c=(A[0][0]*A[1][1]-A[0][1]*A[1][0]);
    	Z1=b*b-4*c;
    	printf("\n");
    	if(Z1>=0) {
    		Y1=(-b+sqrt(Z1))/2;
        	Y2=(-b-sqrt(Z1))/2;
        	printf("=%f\t %f",Y1,Y2);
    	}
    	if(Z1<0) {
        	printf("\nIMAGINARY ROOTS\n");
        	printf("ERR TRY AGAIN");
        	printf("\n");
    	}
	return ;
}



void integration(){
	float I,a,b,h;                     //declaration of variables
	float e;
	char choice[2],choose[2];
	int i;
	{

		INT:                                     //LABEL for GOTO statement
		printf("MENU\n");                              //menu
		printf("1:x^n\t\t2:sin x\t\t3:cos x\n4:tan x\t\t5:Asin x\t6:Acos x\n7:Atan x\t8:log\t\t9:e^x");
		printf("\nCHOICE?\n");
		scanf("%s", choice);                                 //enter choice  which integration to perform
		if(choice[0]=='1') {                       	// for X^n calculation

       			printf("POWER OF X\n");
       			scanf("%f", &e);
       			printf("LIMITS\n");
       			scanf("%f%f", &a,&b);
       			printf("\n");
       			h=(b-a)/1000;
       			I=0;
			for( i=1;i<=1000;i++) {                //using looping construct for Simpson 1/3 method
			    if(i==1)
     				I=I+f(a,e);
     			if(i==1000)
     				I=I+f(b,e);
     			else if(i%2==0)
     				I=I+2*f(a+i*h,e);
     			else
     				I=I+4*f(a+i*h,e);
			}
    			printf("\n=");
    			printf("%f",h*I/3);
		}

		if(choice[0]=='3') {                                 //for integration of cos x
			printf("LIMITS\n");
       			scanf("%f%f",&a,&b);
       			printf("\n");
       			h=(b-a)/1000;
       			I=0;
			for( i=1;i<=1000;i++) {                             //using looping construct for Simpson 1/3 method
				if(i==1)
     				I=I+fcos(a);
     				if(i==1000)
     					I=I+fcos(b);
     				else if(i%2==0)
     					I=I+2*fcos(a+i*h);
     				else
     					I=I+4*fcos(a+i*h);
			}
    			printf("\n=");
    			printf("h*I/3");
		}
		if(choice[0]=='4') {                              //for calculation integral of tan x
			printf("LIMITS\n");
       			scanf("%f%f",&a,&b);
       			printf("\n");
       			h=(b-a)/1000;
       			I=0;
			for( i=1;i<=1000;i++) {                           //using looping construct for Simpson 1/3 method
    				if(i==1)
     					I=I+ftan(a);
     				if(i==1000)
     					I=I+ftan(b);
     				else if(i%2==0)
     					I=I+2*ftan(a+i*h);
     				else
     					I=I+4*ftan(a+i*h);
			}
    			printf("\n=");
    			printf("%lf",h*I/3);
		}
		if(choice[0]=='5') {                                  // for calculation of integral inverse sin x
			printf("LIMITS\n");
       			scanf("%f%f",&a,&b);
       			printf("\n");
       			h=(b-a)/1000;
       			I=0;
			for( i=1;i<=1000;i++) {
				if(i==1)
     					I=I+fasin(a);
     				if(i==1000)
    					I=I+fasin(b);
    			 	else if(i%2==0)
     					I=I+2*fasin(a+i*h);
     				else
     					I=I+4*fasin(a+i*h);
			}
    			printf("\n=");
    			printf("%lf",h*I/3);
		}
		if(choice[0]=='6') {                              // for calculation of integral inverse cos x
			printf("LIMITS\n");
       			scanf("%f%f", &a,&b);
       			printf("\n");
       			h=(b-a)/1000;
       			I=0;
			for( i=1;i<=1000;i++) {    
				if(i==1)
     					I=I+facos(a);
     				if(i==1000)
     					I=I+facos(b);
     				else if(i%2==0)
     					I=I+2*facos(a+i*h);
     				else
     					I=I+4*facos(a+i*h);
			}
    			printf("\n=");
    			printf("%lf",h*I/3);
		}
		if(choice[0]=='7') {                              //// for calculation of integral inverse tan x
			printf("LIMITS\n");
       			scanf("%f%f",&a,&b);
       			printf("\n");
       			h=(b-a)/1000;
       			I=0;
			for( i=1;i<=1000;i++) {    		
				if(i==1)
     					I=I+fatan(a);
     				if(i==1000)
     					I=I+fatan(b);
     				else if(i%2==0)
     					I=I+2*fatan(a+i*h);
     				else
     					I=I+4*fatan(a+i*h);
			}
    			printf("\n=");
    			printf("%lf",h*I/3);
		}
		if(choice[0]=='8') {                                    //// for calculation of integral inverse log x
			printf("LIMITS\n");
       			scanf("%f%f",&a,&b);
       			printf("\n");
       			h=(b-a)/1000;
       			I=0;
			for( i=1;i<=1000;i++) {    
				if(i==1)
     					I=I+ftan(a);
     				if(i==1000)
     					I=I+ftan(b);
     				else if(i%2==0)
     					I=I+2*ftan(a+i*h);
     				else
     					I=I+4*ftan(a+i*h);
			}
    			printf("\n=");
    			printf("%lf",h*I/3);
		}
		if(choice[0]=='9') {                                 //// for calculation of integral inverse exponential x
			printf("LIMITS\n");
        		scanf("%f%f",&a,&b);
       			printf("\n");
       			h=(b-a)/1000;
       			I=0;
			for( i=1;i<=1000;i++) {                             //using looping construct for Simpson 1/2 method for exponential x
				if(i==1)
     					I=I+fexp(a);
     				if(i==1000)
     					I=I+fexp(b);
     				else if(i%2==0)
     					I=I+2*fexp(a+i*h);
     				else
     					I=I+4*fexp(a+i*h);
			}
    			printf("\n=");
    			printf("%lf",h*I/3);
		}
	}
	printf("CONTINUE WITH INTEGRATION\n");                   //want to continue
	scanf("%s", choose);
	if(choose[0]=='Y') {                 //if yes then clear screen and GOTO LABEL INT
        	system("clear");
        	goto INT;
    	}
 	else if(choose[0]=='N') {                  //If NO then clear screen and return
    		system("clear");
    		return ;
	}
	else printf("ERR");
	return ;
}


//Below are the function definition  for the above mentioned functions


float f(float x, float e) {
	float value;
     	value= pow(x,e);
     	return value;
}
float fsin(float x) {
	float value;
     	value=sin(x);
     	return value;
}
float fcos(float x) {
	float value;
     	value=cos(x);
     	return value;
}
float ftan(float x) {
      	float value;
     	value=tan(x);
     	return value;
}
float fasin(float x) {
      	float value;
     	value=asin(x);
     	return value;
}
float facos(float x) {
      	float value;
     	value=acos(x);
     	return value;
}
float fatan(float x) {
      	float value;
     	value=atan(x);
     	return value;
}
float fexp(float x) {
      	float value;
     	value=exp(x);
     	return value;
}

void differentiation() {  
	float point,result,h=0.005,e;                //variables declarations
 	char choice[1],choose[1];
     	INT:
     	printf("DIFFERENTIATION\n");
     	printf("MENU\n");                              // printing menu
     	printf("1:x^n\t\t2:sin x\t\t3:cos x\n4:tan x\t\t5:Asin x\t6:Acos x\n7:Atan x\t8:log\t\t9:e^x");
     	printf("\nCHOICE?\n");
     	scanf("%s", choice);                     //depending upon the choice it will perform the operation
      	if(choice[0]=='1') {                    //for algebraic function
		printf("POWER OF X\n");
     		scanf("%f", &e);

     		printf("ENTER POINT\n");                //point at which this to be calculated
     		scanf("%f", &point);
     		result=(f(point+h,e)-f(point-h,e))/(2*h);              //newtons divided difference formula
     		printf("\n=%f",result);                               // printing the result
 	}

	if(choice[0]=='2') {                                          //
		//for the sin function rest all are same as above

    		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h=0.005;
     		result=(fsin(point+h)-fsin(point-h))/(2*h);
     		printf("\n=%f",result);
 	}
	if(choice[0]=='3') {                                         //cosine function

     		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h=0.005;
     		result=(fcos(point+h)-fcos(point-h))/(2*h);
     		printf("\n=%f",result);
 	}
	if(choice[0]=='4') {
	//tangent function

     		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h=0.005;
     		result=(ftan(point+h)-ftan(point-h))/(2*h);
     		printf("\n=%f",result);
 	}
 	if(choice[0]=='5') {
	//inverse sine function

     		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h=0.005;
     		result=(fasin(point+h)-fasin(point-h))/(2*h);
     		printf("\n=%f",result);
 	}
 	if(choice[0]=='6') {

	//inverse cosine function

     		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h=0.005;
     		result=(facos(point+h)-facos(point-h))/(2*h);
     		printf("\n=%f" ,result);
  	}
  	if(choice[0]=='7') {
	//inverse tangent function

     		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h=0.005;
     		result=(fatan(point+h)-fatan(point-h))/(2*h);
     		printf("\n=%f",result);
 	}
 	if(choice[0]=='8') {
	//logarithmic  function

     		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h=0.005;
     		result=(log(point+h)-log(point-h))/(2*h);
     		printf("\n=%f" ,result);
 	}
 	if(choice[0]=='9') {
	//exponential function
     		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h=0.005;
     		result=(fexp(point+h)-fexp(point-h))/(2*h);
     		printf("\n=%f" ,result);
 	}

	DIFF:
	printf("\nCONTINUE WITH DIFFERENTATION\n");                   //want to continue
	scanf("%s", choose);
	if(choose[0]=='Y') {                 //if yes then clear screen and GOTO LABEL INT
    		system("clear");
        	goto INT;
    	}
 	else if(choose[0]=='N') {                   //If NO then clear screen and return
    		system("clear");
    		return ;
	}
	else {
		printf("ERR");
     		goto DIFF;}
		return ;
 	}


void complexnumber() {      //print menu
	float real,img,resultr,resulti,real1,img1;            //varibles declarations
    	char operation[2],continu[2];
    	printf("\nWELCOME TO ADVANCED COMPUTATION\n");
    	printf("MENU\n");
    	printf("+:ADD\t\t-:SUBTRACT\t*:MULTIPLY\n\n/:DIVISION\t\t|:MOD&ARG");
    	//loop for repetition of the content till the condition is true
  	CMP: do{
        	if(continu[0]=='Y') {      //if this is true perform the operation else ask for values and then operation and values and compute
            
                	printf("\n operation?\n");
                	scanf("%s", operation);
            	}
		else {
    			printf("\n\nREAL PART=\n");
    			scanf("%f", &real);
    			printf("IMAGINARY PART=\n");
    			scanf("%f", &img);
    			resultr=real;resulti=img;

    			printf("ENTER THE OPERATION\n");
    			scanf("%s", operation);
		}
     		if(operation[0]=='+'||operation[0]=='-'||operation[0]=='*'||operation[0]=='/'||operation[0]=='|') {    //use of switch statement to goto whatever is to be performed
  			switch(operation[0]) {
        			case'+':  printf("REAL PART=\n");
                   		scanf("%f", &real1);
                  		printf("IMAGINARY PART=\n");
                  		scanf("%f", &img1);
                  		resultr=real1+resultr;
                  		resulti=img1+resulti;
                  		printf("\n\n=%f %c (%f)i", resultr,operation[0],resulti);
                  		printf("\ncontinue?\n");
                  		scanf("%s", continu);
                  		break;
        			case'-':  printf("REAL PART=\n");
                  		scanf("%f", &real1);
                  		printf("IMAGINERY PART=\n");
                  		scanf("%f", &img1);
                  		resultr=resultr-real1;
                  		resulti=resulti-img1;
                  		printf("\n\n= %f %c (%f)i", resultr,operation[0],resulti);
                  		printf("\ncontinue?\n");
                  		scanf("%s", continu);
                  		break;
       				case '*' : printf("REAL PART=\n");
                   		scanf("%f", &real1);
                  		printf("IMAGINERY PART=\n");
                  		scanf("%f", &img1);
                  		resultr=(real1*resultr-img1*resulti);
                  		resulti=(real1*resulti+img1*resultr);
                  		printf("\n\n= %f %c (%f)i",resultr,operation[0],resulti);
                  		printf("\ncontinue?\n");
                  		scanf("%s", continu);
                  		break;
       				case '/' :  printf("REAL PART=\n");
                  		scanf("%f", &real1);
                  		printf("IMAGINERY PART=\n");
                  		scanf("%f", &img1);
                  		resultr=(real1*resultr+img1*resulti)/(resultr*resultr+resulti*resulti);
                  		resulti=(img1*resultr-real1*resulti)/(resultr*resultr+resulti*resulti);
                  		printf("\n\n= %f %c (%f)i",resultr,operation[0],resulti);
                  		printf("\ncontinue?\n");
                  		scanf("%s", continu);
                  	 	break;
      				case'|':    resultr=sqrt((resultr*resultr)+(resulti*resulti));
                  		resulti=atan(resulti/resultr);
                  		printf("R=%f", resulti);
                  		printf("THETA=%f", resulti);
                  		printf("\ncontinue?\n");
                  		scanf("%s", continu);
                   		break;


        			default: printf("ERROR");
                   		break;
   		}
	}//if the user enters some other values say p x or  instead of operations it will show an err message
    	else {
		printf("ERR");
      		printf("continue?\n");
      		scanf("%s", continu);                               //asks whether want to continue
     	}
    	if(continu[0]!='Y'&&continu[0]!='N') {
    		printf("\nERR\n");
	}                            //only Y and N characters are permitted else it will give an err msg
	
}while(continu[0]!='N');
    	printf("\n EXIT PRESS C and for more press any key\n");          //want to exit vectors press C
	scanf("%s", continu);
    	if(continu[0]=='C')                              //if yes c then terminates
    	return ;
    	else
       	goto CMP;                      //else main menu of this function opens
	return ;
}

void vectors() {//variables declarations
    	int value1,value2,value3,value4,value5,value6,result1=0,result2=0,result3=0,result;
   	char operation[2],continu[2];
    	printf("Welcome to advanced calculation\n\n");
    	printf("+:ADD\t\t-:SUBTRACT\t.:DOT PRODUCT\n\n\n");
    	printf("*:CROSS PRODUCT\t\tM:MOD\n\n");
 	VECTOR:do{                                        //do while loop for repetition of the process till the input is true
	//if the user wants to continue after obtaining the result then it will ask
	//for the operation to be performed with the result obtained
        	if(continu[0]=='Y') {
                	printf("\n operation?\n");
                	scanf("%s", operation);
            	}
		//if dont want to continue then the process begins from the beginning
    		else {
    		printf("Enter vector\n");
    		scanf("%d%d%d", &value1,&value2,&value3);
    		result1=value1;result2=value2;result3=value3;
    		printf("vector is\n");
    		printf("%di+%dj+%dk", value1,value2,value3);
    		printf("\n operation?\n");
    		scanf("%s", operation);}         //operations can be have specials symbols
                             //anything entered other will give an error message
    		if(operation[0]=='+'||operation[0]=='-'||operation[0]=='*'||operation[0]=='.'||operation[0]=='M') {
		//using switch to access through various operations to be performed
    		switch(operation[0]) {
    		case '+': printf("Enter vector\n");
             	scanf("%d%d%d", &value4,&value5,&value6);
              	printf("vector is\n");
              	printf("%di+%dj+%dk", value4,value5,value6);
              	result1=result1+value4;result2=result2+value5;result3=result3+value6;
              	printf("\n");
              	printf("\n%di+%dj+%dk\n",result1,result2,result3);
              	printf("\ncontinue?\n");
              	scanf("%s", continu);
              	break;

    		case '-': printf("Enter vector\n");
              	scanf("%d%d%d", &value4,&value5,&value6);
              	printf("vector is\n");
              	printf("%di+%dj+%dk", value4,value5,value6);
              	result1=result1-value4;result2=result2-value5;result3=result3-value6;
              	printf("\n");
              	printf("\n%di+%dj+%dk", result1,result2,result3);
              	printf("\ncontinue?\n");
              	scanf("%s", continu);
              	break;


    		case '*': printf("Enter vector\n");
              	scanf("%d%d%d", &value4,&value5,&value6);
              	printf("vector is\n");
              	printf("%di+%dj+%dk", value4,value5,value6);
              	result1=result1*value4;result2=result2*value5;result3=result3*value6;
              	printf("\n");
              	printf("\n%di+%dj+%dk\n",result1,result2,result3);
              	printf("\ncontinue?\n");
              	scanf("%s", continu);
              	break;
   		
		case '.' : printf("Enter vector\n");
              	scanf("%d%d%d", &value4,&value5,&value6);
              	printf("vector is\n");
              	printf("%di+%dj+%dk", value4,value5,value6);
              	result=result1*value4+result2*value5+result3*value6;
              	printf("\n");
              	printf("\n%d\n",result);
              	printf("\ncontinue?\n");
              	scanf("%s", continu);
              	break;

  		case '#':   printf("Enter vector\n");
              	scanf("%d%d%d", &value4,&value5,&value6);
              	printf("vector is\n");
              	printf("%di+%dj+%dk", value4,value5,value6);
              	result1=result2*value6-result3*value5;result2=result1*value6-value4*result3;
              	result3=result1*value5-result2*value4;
              	printf("\n");
              	printf("\n%di+%dj+%dk\n",result1,result2,result3);
              	printf("\ncontinue?\n");
              	scanf("%s", continu);
              	break;
  
		case 'M':  result=value1*value1+value2*value2+value3*value3;
             	result=sqrt(result);
             	printf("\n");
              	printf("\n%d\n", result);
              	printf("\ncontinue?\n");
              	scanf("%s", continu);
              	break;


   		default:   printf("ERROR");
              	continu[0]='N';
              	break;
	}
}
else {
	printf("ERR");
       	system("clear");                                       //as mentioned above printing error message
      	printf("continue?\n");
      	scanf("%s", continu);                            //want to continue? or not
}                                          //if anything pressed other than Y/N it gives an error message
if(continu[0]!='Y'&&continu[0]!='N') {
	printf("\nERR\n");

}


}while(continu[0]!='N');
	printf("\n EXIT PRESS C and for more press any key\n");         //if don't want to continue press C
	scanf("%s", continu);
    	if(continu[0]=='C')
    	return ;
    	else
       	goto VECTOR;              //else goto main menu of the vector
	return ;

}

void statistics() {
    	int choice; //store choice of user.
    	float result;
    	char yes_or_no;
    	do {
    		printf("enter your choice :  press\n\n");
        	printf("1-> MEAN       2->MEDIAN     3-> MODE    4-> STANDARD DEVIATION\n");
        	printf("5-> VARIENCE\n");
        	scanf("%d", &choice);
        	switch(choice) {
        		case 1: //if user give input 1,then it will cal mean function.
            		mean();
            		break;
        		case 2: // if user choose 2,then it will call median function.
            		median();
            		break;
        		case 3: //if user give input 3,then it will call mode function.
            		mode();
            		break;
        		case 4: //if user choose 4,then it will call standard deviation function.
            		result=standard_deviation();
            		printf("standard deviation is : %f\n", result);
            		break;
        		case 5: //if user choose 5,then it will call variance  function.
            		variance();
            		break;
        		default:
            		printf("error\n"); //if user give input other than the given option, an error message will be printed.
        	}
		printf("continue ? Y/N\n");   //user will be asked whether he wants another execution or not. if he replies yes, then again main menu will be printed.
        	scanf("%c", &yes_or_no);
        }while((yes_or_no=='Y')||(yes_or_no=='y'));


    	return ;
}

void mean() {  //calculate mean value
    	int value[200],totalnumber,i,j;
    	float result,sum=0;
    	printf("enter your data to calculate mean\n");
    	printf("enter the total number of data which you want to enter here, it should not exceed 200\n");
    	scanf("%d", &totalnumber);
   	if((totalnumber>=1)&&(totalnumber<=200)) {
		for(i=0;i<totalnumber;i++) {
        		printf("enter your data\n");
        		scanf("%d", &value[i]);
    		}
    		for(j=0;j<totalnumber;j++) {
        		sum=(sum+value[j]);
        		result=sum/totalnumber;
    		}

    		printf("mean value is :%f\n\n", result);
	}
	else
    	printf("error\n");
}
void median() { //calculate median value.
    	int totalnumber,value[200],i,j,k,p,temp=0,result;
    	printf("enter your data to calculate median\n");
    	printf("enter the total no of data which you want to enter,  it  should  not  exceed 200\n");
    	scanf("%d", &totalnumber);
    	for(i=0;i<totalnumber;i++) {
        	printf("enter your data\n");
        	scanf("%d", &value[i]);
    	}
    	for(j=0;j<totalnumber-1;j++) {
        	for(k=0;k<totalnumber-j-1;k++) {
            		if(value[k]>value[k+1]) {
        			temp=value[k];
        			value[k]=value[k+1];
        			value[k+1]=temp;
    			}
        	}

    	}
    	printf("print sorted list");
    	for(p=0;p<totalnumber;p++)
        printf("%d\n", value[p]);
    	if(totalnumber%2!=0) {
        	result=value[totalnumber/2];
        	printf("result is %d" ,result);
	}
    	else{
        	result=(value[totalnumber/2]+value[totalnumber/2+1])/2;
            	printf("median value is %d\n",result );

    	}

}

void mode() { //calculate mode value.
    	int totalnumber,value[200]={0},mode,max=0,newarray[200]={0},i,j,k=0,c;
    	printf("enter total number of data which you want to calculate, it must not exceed 200\n");
    	scanf("%d", &totalnumber);
    	printf("enter your data to calculate mode\n");
      	for(i=0;i<totalnumber;i++){
        	printf("enter your data\n");
        	scanf("%d", &value[i]);
	}

    	for(i=0;i<totalnumber-1;i++) {
        	mode=0;
        	for(j=i+1;j<totalnumber;j++) {
            		if(value[i]==value[j]){
                	mode++;
            		}
        	}
        	if((mode>max)&&(mode!=0)) {
            		k=0;
            		max=mode;
            		newarray[k]=value[i];
            		k++;
        	}
        	else if(mode==max) {
            		newarray[k]=value[i];
            		k++;
        	}
    	}
    	for(i=0;i<totalnumber;i++) {
        	if(value[i]==newarray[i])
            	c++;
    	}
    	if(c==totalnumber)
        printf("there is no mode\n");
        else{
            	printf("mode is :\n");
            	for(i=0;i<k;i++)
                printf("%d\n", newarray[i]);
        }
}
float standard_deviation() { //calculate standard deviation.
    	int i,j;
    	float meanvalue,sum=0,anothersum=0,finalvalue,result,value[200],totalnumber;
    	printf("enter the total number of data which you want to calculate, it should not cross 200\n");
    	scanf("%f", &totalnumber);
    	for(i=0;i<totalnumber;i++) {
        	printf("enter your data\n");
        	scanf("%f", &value[i]);
    	}
    	for(j=0;j<totalnumber;j++) {
        	sum=(sum+value[j]);
        	meanvalue=sum/totalnumber;
    	}
    	for(i=0;i<totalnumber;i++) {
        	anothersum+=((value[i]-meanvalue)*(value[i]-meanvalue));
    	}
    	finalvalue= anothersum/(totalnumber-1);
    	result=sqrt(finalvalue);
    	return result;

}
void variance() { //function for calculation of variance
   	float result,finalresult;
   	result=standard_deviation();
   	finalresult=result*result;
   	printf("varience for your data is : %f\n " ,finalresult);
}


void graphical() {    
	char choice[1],choose[1];
	SH0:    printf("1:DISTANCE BETWEEN TWO POINTS\n");
        printf("SLOPE-INTERCEPT\n");
        printf("MID POINT & EQUATION OF A LINE\n\n\n\n");
        printf("2:BEST FIT CURVE\n\n");
  	SH1:   scanf("%s", choice);
        if(choice[0]=='1') {
		slopeintercept();}
       	 	else if(choice[0]=='2') {
			bestfit();
		}
        	else {
			printf("ERR\n");
        		printf("ENTER CHOICE\n");
              		goto SH1;
		}
    		SH2:printf("\n\n CONTINUE(Y\\N)\n");
        	scanf("%s", choose);
        	if(choose[0]=='Y'||choose[0]=='y')
            	goto SH0;
        	if(choose[0]=='N'||choose[0]=='N') {
			system("clear");
            		return;
		}
            	else {
			printf("ERR\n");
                 	goto SH2;}

		}

void slopeintercept() {
    	char choice[0];
    	char yes_no[1];
    	double x1,x2,y1,y2,result,result2;

  	chc:   printf("enter your choice\n");
        printf("press\n\n");
        printf("1--> distance between two points              2--> slope        3--> intercept\n");
        printf("4--> equation of straight line                5--> midpoint\n");
        scanf("%s", choice);
        switch(choice[0]) {
        	case '1':
                distance();
                chc0:     printf("continue? Y/N\n");
                scanf("%c", &yes_no[0]);
                if((yes_no[0]=='y')||(yes_no[0]=='Y')) {
			system("clear");
                        goto chc;
		}
                else if((yes_no[0]=='n')||(yes_no[0]=='N'))
                	printf("thank you\n");
                        else {
                        	printf("sorry, wrong input\n");
                                goto chc0 ;
			}
                        break;
                    	case '2':

                        printf("enter x and y co-ordinates of two points in the format\n");
                        printf("for first point  (x,y)= \n");
                        scanf("%lf%lf", &x1,&y1);
                        printf("for second point (x,y)=\n");
                        scanf("%lf%lf", &x2,&y2);
                        result=slope(x1,y1,x2,y2);
                        if (result!=0){
                     		printf("slope is %lf\n",result);
			}
                	chc1:   printf("continue? Y/N\n");
                        scanf("%s", yes_no);
                        if((yes_no[0]=='y')||(yes_no[0]=='Y')) {
                                system("clear");
                                goto chc;
			}
                        else if((yes_no[0]=='n')||(yes_no[0]=='N'))
                                printf("thank you\n");
                        else {
                        	printf("sorry, wrong input\n");
                                goto chc1 ;
			}
                        break;
                    	case '3':
                        printf("enter x and y co-ordinates of two points in the format \n");
                        printf("for first point  (x,y)= \n");
                        scanf("%lf%lf", &x1,&y1);
                        printf("for second point (x,y)=\n");
                        scanf("%lf%lf", &x2,&y2);
                        result2=intercept(x1,y1,x2,y2);
                        printf("intercept is :%lf\n",result2);
                  	chc2: printf("continue? Y/N\n");
                        scanf("%s", yes_no);
                        if   ((yes_no[0]=='y')||(yes_no[0]=='Y')) {
                        	system("clear");
                                goto chc;
			}
                        else if((yes_no[0]=='n')||(yes_no[0]=='N'))
                        	printf("thank you\n");
                        else {
                                printf("sorry, wrong input\n");
                                goto chc2 ;
			}
                    	break;
                    	case '4':
                        equation();
                        chc3: printf("continue? Y/N\n");
                              scanf("%s", yes_no);
                              if((yes_no[0]=='y')||(yes_no[0]=='Y')) {
                              		system("clear");
                                        goto chc;
					}
                                    	else if((yes_no[0]=='n')||(yes_no[0]=='N'))
                                		printf("thank you\n");
                                    	else {
                                        	printf("sorry, wrong input\n");
                                    		goto chc3 ;
					}
                    			break;
                    			case '5':
                        		midpoint();
                 			chc4:      printf("continue? Y/N\n");
                         		scanf("%s", yes_no);
                                	if((yes_no[0]=='y')||(yes_no[0]=='Y')) {
                                    		system("clear");
                                    		goto chc;
					}
                                	else if((yes_no[0]=='n')||(yes_no[0]=='N'))
                                    		printf("thank you\n");
                                	else {
                                    		printf("sorry, wrong input\n");
                                    		goto chc4 ;
					}
                        		break;

                         		default: {
						printf("wrong Input\n");
                                    		printf("\nERR\n");
                               			D1:     printf("CLR?(Y/N)\n");
                                    			scanf("%s", yes_no);
                                    		if((yes_no[0]=='y')||(yes_no[0]=='Y')) {
                                    			system("clear");
                                    			goto chc;
						}
                                    		else if((yes_no[0]=='n')||(yes_no[0]=='N'))
                                      			goto chc;
                                      		else
                                        		goto D1;
                                      	}
                	}

    			return ;
	}

void distance() {
    	char yes_no;
    	double x1,x2,y1,y2;
    	double result;
    	printf("enter x and y co-ordinates of two points in the format\n");
        printf("for first point  (x,y)= \n");
        scanf("%lf%lf", &x1,&y1);
        printf("for second point (x,y)=\n");
        scanf("%lf%lf", &x2,&y2);
        result=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        printf("distance between two points is: %lf\n" ,result);

}
double slope(double x1,double y1,double x2,double y2) {
	double result,result1,result2;
     	if((x1==x2)&&(y1==y2)){
        	printf("two points are same\n");
    		return 0;
     	}
        else if(x2==x1){
		printf("line will be vertical, so slope is undefined\n");
            	return 0;
	}
        else {
            	result=(y2-y1)/(x2-x1);
            	if (result==0){
                	printf("line is horizontal, so slope is 0 \n");
                	return 0;
        	}
        	return result;
	}
}
double intercept(double x1,double y1,double x2, double y2) {
	double result,m;
        m=slope(x1,y1,x2,y2);
        result=(y2-(m*x2));
        return result;
}
void equation() {
        int choice;
        printf("enter desired form of equation:\n");
        printf("press 1--> slope intercept form       2-->point slope form\n");
        scanf("%d", &choice);
        if((choice>2)||(choice<1))
        printf("error\n");
        else {
        	switch(choice) {
                	case 1:
                    	slope_intercept();
                    	break;
                	case 2:
                    	point_slope();
                    	break;
                    	default :
                    	printf("error\n");
            	}
	}
}

void slope_intercept() {
    	double x1,y1,x2,y2,m,b;
        printf("enter x and y co-ordinates of two points in the format\n ");
        printf("for first point  (x,y)= ");
        scanf("%lf%lf", &x1,&y1);
        printf("for second point (x,y)=\n");
        scanf("%lf%lf",&x2,&y2);
        m=slope(x1,y1,x2,y2);
        b=intercept(x1,y1,x2,y2);
        printf("y= %lfx + %lf",m,b);
}
void point_slope() {
    	double x1,x2,y1,y2,result,m;
        printf("enter x and y co-ordinates of two points in the format\n ");
        printf("for first point  (x,y)=\n ");
        scanf("%lf%lf", &x1,&y1);
        printf("for second point (x,y)=\n");
        scanf("%lf%lf",&x2,&y2);
        m=slope(x1,y1,x2,y2);
        printf("y-%lf=%lf(x-%lfx1)\n", y1, m, x1);
}
void midpoint() {
    	double midpoint1,midpoint2,x1,x2,y1,y2;
        printf("enter x and y co-ordinates of two points in the format\n ");
        printf("for first point  (x,y)=\n ");
        scanf("%lf%lf", &x1,&y1);
        printf("for second point (x,y)=\n");
        scanf("%lf%lf",&x2,&y2);
        midpoint1=(x1+x2)/2;
        midpoint2=(y1+y2)/2;
        printf("midpoint is (%lf,%lf)\n", midpoint1,midpoint2);
}


void bestfit() {
    	char choice[1];
    	char yes_no;
 	cnc:   printf("Enter your choice:\n");
        printf("press :\n ");
        printf("1--> linear best fit equation\n");
        scanf("%s", choice);
        if((choice[0]>='2')||(choice[0]<'0')) {
        	printf("wrong input\n");
                printf("want to continue? Y/N \n");
                scanf("%s", &yes_no);
                if((yes_no=='y')||(yes_no=='Y'))
                	goto cnc;
                else if((yes_no=='n')||(yes_no=='N')) {
                	printf("thank you\n");
		}
                else {
                	printf("sorry wrong input\n");
                        goto cnc;
              	}
    	}
        if(choice[0]=='1') {
           	switch (choice[0]) {
                    	case '1':
                        linear_best_fit_equation();
                  	cnc1:      printf("want to continue? Y/N\n");
                        scanf("%s", &yes_no);
                        if((yes_no=='y')||(yes_no=='Y'))
                            	goto cnc;
                        else if((yes_no=='n')||(yes_no=='N')) {
                                printf("thank you\n");
                                system("clear");
                                return ;
                       	}
                        else {
                                printf("sorry wrong input\n");
                                goto cnc1;
                        }
                        break;
                    	default :
                        printf("sorry wrong input\n");
                        goto cnc;
                        system("clear");
                        break;
                }
   	}
    	return ;
}
void linear_best_fit_equation() {
    	int number;
    	double sum_of_x=0,sum_of_y=0,mult=0,sum_of_square=0,
    	slope,intercept,r_for_log,a_for_log,
    	sum_of_square_of_y=0,corelation_coefficient;
    	int i,j,k,p,q,m,l,h;
    	double * new_memory_for_x_values;
    	double *new_memory_for_y_values;
    	double *new_memory_for_log_value;
    	printf("enter total number of data\n");
    	scanf("%d", &number);
    	new_memory_for_x_values=(double *)malloc (sizeof(double)*(number));
    	new_memory_for_y_values=(double *)malloc (sizeof(double)*(number));
    	printf("enter values of x co-ordinate (x1,x2,x3...)\n");
    	for(i=0;i<number;i++) {
        	scanf("%lf", &new_memory_for_x_values[i]);
    	}
    	printf("enter values of y co-ordinate (y1,y2,y3...)\n");
    	for(j=0;j<number;j++) {
       		scanf("%lf", &new_memory_for_y_values[j]);
    	}
    	for(k=0;k<number;k++) {
        	sum_of_x=sum_of_x+new_memory_for_x_values[k];
        	sum_of_y=sum_of_y+new_memory_for_y_values[k];
    	}
   	for(p=0;p<number;p++) {
       		mult=mult+(new_memory_for_x_values[p]*new_memory_for_y_values[p]);
   	}
   	for(q=0;q<number;q++) {
       		sum_of_square=sum_of_square+(new_memory_for_x_values[q]*new_memory_for_x_values[q]);
   	}
    	for(h=0;h<number;h++) {
       		sum_of_square_of_y=sum_of_square_of_y+(new_memory_for_y_values[h]*new_memory_for_y_values[h]);
   	}
	slope=((number*mult)-(sum_of_x*sum_of_y))/((number*sum_of_square)-(sum_of_x*sum_of_x));
	printf("slope is:%lf\n", slope);
	intercept=((sum_of_y-(slope*sum_of_x))/number);
	printf("intercept is:%lf \n",intercept);
	printf("linear regression line is\n y=%lfx+%lf", slope,intercept);
	corelation_coefficient=((number*mult)-(sum_of_x*sum_of_y))/((sqrt((number*sum_of_square)-(sum_of_x*sum_of_x)))*(sqrt((number*sum_of_square_of_y)-(sum_of_y*sum_of_y))));
	printf("co-relation coefficient is : %lf", corelation_coefficient);
	printf("\n\n");
}

void differential() {   
	long double a,b,c,g,f;
    	char choice[1];
 	DF1:printf(" Differential program with form a d2x/dy2 + b dy/dx + cy =0\n\n");
    	printf("ENTER %Lf,%Lf,%Lf\n\n",a,b,c);
    	scanf("%Lf,%Lf,%Lf",&a,&b,&c);

    	if (a!=0) {
        	long double d,e;
        	d=b*b-4*a*c;
        	if (d>=0) {
        		e=sqrt(d);
        		f=(-b+e)/(2*a);
        		g=(-b-e)/(2*a);
        	}
        	else {
            		e=sqrt(-d);
            		f=(-b/2*a);
            		g=e/(2*a);

        	}
        	if(f==g && d>0) {
            		printf("The solution is  y=(c1+c2)exp(%Lfx)\n",f);
            		printf("c1 & c2 are constants to be determined by boundary condition\n");

        	}
        	if(f==g && d<0) {
            		printf("The solution is  y=(c1+c2)exp(%Lf+i %Lfx)\n\n",f,e);
            		printf("c1 & c2 are constants to be determined by boundary condition\n");

        	}
        	else if (d<0) {
            		printf("The solution is  y=c1exp(%Lf+i%Lfx)+c2exp(%Lf-i%Lfx)\n",f,g,f,g);
            		printf("c1 & c2 are constants to be determined by boundary condition\n");

        	}
        	if (d>=0) {
            		printf("The solution is  y=c1exp(%Lfx)+c2exp(%Lfx)\n", f,g);
            		printf("c1 & c2 are constants to be determined by boundary condition\n");
        	}

    	}
    	else {
        	long double s;
        	s=-c/b;
        	if(b!=0) {
			printf("The solution is  y=c1exp(%Lfx)\n",s);
        		printf("Where c1 is constant to be determined by boundary conditions\n");
        	}
        	else {
            		printf("The solution is  y=0\n");
        	}


    	}
	DF2:printf("CONTINUE\n");
    	scanf("%s", choice);
    	if(choice[0]=='Y'||choice[0]=='y') {
		system("clear");
        	goto DF1;
	}
    	else if(choice[0]=='N'||choice[0]=='n') {
		system("clear");
        	return ;
	}

    	else printf("ERR\n");
         	goto DF2;
    	return  ;
}

void geometric() {   
	char choice[1],choose[1];
 	G0:printf("1:AREA-VOLUME\t2:DECIMAL CONVERSION\t3:COORDINATE CONVERSION\n\n");
    	printf("\t4:POLYNOMIAL(UPTO 2 DEGREE)\n\n");
 	G1:scanf("%s", choice);
    	if(choice[0]=='1') {
        	areavolume();
	}
  /* 	else if(choice[0]=='2') {
        	decimal();
	}*/
   	else if(choice[0]=='3') {
		coordinate();
	}
   	else if(choice[0]=='4') {
        	polynomial();
	}
   	else {
		printf("ERR\nENTER CHOICE\n");
        	goto G1;
	}
	G2: printf("CONTINUE WITH GEOMETRIC AND UTILITIES\n");
    	scanf("%s", choose);
    	if(choose[0]=='Y'||choose[0]=='y') {
        	system("clear");
        	goto G0;
	}
    	else if(choose[0]=='N'||choose[0]=='n') {
        	system("clear");
        	return ;
	}
    	else {
        	printf("ERR\n");
        	goto G2;
	}
}

void areavolume() {
   	char choice[1],choose[1];
	A1:printf("1:AREA\t\t2:VOLUME\n\n");
   	scanf("%s", choice);
   	if(choice[0]=='1') {
   		area();
	}
   	if(choice[0]=='2') {
   		volume();
	}
	A2:printf("\nCONTINUE WITH THIS?Y/N\n");
   	scanf("%s", choose);
   	if(choose[0]=='Y'||choose[0]=='y') {
    		system("clear");
    		goto A1;
	}
    	else if(choose[0]=='N'||choose[0]=='n') {
    		return ;
	}
    	else {
        	printf("ERR\n\n");
        	goto A2;
	}
}
void area() {
  	char choice[1];
        printf("press 1 for 2-D objects and press 2 for 3-D objects\n");
        scanf("%s", choice);
    	if(choice[0]=='1')
        	area_for_twodimensional_objects();
    	else if(choice[0]=='2')
        	area_for_threedimensional_objects();
   	else
        	printf("error\n");
         	//if user enter other than option, an error message will be printed.
    	return;
}

void volume() {   //to calculate volume of three dimensional objects.
        char choice[1];
        printf("press 1 for  3-D objects\n");
        scanf("%s", choice);
     	if(choice[0]=='1') {
        	volume_for_threedimensional_objects();
        }
    	else 
		printf("error\n"); //if user give input ,other than the option, it will show an error message.
    	return;

}
void area_for_twodimensional_objects() {   //for calculation of area of two dimensional objects.
        char choice[1];

        printf("enter your choice : press \n ");
        printf("1-square    2-rectangle     3-circle   4-triangle  5-ellipse 6-parallelogram\n");
        scanf("%s", choice);

	switch (choice[0]){
    		case '1':        //if user choose 1 then it will call area_of_square function.
        	area_of_square();
        	break;
    		case '2':     //if user choose 2 then it will call area_of_rectangle function.
        	area_of_rectangle();
        	break;
    		case '3':     //if user choose 3 then it will call area_of_circle function.
        	area_of_circle();
        	break;
    		case '4':     //if user choose 4, then it will call area_of_triangle function.
        	area_of_triangle();
        	break;
    		case '5':     //if user choose 5,then it will call area_of_ellipse function.
        	area_of_ellipse();
        	break;
    		case '6':   //if user choose 6,then it will call area_of_parallelogram function.
        	area_of_parallelogram();
        	break;
    		default:
        	printf("error\n");   //if user give input other the option mentioned before, an error message will be printed
        	break;
	}
    	return;
}

void area_for_threedimensional_objects() { //for calculation of area of three dimensional objects.
    	char choice[1];
        printf("enter your choice : press \n ");
        printf("1-cube   2-cone   3-cuboid  4-cylinder 5-sphere \n");
        switch (choice[0]){
    		case '1':
        	area_of_cube();   //if user choose 1,then it will call area_of_cube function.
        	break;
    		case '2':
        	area_of_cone(); //if user choose 2,then it will call area_of_cone function.
        	break;
    		case '3':
    	    	area_of_cuboid(); //if user choose 3,then it will call area_of_cuboid function.
        	break;
    		case '4':
        	area_of_cylinder(); //if user choose 4,then it will call area_of_cylinder function.
        	break;
    		case '5':
        	area_of_sphere(); //if user choose 5,then it will call area_of_sphere function.
        	break;
        	default :
        	printf("error\n"); //if user give input other than the option given, an error message will be printed.
        	break;
        }
    	return;
}

void area_of_square() {    //for calculation of area of square
   	double length,area;
       	printf("enter length of one side\n");
       	scanf("%lf", &length);
       	area=length*length;
       	printf("area = %lf\n",area);
       	return;
}

void area_of_rectangle() {  //for calculation of area of rectangle.
       	double length,width,area;
       	printf("enter length & width \n");
       	scanf("%lf", &length);
       	scanf("%lf", &width);
       	area=length*width;
       	printf("area =%lf\n", area);
       	return;
}

void area_of_circle() {  // for calculation of area of circle
       	double radius,result;
       	printf("enter radius of circle\n");
       	scanf("%lf", &radius);
       	result=22.7*radius*radius;
 
      	printf("area = %lf\n", result);
       	return;
}

void area_of_triangle() { //for calculation of area of triangle.
       	double base,height,result;
       	printf("enter base and height\n");
       	scanf("%lf%lf", &base,&height);
       	result=.5*base*height;
       	printf("area = %lf\n", result);
       	return;
}

void area_of_ellipse() { // for calculation  of area of ellipse.
       	double semimajoraxis,semiminoraxis,result;
       	printf("enter value of semi-major axis and semi-minor axis\n");
       	scanf("%lf%lf", &semimajoraxis,&semiminoraxis);
       	result=22.7*semimajoraxis*semiminoraxis;
       	printf("area = %lf\n", result);
       	return;
}

void area_of_parallelogram() { //for calculation of area of parallelogram.
       	double base,height,result;
       	printf("enter value of base & height\n");
       	scanf("%lf%lf", &base,&height);
       	result=base*height;
       	printf("area = %lf\n", result);
       	return;
}

void area_of_cube() { //for calculation of area of cube.
       	double edge,result;
       	printf("enter value of edge\n");
       	scanf("%lf", &edge);
       	result=6*edge*edge;
       	printf("area = %lf\n", result);
       	return ;
}	
void area_of_cuboid() { //for calculation of area of cuboid
       	double length,width,height,result;
       	printf("enter value of length,width,height");
       	scanf("%lf%lf%lf", &length,&width,&height);
       	result=(2*length*width)+(2*length*height)+(2*width*height);
       	printf("area = %lf\n", result);
       	return;
}

void area_of_cylinder() { //for calculation of area of cylinder
       	double radius,height,result;
       	printf("enter radius and height of cylinder\n");
       	scanf("%lf%lf",&radius,&height);
       	result=(2*22.7*radius*height)+(2*22.7*radius*radius);
       	printf("area = %lf\n", result);
       	return;
}	

void area_of_sphere() { //for calculation of area of sphere
       	double radius,result;
       	printf("enter radius\n");
       	scanf("%lf", &radius);
       	result=4*22.7*radius*radius;
       	printf("area = %lf\n", result);
       	return;
}

void area_of_cone() { //for calculation of area of cone
       	double radius,height,sum,value,result;
       	printf("enter radius & height of cone\n");
       	scanf("%lf%lf",&radius,&height);
       	sum=(height*height)+(radius*radius);
       	value=sqrt(sum);
       	result= 22.7*radius*(radius+value);
       	printf("area = %lf\n", result);
       	return;
}

void volume_for_threedimensional_objects() { //for calculation of volume of three dimensional objects
        char choice[1];
        printf("enter your choice : press\n  ");
        printf("1-cube   2-cone   3-cuboid  4-cylinder 5-sphere\n ");
        scanf("%s", choice);
    	switch(choice[0]) {
        	case '1': //if user choose 1,then it will call cube function.
           	cube();
           	break;
        	case '2': //if user choose 2,then it will call cone function.
            	cone();
            	break;
        	case '3':  //if user choose 3,then it will call cuboid function
            	cuboid();
            	break;
        	case '4': //if user chose 4,then it will call cylinder function.
            	cylinder();
            	break;
        	case '5': //if user choose 5,then it will call sphere function.
            	sphere();
            	break;
        	default: //if user give input, other than the option given ,then an error message will be printed.
            	printf("error\n");
            	break;
    	}
    	return ;
}

void cuboid() {  //function to calculate volume of cuboid
         double length,width,height,result;
         printf("enter length , width, height of cuboid\n");
         scanf("%lf%lf%lf", &length,&width,&height);
         result= length*width*height;
         printf("volume=%lf\n ",result);
         return;
}

void cube() {   //function to calculate volume of cube.
         double side,result;
         printf("enter length of side\n");
         scanf("%lf", &side);
         result=side*side*side;
         printf("volume=%lf\n ",result);
         return;
}

void cylinder() { //function to calculate volume of cylinder
         double radius, height,result;
         printf("enter radius, height of cylinder\n ");
         scanf("%lf%lf", &radius,&height);
         result=22.7*radius*radius*height;
         printf("volume=%lf\n ",result);
         return;
}

void cone() { //function to calculate volume of cone
         double radius,height,result;
         printf("enter radius,height of cone\n");
         scanf("%lf%lf", &radius,&height);
         result=22.7*radius*radius*height/3;
         printf("volume=%lf\n ",result);
         return;
}

void sphere() { //function to calculate volume of sphere
         double radius,result;
         printf("enter radius of sphere\n");
         scanf("%lf", &radius);
         result=4/3*22.7*radius*radius*radius;
         printf("volume=%lf\n ",result);
         return;
}


void coordinate() {   
	char choice[1];
    	Coord_conver();
 	C1:printf("CONTINUE WITH COORDINATE CONVERSION\n");
    	scanf("%s", choice);
    	if(choice[0]=='Y'||choice[0]=='y') { 
		system("clear");
        	goto C1;
	}
    	else if(choice[0]=='N'||choice[0]=='n') {
        	system("clear");
        	return;
	}
    	else {
		printf("ERR\n");

          	goto C1;
	}
}

void Coord_conver() {
   	double x,y,z,p,q,s,r,O,w;
	char choice[1],choice2[1],anglechoice[1],repeat[1];
    	do{
    		system("clear");
    		printf("ENTER\n\n");
    		printf("1:CARTESIAN <-> SPHERICAL\t ");
    		printf("2:CARTESIAN <-> CYLINDRICAL\n\n");
    		printf("3:SPHERICAL <-> CARTESIAN\t");
    		printf("4:SPHERICAL <-> CYLINDRICAL\n\n");
    		printf("5:CARTESIAN <-> POLAR\n");

		L0: scanf("%s", choice);

    		switch(choice[0]) {
    			case '1': L1: printf("1:CARTESIAN -> SPHERICAL\n");
            		printf("2:CARTESIAN <- SPHERICAL\n");
            		scanf("%s", choice2);


            		if(choice2[0]=='1') {
            			printf("\nENTER x,y,z\n");
            			scanf("%lf%lf%lf", &x,&y,&z);
            			p=pow(x,3)+pow(y,2)+pow(z,2);
           	 		p=sqrt(p);
            			q=acos(z/p);
            			s=atan(y/x);
            			printf("ENTER COORDINATES\n %lf\n%lf\n%lf\n" ,p,q,s);
            			printf("\nENTER COORDINATES\n %lf %lf %lf",p ,q*180/3.14 ,s*180/3.14);
			}
            		else if(choice2[0]=='2') {   
				printf("\n1:HAVE ANGLES IN DEGREE\nANY KEY FOR RADIAN\n");
                		scanf("%s", anglechoice);
                		printf("ENTER p,q,s\n");
                		scanf("%lf%lf%lf", &p,&q,&s);
                		if(anglechoice[0]=='1') {
                    			q=3.14/180*q;
                    			s=3.14/180*s;
                		}
                		x=p*sin(q)*cos(s);
                		y=p*sin(q)*sin(s);
                		z=r*cos(q);
                		printf("\nRESULT:%lf\n%lf\n%lf\n " ,x,y,z);
            		}
            		else { 
				printf("ERR\n");
                 		goto L1;
                	}
                	printf("\nCONTINUE?PRESS 1 ELSE SKIP \n");
                	scanf("%s", repeat);
                	if(repeat[0]=='1')
                    		goto L1;
                	break;

    			case '2':L2:printf("1:CARTESIAN -> CYLINDRICAL\n");
              		printf("2CARTESIAN <- CYLINDRICAL\n");
              		scanf("%s", choice2);
              		if(choice2[0]=='1') {
                  		printf("ENTER x,y,z\n");
                  		scanf("%lf%lf%lf", &x,&y,&z);

               			r=pow(x,2)+pow(y,2);
               			r=sqrt(r);
               			O=atan(y/x);
               			w=z;
              			printf("\nRESULT IN DEGREE\n %lf,%lf,%lf", r,O,w);
              			printf("\nRESULT IN RADIAN\n %lf %lf %lf\n",r,O*180/3.14,w);
              		}
              		else if(choice2[0]=='2') {
              			printf("\n1:HAVE ANGLES IN DEGREE\nANY KEY FOR RADIAN\n");
                		scanf("%s", anglechoice);
                  		printf("enter r,O,w\n");
                  		scanf("%lf%lf%lf", &r,&O,&w);
                  		if(anglechoice[0]=='1') {
                      			O=O*3.14/180;
                  		}
                  		x=r*cos(O);
                  		y=r*sin(O);
                  		z=w;
                 		printf("RESULT:%lf\n%lf\n%lf \n",x,y,z);
              		}
                 	else {
                       		printf("ERR\n");
                       		goto L2;
                      	}
                      	printf("\nCONTINUE?PRESS 1 ELSE ANY KEY SKIP\n ");
                	scanf("%s",repeat);
                	if(repeat[0]=='1')
                    	goto L2;
                	break;
			case '3':    L3:printf("1:SPHERICAL -> CARTESIAN\n");
              		printf("2:SPHERICAL <- CARTESIAN\n");
              		scanf("%s", choice2);
              		if(choice2[0]=='1') {
              		   	printf("\n1:HAVE ANGLES IN DEGREE\nANY KEY FOR RADIAN\n");
              			scanf("%s", anglechoice);
              			printf("ENTER p,q,s\n");
                  		x=p*sin(s*3.14/180)*cos(q*3.14/180);
                  		y=p*sin(s)*sin(q*3.14/180);
                  		z=p*cos(s);
                  		printf("\n1:HAVE ANGLES IN DEGREE\nANY KEY FOR RADIAN\n");
              		}

			case '4':    L4:printf("1:SPHERICAL -> CYLINDRICAL\n");
              		printf("2:SPHERICAL <- CYLINDRICAL\n");
              		scanf("%s", choice2);
              		if(choice2[0]=='1') {
                		printf("\n1:HAVE ANGLES IN DEGREE\nANY KEY FOR RADIAN\n");
                		scanf("%s", anglechoice);
                		printf("ENTER p,q,s\n");
                		scanf("%lf%lf%lf",&p,&q,&s);
                 		if(anglechoice[0]=='1') {
                					
                    			q=3.14/180*q;
                    			s=3.14/180*s;
                		}
                		r=p*sin(q);
                		O=s;
                		w=p*cos(q);

            			printf("\nRESULT IN RADIAN\n %lf\n %lf\n %lf\n",r,O,w);
            			printf("\nRESULT IN DEGREE\n %lf %lf %lf\n",r,O*180/3.14,w);
               		}
            		else if(choice2[0]=='2') {
            			printf("\n1:HAVE ANGLES IN DEGREE\nANY KEY FOR RADIAN\n");
                		scanf("%s",anglechoice);
                  		printf("ENTER r,O,w\n");
                  		scanf("%lf%lf%lf", &r,&O,&w);
                  		if(anglechoice[0]=='1') {
                      			O=O*3.14/180;
                  		}
                 		p=pow(r,2)+pow(w,2);
                 		p=sqrt(p);
                 		s=O;
                 		q=atan(r/w);
                 		printf("\nRESULT IN RADIAN\n %lf\n %lf\n %lf\n",p,q,s);
            			printf("\nRESULT IN DEGREE\n %lf %lf %lf\n",p,q*180/3.14,s*180/3.14);
            		}
            		else {
                		printf("wrong choice\n");
                		goto L4;
			}
            		printf("\nCONTINUE?PRESS 1 ELSE ANY KEY SKIP \n");
                	scanf("%s",repeat);
                	if(repeat[0]=='1')
                    		goto L4;
                    	break;
			case '5': L5:printf("1:CARTESIAN -> POLAR\n");
        		printf("2:CARTESIAN <- POLAR\n");
        		scanf("%s", choice2);
                  	printf(" ENTER x,y\n");
        		if(choice2[0]=='1') {
                  		scanf("%lf%lf",&x,&y);

               			r=pow(x,2)+pow(y,2);
               			r=sqrt(r);
               			O=atan(y/x);

                 		printf("RESULT IN RADIAN\n%lf\n %lf\n",r,O);
            			printf("\nRESULT IN DEGREE\n %lf %lf",r,O*180/3.14);
              		}
              		else if(choice2[0]=='2') {
              			printf("\n1:HAVE ANGLES IN DEGREE\nANY KEY FOR RADIAN\n");
                		scanf("%s",anglechoice);
                  		printf("ENTER r,O\n");
                  		scanf("%lf%lf",&r,&O);
                  		if(anglechoice[0]=='1') {
                      			O=O*3.14/180;
                  		}
                  		x=r*cos(O);
                  		y=r*sin(O);
                 		printf("RESULT \n%lf\n %lf\n",x,y);
              		}
                 	else {
                       		printf("Wrong Choice\n");
                       		goto L5;
                      	}
                	printf("\nCONTINUE?PRESS 1 ELSE ANY KEY SKIP \n");
                	scanf("%s", repeat);
                	if(repeat[0]=='1')
                    		goto L5;
                      	break;

 			default: {printf("ERR\n\nENTER");
             		goto L0;
		}


    	}

}while(choice[0]);
	return;
}

void polynomial() {
	double a, b, c;
	double x[2];
	char choice[1];
	      //store results of x

	P1:	printf("EQUATION FORMAT- aX^2+bX+c=0\n");
	printf("ENTER COFFICIENTS\n");

	printf("a: ");
	scanf("%lf", &a);

	printf("b: ");
	scanf("%lf", &b);

	printf("c: ");
	scanf("%lf", &c);

	if (quadratic(a, b ,c, x)) {
		printf("\nROOTS ARE:\n");
		printf("x[1] = x[0] \n");
		printf("x[2] = x[1] \n");
	}
	P2:	printf("\nCONTINUE WITH POLYNOMIAL\n");
	scanf("%s", choice);
    	if(choice[0]=='Y'||choice[0]=='y') {
		system("clear");
        	goto P1;
	}
    	else if(choice[0]=='N'||choice[0]=='n') {
        	system("clear");
        	return;
	}
    	else {
		printf("ERR\n");

          	goto P2;
	}


	return ;
}

int quadratic(double a, double b, double c, double Roots[]) {   
	char i = 0;
    	double numerator,denominator;
	if( ((b*b) - (4*a*c)) < 0 ) {
		printf("\nNO REAL ROOTS\n");
		numerator=sqrt((4*a*c)-(b*b));
		denominator=2*a;
		printf("ROOTS : \n(0-b)/denominator %c", i);
		printf( "numerator/denominator\n");
		printf("(0-b)/denominator %c", i);
		printf(" numerator/denominator\n");
		return 0;
	}
	if( (b*b) - (4*a*c) > 0 ) {
          	printf("REAL DISTINCT ROOTS\n");
        }
	if( (b*b) - (4*a*c)== 0 ) {
       		printf("EQUAL ROOTS\n");
    	}
	numerator = sqrt( (b*b) - (4*a*c) );
	denominator = 2 *a;

	if (denominator == 0) {
		printf("ERR\n");
		return 0;
	}

	Roots[0] = (0-b+ numerator)/denominator;
	Roots[1] = (0-b-numerator)/denominator;

	return 1;
}
