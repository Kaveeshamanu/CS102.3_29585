int main()
{
 int num,f;
 //1st & 2nd term
 int f1 = 0 ,f2 = 1;
 //3rd term
 int fn = f1 + f2;
 //user to allows the input as term
 printf("Enter the Term:");
 scanf("%d" ,&f);
 //print 1st and 2nd terms
 printf("Fibonacci Sequence: %d , %d ,",f1,f2);
 //nth power 3rd term
 for(num = 3;num <= f;++num){
 printf("%d ," ,fn);
 f1 = f2;
 f2 = fn;
 fn = f1 + f2;
 }
}

