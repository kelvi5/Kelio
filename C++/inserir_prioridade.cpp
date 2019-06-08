void insere_com_prioridade(Paciente **primeiro , Paciente **novo)
{
    Paciente *pAux = *primeiro;

    // Com lista vazia, insere primeiro paciente, independente qual seja
    if ( *primeiro == NULL )
    {
        *primeiro = *novo;
        return;
    }

    // (Prioridade 1) Insere criança na primeira posição, caso não seja.
    if( (*novo)->pa[a].grau_Urgencia == 5 && (*primeiro)->pa[a].grau_Urgencia != 5 )
    {
        (*novo)->proximo = *primeiro;
        *primeiro = *novo;
        return;
    }
    else
    {
        // (Prioridade 2) Insere idoso na primeira posição, caso não seja criança e idoso
        if( (*novo)->pa[a].grau_Urgencia == 4 && (*primeiro)->pa[a].grau_Urgencia !=5 )
        {
            (*novo)->proximo = *primeiro;
            *primeiro = *novo;
            return;
        }
        else
        {
            // (Prioridade 3) Insere gestante na primeira posição, caso não seja criança, idoso e gestante
            if( (*novo)->pa[a].grau_Urgencia == 3 && (*primeiro)->pa[a].grau_Urgencia != 4 && (*primeiro)->pa[a].grau_Urgencia != 5 )
            {
                (*novo)->proximo = *primeiro;
                *primeiro = *novo;
                return;
            }
            else if( (*novo)->pa[a].grau_Urgencia == 2 && (*primeiro)->pa[a].grau_Urgencia != 3 && (*primeiro)->pa[a].grau_Urgencia != 4 && (*primeiro)->pa[a].grau_Urgencia != 5){
            		(*novo)->proximo = *primeiro;
                	*primeiro = *novo;
               		 return;
			}
			else if( (*novo)->pa[a].grau_Urgencia == 1 && (*primeiro)->pa[a].grau_Urgencia != 2 && (*primeiro)->pa[a].grau_Urgencia != 3 && (*primeiro)->pa[a].grau_Urgencia != 4 && (*primeiro)->pa[a].grau_Urgencia != 5){
				(*novo)->proximo = *primeiro;
                *primeiro = *novo;
                return;
			}
        }
    }

    while(1)
    {
        // Último da Fila
        if( pAux->proximo == NULL ) // Insere na última posição da lista
        {
            pAux->proximo = *novo;
            return;
        }
        else
        {
            // Prioridade 1
            // Verifica se a idade do paciente é menor ou igual a 10 e posiciona na última posição adequada
            if( (*novo)->pa[a].grau_Urgencia == 5 && pAux->proximo->pa[a].grau_Urgencia != 4 || pAux->proximo->pa[a].grau_Urgencia != 3 || pAux->proximo->pa[a].grau_Urgencia != 2 || pAux->proximo->pa[a].grau_Urgencia != 1 ) {
            	
                (*novo)->proximo = pAux->proximo;
                pAux->proximo = *novo;
                return;
            }

            // Prioridade 2
            // Verifica se a idade do paciente é maior ou igual a 60 e posiciona na última posição adequada            
            if( (*novo)->pa[a].grau_Urgencia == 4 ) {
            	
                (*novo)->proximo = pAux->proximo;
                pAux->proximo = *novo;
                return;
            }

            // Prioridade 3 // Insere na última posição de gestante
            if( (*novo)->pa[a].grau_Urgencia == 3 ){
            	
                (*novo)->proximo = pAux->proximo;
                pAux->proximo = *novo;
                return;
            }
            if( (*novo)->pa[a].grau_Urgencia == 2 ){
            	
                (*novo)->proximo = pAux->proximo;
                pAux->proximo = *novo;
                return;
            }
            if( (*novo)->pa[a].grau_Urgencia == 1 ){
            	
                (*novo)->proximo = pAux->proximo;
                pAux->proximo = *novo;
                return;
            }
        }

        pAux = pAux->proximo;

    }
}
