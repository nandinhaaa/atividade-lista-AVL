//a. Retornar o maior valor de uma árvore AVL
int maiorNum(tno *raiz){
    if(raiz!=NULL){
        if(raiz->key > maior){
            maior = raiz->key;
        }
        maiorNum(raiz->esq);
        maiorNum(raiz->dir);
    }
    return maior;
}
