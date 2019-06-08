void insere_com_prioridade(Paciente **primeiro , Paciente **novo)
{
    Paciente *pAux = *primeiro;

    // Com lista vazia, insere primeiro paciente, independente qual seja
    if ( *primeiro == NULL )
    {
        *primeiro = *novo;
        return;
    }

    // (Prioridade 1) Insere crian�a na primeira posi��o, caso n�o seja.
    if( (*novo)->pa[a].grau_Urgencia == 5 && (*primeiro)->pa[a].grau_Urgencia != 5 )
    {
        (*novo)->proximo = *primeiro;
        *primeiro = *novo;
        return;
    }
    else
    {
        // (Prioridade 2) Insere idoso na primeira posi��o, caso n�o seja crian�a e idoso
        if( (*novo)->pa[a].grau_Urgencia == 4 && (*primeiro)->pa[a].grau_Urgencia !=5 )
        {
            (*novo)->proximo = *primeiro;
            *primeiro = *novo;
            return;
        }
        else
        {
            // (Prioridade 3) Insere gestante na primeira posi��o, caso n�o seja crian�a, idoso e gestante
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
        // �ltimo da Fila
        if( pAux->proximo == NULL ) // Insere na �ltima posi��o da lista
        {
            pAux->proximo = *novo;
            return;
        }
        else
        {
            // Prioridade 1
            // Verifica se a idade do paciente � menor ou igual a 10 e posiciona na �ltima posi��o adequada
            if( (*novo)->pa[a].grau_Urgencia == 5 && pAux->proximo->pa[a].grau_Urgencia != 4 || pAux->proximo->pa[a].grau_Urgencia != 3 || pAux->proximo->pa[a].grau_Urgencia != 2 || pAux->proximo->pa[a].grau_Urgencia != 1 ) {
            	
                (*novo)->proximo = pAux->proximo;
                pAux->proximo = *novo;
                return;
            }

            // Prioridade 2
            // Verifica se a idade do paciente � maior ou igual a 60 e posiciona na �ltima posi��o adequada            
            if( (*novo)->pa[a].grau_Urgencia == 4 ) {
            	
                (*novo)->proximo = pAux->proximo;
                pAux->proximo = *novo;
                return;
            }

            // Prioridade 3 // Insere na �ltima posi��o de gestante
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
