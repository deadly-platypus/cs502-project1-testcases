int add(int i, int j){
  return i+j;
}

void main(){
  int i,j,k;
  i = 10;
  while(i<20){
    j = add(i,1);
    i += 1;
	if (j > 10) break;
  }
  if(i<20) j = i + 10;
  if (i< (j+10)*(i-10) )
    k = add(i,j);
  printf("%d %d %d\n", i, j, k);
}
