# # print pyramid OF *
p=10;
 
for((m=1; m<=p; m++))
do
    # This loop print spaces
    # required
    for((a=m; a<=p; a++))
    do
      echo -ne " ";
    done
    # This loop print the left
    # side of the pyramid
    for((n=1; n<=m; n++))
    do
      echo -ne "#";
    done
    
    
    OUTPUT==>
          #
         ###
        #####
       #######
      #########
     ###########
    #############
   ###############
  #################
 ###################


.
