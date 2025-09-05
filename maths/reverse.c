int reverse(int num){
	int digit,revs=0;
	while(num>0){
		digit=num%10;
		revs=(revs*10)+digit;
		num=num/10;}
	return revs;
}

