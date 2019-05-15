bool Batalla(Personaje *this, Enemigo *that)
{
	size_t i=1;
	if(i%2==0)
	{
		//Turno ENEMIGO
	}
	else
	{
		//Turno JUGADOR
		//MOSTRAR MENÚ  DE ATAQUES
		//JUGADOR ELIGE ATAQUE
		
		size_t daño=DLL_BuscarAtaque(Personaje *this, Ataque Seleccionado)->daño+rnd(DLL_BuscarAtaque(Personaje *this,Ataque Seleccionado)->dado extra);
		that->vida=(that->vida)-daño;
		i++;
	}
	if(this->vida==0)
	{
		return false;
	}
	if(that->vida==0)
	{
		return true;
	}
}
