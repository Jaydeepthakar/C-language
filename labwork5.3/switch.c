#include <stdio.h>

int main()
{
    int ch1, ch2;

    printf("Press 1  English \nPress 2  Hindi\nPress 3  Gujarati\n");
printf("enter your choice");
scanf("%d",&ch1);

switch(ch1){
    case 1: printf("Press 1 for Internet Recharge \nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\n");
                    printf("enter your choice");
                    scanf("%d",&ch2);
                            switch(ch2){
                                    case 1:printf("You have successfully done a Internet Recharge.");
                                            break;
                                    case 2:printf("You have successfully done a Top-up Recharge.");
                                            break;
                                    case 3:printf("You have successfully done a Special Recharge.");
                                            break;
                                            default:printf("invalid choice....!!!");
}
    break;
    
    
    case 2: printf("Internet Recharge ke liye 1 dabaiye\nTop-up Recharge ke liye 2 dabaiye\nSpecial Recharge ke liye 3 dabaiye\n");
                    printf("enter your choice");
                    scanf("%d",&ch2);
                            switch(ch2){
                                    case 1:printf("Aapne safaltapurvak Internet Recharge kar liya he..");
                                            break;
                                    case 2:printf("Aapne safaltapurvak Top-up Recharge kar liya he.");
                                            break;
                                    case 3:printf("Aapne safaltapurvak Special Recharge kar liya he.");
                                            break;
                                            default:printf("invalid choice....!!!");
}
    break;
    
    
        case 3: printf("Internet Recharge mate 1 dabavo\nTop-up Recharge mate 2 dabavo\nSpecial Recharge mate 3 dabavo\n");
                    printf("enter your choice");
                    scanf("%d",&ch2);
                            switch(ch2){
                                    case 1: printf("Tame safaltapurvak Internet Recharge karyu chhe");
                                            break;
                                    case 2: printf("Tame safaltapurvak Top-up Recharge karyu chhe.");
                                            break;
                                    case 3: printf("Tame safaltapurvak Special Recharge karyu chhe..");
                                            break;
                                            default:printf("invalid choice....!!!");
}
    break;
    
    
    
}

    return 0;
}