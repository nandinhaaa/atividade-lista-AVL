//b. Verificar se uma árvore é AVL
bool AVL (PONT p){
	int e,d;
	bool ok = true;
	if(p){
		ok = AVL(p->esq);
		if(ok) ok = AVL(p->dir);
		if(ok){
			e = altura(p->esq);
			d = altura(p->dir);
			if(e-d > 1 || e-d < -1) ok = false;  
			else ok = true;
		}
	}
	return(ok);
}
