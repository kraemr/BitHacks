//Bit Scan Forwards
int BSF(unsigned int num)
{
if(num == 0) return-1;
num = num & -num;
int count = 0; 
if((num & 0xffff0000) !=0) count +=16;
if((num & 0xff00ff00) !=0) count +=8;
if((num & 0xf0f0f0f0) !=0) count +=4;
if((num & 0xcccccccc) !=0) count +=2;
if((num & 0xaaaaaaaa) !=0) count +=1;
return count;
}
