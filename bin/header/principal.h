#ifndef PRINCIPAL_H
#define PRINCIPAL_H


////______________Fenêtre principale____________


/** 
*	Affiche la page d'ouverture de l'application
*
*	@return void
**/
void page_ouverture();

/** 
*	Affiche la page de connexion
*
*	@return void
**/
void page_connexion();


/** 
*	Affiche la page d'inscription
*
*	@return void
**/
void page_inscription();


/** 
*	Affiche les notifications de l'interface correspondantes
*	au code passé en parametre
*
*	@parametre	code int correspondant au code de la notification à afficher
*	@return	void
**/
void notification(int code);


#endif


