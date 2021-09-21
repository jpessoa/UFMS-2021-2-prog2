void imprimeSerie (int a, int b, int k);
{
    if (a <= b)
    {
        printf("%d", a);
        imprimeSerie(a + k, b, k);
    }
}

int main () 
{

}


