def strans(x,y,a,b,c,k):
	#convert string s to string w;
	#cost of inserting any character at any position: a;
	#cost of removing any character from s: b;
	#cost of replacing a character: c;
	#time given: k;
	x=list(x);
	y=list(y);
	print dp(x,y,0,0);

def dp(s,w,i,j):
	if(s=="" or w==""):
		return 0;

	x1=s[i:];
	y1=w[j:];
	x2=s[i:];
	y2=w[j:];
	x3=s[i:];
	y3=w[j:];
	cost=0;
#	for i in xrange(len(x1)):
#		for j in xrange(len(y1)):
	print i,j;	
	if(x1=="" or y1==""):
		return 0;
	
	x1[i]=y1[j];
	x2.insert(i,y2[j]);
	del x3[i];

	cost=min( (dp(x1,y1,i+1,j+1)+c) , (dp(x2,y2,i,j+1)+a) , (dp(x3,y3,i+1,j)+b));
	return cost;
x=raw_input();
y=raw_input();
a=raw_input().split();
a=map(int,a);
k=a[2];
c=a[1];
b=a[0];
a=a[0];
strans(x,y,a,b,c,k);