![C](https://user-images.githubusercontent.com/63348263/97858570-58752600-1d25-11eb-8b79-fedea76f129f.png)


# C Programming

# Compile and run on : https://www.onlinegdb.com/
# Loop
    1)For            -Typically, we Use when we know how much iteration we want-
          for(initilization expr; condition expr; update){
                  ------------------//body
                  }
    2)While Loop     -Typically, we use when we don't know how much iteration we want--
                while(condition){
                         --------
                         --------  }
    3) Do-While Loop
                do{
                      --------    Body executed at least Once.          
                      ---------   Exit controlled loop 
                    }while(condition);
# Function
    1 )User Defined Function- Created by Users
    2)Library Function     - printf(),scanf(),sqrt();
    Return and argument is not mandatory
    
    int f(int a){                                    | f(x);
    ---------   //here a is formal or dummy argument |  // here x is actual Parameter
    ----------                                       |
    }
 
    -- Function in C/C++ return a single value . But we are able to return Multiple value by using *Pointers*,structure,arrays.
 
     #Uses
    -  Abstraction
    -  Reusablity
    3) Variadic funcion -Functions which take a variable number of arguments. Must add _<stdarg.h>_
            va_list: To initialize the arguments pointer.
            va_start :Point to the first element.
            va_arg  : Point to first and then move to next arguments on evrery function call.
            va_end   : End using variable argument list
