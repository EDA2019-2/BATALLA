bool Batalla(Personaje *this, Enemigo *that)
{
	size_t i=1;
	if(i%2==0)
	{
		//Turno ENEMIGO
		//SIN MENU Elige un numero al azar de 1 a 3 y elige un ataque entre los ataques que conoce el enemigo
		//return char Ataque Seleccionado
		//Los daños de ataques enemigos son fijos y no tienen rnd para extender daño
		
		size_t daño=DLL_BuscarAtaque(that, Ataque Seleccionado)->daño;
		this->vida=(this->vida)-daño;
		i++;
	}
	else
	{
		//Turno JUGADOR
		//MOSTRAR MENÚ  DE ATAQUES
		//JUGADOR ELIGE ATAQUE return char Ataque Seleccionado
		if(DLL_BuscarAtaque(this,Ataque Seleccionado)->Habilidad=='Destreza')
		{
			size_t tiro de dado=(rnd(101)*this->Destreza;
		}
		else if(DLL_BuscarAtaque(this,Ataque Seleccionado)->Habilidad=='Fuerza')
		{
			size_t tiro de dado=(rnd(101)*this->Fuerza;
		}
		else if(DLL_BuscarAtaque(this,Ataque Seleccionado)->Habilidad=='Inteligencia')
		{
			size_t tiro de dado=(rnd(101)*this->Inteligencia;
		}
		if(tiro de dado<that->destreza)
		{
			i++;
			break;
		}
		size_t daño=DLL_BuscarAtaque(this, Ataque Seleccionado)->daño+rnd((DLL_BuscarAtaque(Personaje *this,Ataque Seleccionado)->dado extra)+1);
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
