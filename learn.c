// %d -  this is format specifier this telling format to interpreter 
//telling consider this as a int and return in this format

/* hey 
%d - for integer
%c - for char
%f - for float
%s - for string
%p  - for pointer
*/


//intialisation of the varible is neede then Declarations
//case sensitive small letter only 

// + - * /--quotiont    %(mod) -- remainder these need to operands so binary oprations named here

// int - 4 byte , short int - 2 byte double - 8 byte

//we can explicitly change the  type c = (float)a / b - temperary conversion here

/* x++ post increment-  after using add +1 in memory ++x pre increment  = x= x+1  increment  it means*/
/*arithmetic operators and  Relatonal op - <><=>= == !=

logical operators-- && - and   || - OR    ! - not  Truth table needed
 (5>6) --false 0   && (5-3) True - 1 sp   0 and 1  = 0  or false
for this output is TRUE  1   OR    FALSE   0


 Bitwise operators - & - and  12 & 2 -  convert it to binary first then perform and betweent he bits of the things
| - or  - after performing the binary  op they conver bit to decimal atlast and give us result
  3 & 2  0011 & 0010   ---  0010 = 2 answer is 2 at last 
^ - XOR
` - NOt
>> shift right bit
<< -shift left bit   syntax    var <<  no of bit positions 

nonzero number  =  true
zero  = false


if (espr){}
else if (expre){}
else {}

?  - this is conditonal operator
msx  this stores a state of b  = a>b - expre   ?  if statement here (a) : else staement here (b)

Switch is a multidirections control statement like 

switch (expre)   +  -
{
   if express mathces here
case  para = expres ::
case '-':
case '+'"
default:
not found here


Array  =  fixed size   only same datatype used here
size = 10 
mark[size] not accept this form
mark[5] = {0,1,2,3,4} 5 not include her 
# defice SIZE  -- only cap 20  symbolic constant   fixed size 

             rows  = 4   4 1d array whiich contain x column on it  
2d array   x[rows][column] = {{} {}}

3d array   x[no of 2d array] * [rows] [column]

int a [2] [3] [4]  here two 2d array which contain 3 cross 4 values on it

a = { {} {} }  { {} {}}   2 two dimension arrays here
 

loops here

while 
do while
for loop


while (cond)   if conditon true means fo inside false mean not go in

{
   this is entry control loop
}



do    ---first does this 1 time and check the while conditon there
{
   statement
}while (condi) ;


for loop
      start     stop condi     incre
for(intialize , condition , increment)
{
staements here 

}

loop contol statement   -  break - go out of the loop   
continue - do nothing just continue next loope   
goto -explicit go 

goto label;
directly  go there
 ---->>>> label:  -- some kind of identifier to  go there 
goto funciton_name also  --- explicit we going to that 

like many nested conditon there  one time to go to outof the  many external loop

use the varibale as a flags on it 


1st for loop  - rows
2nd for loop  - column


output format
return type  fun_name  (para 1- int x this x also need ,  not need  always choice ,ont int ok, para 2 - int y ){

         return z ; z - save thw value on eax register
}
 
calling a fucn   ==  function-name (a , b);

declare funcion before the main()

zero arugument means void fun_name  void is the return type
if no return type is mention the --int is default type  it consider

if declare varibale  out of main means it is  gloabl thing 

static int a = 10  is like global varible  value will retain after function calll
new call will get old value of modified value


pointers   int* p  means  =  it stores address on the varibale right   

&a  =  represent memory address of a   see down the program
   int* p  = &a   

so only %p can format a memory address
if you use %d it intena a integer format out of case


*p1    p2 point at p1   
**P2 -- this get value of the point p1 

pointer Arithmetic values

point = address
pointer + 1 means  == adress + 4bytes if pointer is int type
or address + 1 byte if pointer is char pointer
  there     p = p+1  or p = p-4   p1 < p2  compare 2 pointer sub ADd only possible


call by reference means  ==  giving pointer as argument to funciotn

void fun_name(int *P) --  which only accept the address pointer variable there
   (*p) ++ ;  -- here we increase the value of the a there on it



fun_name(&a)  this is the parameter there
it can affect the local vaiblae directly with out being global varibale there


call by value means  = giving the values on the argument there



Function need to return more than one value from it means use 

Use   ----Array   ---structure    ---pointers

we change value on main memory  using other function also by pointers
many pointer means a fucntion able to rerun many diffrence value to previous funciton thers


passing array to function  parameter


calling time   function_name (arrayname)  is enoghth

int arraysum(  int a[])  this parameter  tells we must pass a array only

int * function name means  
return a 
--------------int *  represnt a address there
return type is  address there


void pointer  --- this is point any data type 

but suffer when getting the value on the address it dont know it is int of other

temprary change of type for void pointer is needed there

void * p

*p -- means not know  it point a int of soome thing

(int *) P --- this void pointer now pointing a 4 byte range there

after type conversion only we use in pointer arithmetic there

text segment -- instruction stores here
data segment -- global data stores here
heap -  dynamic meory found here
stack - here contain the  stack frame for funciton and varibales paramets return address ponter address valuers for other function needed for their wor






Dynamic Memory Allocation    <stdlib.h> all founbd inside this

Heap segment
                        5 * sizeof(int)   defualt allcate there

  ptr === (int*) malloc(no of byter) --- it allocate 20 bytes of space and 
  return the starting address pointer there
return a void pointer  from  it 
so we must type case malloc to int* 



calloc               5,sizeof(int)
 ptr === (int*) calloc(no of byter)

calloc(no of blocks , size of each block)
calloc(5 block , 4-- bytes)  each block must contain 4 bytes there

calloc allocated memory is intialized to the zero  itself

Realloc

incr or dect memory allocated by malloc or calloc

realloc (ptr , newsize)

 ptr === (int*) realloc(ptr, no of byter need to incr or decr --newsize)



Free   === means free the memory

free(ptr)  --- tells that free the allocated location  from that address



FUnction pointer
-- every funtion on memroy has a address right so we save address of a 
funciton on a point and we use that funciton by pointer

if you print just functino name we get a address in c  function name also just a address

int add (int, int) --> fun declrattion
int (*pointer_name) - this bracket must (int, int) -->: here funtion pointer declaration

pointername = function   // name this address stores on pointer name

call by pointer
(*fp) --- must on declaration

c = (*fp(ar2,ar2)) -- we are calling a function using a pointer that all same


main address stores on  function pointer

fun-call
 c= add(a,b)
 c = (*pointer_name) (a,b)

strings =  set of characteres thers

char array  we need to declare to create string there

char string_name = {'d','f','g''/0}

2 type of declarations

char str[] = "chennai" -- in double quiottes it automatci insert the null character there or {'c', 'h'....'\0'-  this is null character}


scanf or
gets(str)  --- for scan the strings 
puts(str -- directly string name )  --print the strning  

<string.h>  --- header file for string manuoulation

printf("%s",strlen(string name)); -length
strcmp - compare 2 string
strrev - reverse
strcpy - copy  a string to another
strcat - concat 2 string


PRIMARY DATA TYPE

int
char
float
double

SECONDARY DATA TYPE

Array
pointer
enum
struct


ENUM
 - user defined data type

 enum name {sun,mom,tue,wewd,thu,fru,sat}; -- we acces this values by index

 enum nameof data type obj_name for using it


STRUCTURE   --- like a CLASS 

collection of many different datatypes together

bycreating a object  seperate structure is created for each objet 


struct tag_name {
   datatype 1
   data type 2

}
 we declear a  object for these struct
------------------------------

struct name obj1, obj2;  object declarations  time memory allocate for that structure
to provide  data to that 

obj1 = {datatype1-value, value2}


obj1.datatype 1  -- to acces it  like object access the variables on it 

scaf(%d %d %d , &obj1.name ,obj1.d2, obj1.d3)  lke this we send input

struct student{
   char name[10];
   int rollno;
   int mark;

} 

struct student s1;

s1 = {name , roolno , mark}  -- it go and assign  data on memory there

struct student s[50] =  this crreate a array of obj
s[1]
s[2]  --- each create a individual structure to all part of uit
s[3]


POINTER TO STRUCTURE



s1 == address stores on the pointer 

p = &s1    this point the base address of that structure first object
s1.mark


how to declare pointer to an object

struct samename *p

after creating struct pointer only we assiggn   p = &s1

p.mark = gives address 
(*p).mark     to access it  value   // for pointer 
P -> mark  -> only pointer can acces this way object by dot   this also same thing like access  it 




structure and function 

pass as argument
1 structure member s1.name as argument  to a fucntion

func(s1.name,s1.no)
      ||||||||
declar fun(char name[], int no)



2 structure var pass the + entire structure  (s1) as a arugument

functionname (s1)  ---passing structure  -- s1 only  valid for main()   -- so declare as global

declar funnaem (stuct student s-- this is new object for access inside  the s1-- global fucntion)


3 pointer passing to a fucniton

struct student *pointer -- cratieng a pointer

pointer = &s1
funname(pointer) --- passing the pointer   of funcitoname (&S1 - it pas the address directly)

declare fucntioname (struct student * P)- inside fun local argument is p)  receiving the pointer 
                              this is a king of passing pointer to a function

==================================
return from a funtion

1 return a stucture  from a function

   declare this is return type struct nameofstrcutre functionname (para1,para2)

   inside function  create a new object from this structure
   struct student s
   return s 

   here also we declearing this s as same structure student and s1  also same sturcture
   so return from function assign values of s to s1 and the return struc function stack frame
   get deleted

   but it you no already create a s1 on main means no obj already located no assignment hapen

   if you has only stuct student *pointer means no obj  is created here
 only pointer  things ... 



2 pointer to strcutre

   struct student  *pointer; - we declare a pointer 
   receiving the object created on the fun  p = &s --- but it will not work 
   we retunr the pointer  from a function

   declare this is return type struct nameofstrcutre *  functionname (para1,para2)
   
   
   create struct student s  this object is local made this as global or static - stores on data segment  
   rerurn &s
return type is pointer

return &s  =  contain address of s  object 

but   now work as we retunr the address of this object to the pointer ti tried to acess
but no value is there because after the return of the functon the fucntion got finished

so no values stack frame is fully empy on memory 

during strucutre declaration we declare a pointer on them 

struct sudent * p;
self referentian structure



union  like struct  == main difference storing of memnbers on memory

which member need large space only it alloate that space onmem

only one  member can be used at a time on union











function_name(p)  -- here we supply poinsty as argument

funciton _name(struct student* p) ---we need to declare function as this 
      p ->
      p ->

typedef struct student stu == this typedef   means  we dont need to tell "struct student "every time to create object
just stu s1 == will create a new object or object structure

typedef =means  giving a name to a type

we pass members of structure  as  a argument to functions

function_name(s1.name , s1.roolno)
 ---its for calling

 fun-decl for struct
fucntion_name(char a[], int rollno) -- 2 parameter  we provide to supple


here we pass  a structure there

funtion_name (s1):   in calling

funciton_name(struct student s) --this parameter create a new  receiving structure
in fun declaration

but we need to declare struct on out of the main as a global structure






HOw to return a strcutre froma function


void create_strucut(1,2,3)  --para

here we need to create a structure vaibele

struct student s;  -- we need to fix this as a static thing
create a object of  old structure student as s and
supple the argument to the object values to struct

s.mark = para3
return s;  -- we return the struct 

so retunrn tyope  || must struct student funciton_name(para1,para2)


strcpy(dest str, source str)




for file HANDLING  --- disk to ram and send data from ram to disk by file object

already they define //typedef struct  struct_name   FILE

in this we create a file point which point the FILE == object 

FILE *fp -- this is file pointer   like create a pointer fora struct


this pointer has default buffer after fully completed the buffer we can send this to disk

we create a point to utilize it 


just pointer fp  = fopen(/path /filename , mode of open - r  -w)

this f open function return a pointer for that specific file we acces via fp
fp = null  erors file not found


fclose(fp) -- to colse the oopened file

-w write mode create a new file if file no found
-a append to addition value to file
-wr
'w+'   write + read
r+   read + wtrite

for handle binary

wb - binary
rb - binary  read the binary file


on c we directly save a file has binary and text but binary is fast






macro definition  #define SIZE 5 means fixed there but on global variable value can be changable





*/


/*#include <stdio.h>
int main() {
   int mark[3] = {1,2,3};
   int* poi = &mark[0];
   int* poi1 = &mark[1];
   printf("value of 0 %p" , poi);
   printf("\nvalue of 1 %p" , poi1);
 
    return 0;

} here you see the pointer able to store the address value on it
*/ 

/*#include <stdio.h>

int main(){

  int a = 9;
  int *p = &a;
  printf("%d", a); //        value of a
  printf("%p", &a); //    adddress of a 
  printf("\n%p" , p); //    value of  p
  printf("\n%p" , &p); //  address of p
  printf("\n%d" , *p);  //  value of poiting address a

}*/

#include <stdio.h>
int main (){


   /*int *p = &a;
   printf("\n%p", &a);
   printf("\n%p", p); // base address of the array
   printf("\n%d", *p+1); //this point the 2nd element of the array
   printf("\n%p", p+0);  // this point now hold the  addres of second element
   // +1 means adding 4 bytes there */
   printf("%p" , main);  // it give address of the main 
   // here only main itself gives us the address because call -----addr

   struct student{

      char name [10];
      int no;
   
   };   
   typedef struct student stu;
   struct student s1 ;
   stu s2;
   struct student *p;
   s2 = s1;//  declare before assignment not work there crt same thing as python
   p = &s1;
   scanf("%s",&s1.name );
   s2 = s1; /// after declea  value only it will work object transfer
   printf(p-> name);
   printf("%s" , s2.name);
   printf("%s" , s1.name);




}