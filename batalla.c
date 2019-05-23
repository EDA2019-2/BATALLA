bool Batalla(Personaje *this, Enemigo *that)
{
	size_t i=1;
	if(i%2==0)
	{
		//Turno ENEMIGO
		//SIN MENU Elige un numero al azar de 1 a 3 y elige un ataque entre los ataques que conoce el enemigo
		//return char Ataque Seleccionado
		//Los daños de ataques enemigos son fijos y no tienen rnd para extender daño
		
		size_t daño=DLL_BuscarAtaque(that, Ataque Seleccionado)->guajolocombo->daño;
		this->vida=(this->vida)-daño;
		i++;
	}
	else
	{
		//Turno JUGADOR
		//MOSTRAR MENÚ  DE ATAQUES
		//JUGADOR ELIGE ATAQUE return char Ataque Seleccionado
		if(DLL_BuscarAtaque(this,Ataque Seleccionado)->guajolocombo->Habilidad=='agilidad')
		{
			size_t tiro de dado=(rnd(101)*this->agilidad;
		}
		else if(DLL_BuscarAtaque(this,Ataque Seleccionado)->Habilidad=='fuerza')
		{
			size_t tiro de dado=(rnd(101)*this->fuerza;
		}
		else if(DLL_BuscarAtaque(this,Ataque Seleccionado)->Habilidad=='inteligencia')
		{
			size_t tiro de dado=(rnd(101)*this->inteligencia;
		}
		if(tiro de dado<50*(that->destreza))
		{
			i++;
			break;
		}
		size_t daño=DLL_BuscarAtaque(this, Ataque Seleccionado)->guajolocombo->daño+rnd((DLL_BuscarAtaque(Personaje *this,Ataque Seleccionado)->guajolocombo->dado)+1);
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
