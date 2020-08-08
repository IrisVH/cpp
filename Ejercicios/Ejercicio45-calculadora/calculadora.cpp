int sumar(int a,int b)
{
 return a+b;
}

int restar(int a,__INT64_TYPE__ b)
{
    return a-b;
}

int calcular(int a,int b,char operador)
{
    if (operador=='+'){
        return sumar(a,b);
    }
    if (operador=='-'){
        return restar(a,b);
    }

    throw "operador no valido";
}