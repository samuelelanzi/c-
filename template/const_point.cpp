template<typename T>
void f(T param);                                    // param viene sempre passato per valore

int main() {
  const char* const ptr = "Fun with pointers";      // ptr e' un puntatore const ad un oggetto const
  f(ptr);                                           // passa un argomento di tipo const char* const
}

/*
  il const a destra dell'asterisco dichiara ptr come const: non puo' puntare a nessun altro indirizzo
  IL FATTO CHE VENGA PASSATO COME VALORE FA SI CHE IL CONST VENGA IGNORATO => param sara' di tipo const char*
*/