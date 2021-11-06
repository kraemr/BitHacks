

int r;// result
int v; // value to negate
int Negate_Num(int v)
{
r = (v ^ -1 ? -v : v);
return r;
}