int Facto(int ValA)
{
	int ContFac;
	float ValC=1;
	for (ContFac=1;ContFac<=ValA;ContFac++)
	{
		ValC*=ContFac;
	}
	cout<<"C "<<ValC<<endl;
	return ValC;
}