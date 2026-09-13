float Potencia(float N1, int N2)
{
	int Cont, Lim;
	float Pot=1, RtaP;
	
	if (N2<0)
	{
		Lim=N2*-1;
	}
	else
	{
		Lim=N2;
	}
	
	for(Cont=1;Cont<=Lim;Cont++)
	{
		Pot*=N1;
	}
	if (N2<0)
	{
		RtaP=1/Pot;
	}
	else
	{
		RtaP=Pot;
	}
	return RtaP;
}