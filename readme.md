# PLD-COMP  H4111  
  
## Guide d'installation  
**A ce jour, la compilation sous Windows ne fonctionne pas. Veuillez compiler sous macOS ou une distribution Linux.
Nous préconisons l'utilisation de Linux pour l'exécution **
  
L'ensemble des librairies sont incluses dans ce projet. Veuillez utiliser le répertoire du projet comme répertoire courant d'exécution.  
  
La compilation du projet utilise CMake. Pour compiler selon les paramètres par défaut du projet, veuillez utiliser la commande  
  
`cmake --build cmake-build-debug --target cmm -- -j 2`  
  
Pour lancer l'exécutable, utilisez la commande  
  
`./bin/cmm <nom fichier à compiler> <options>`  

Voici la liste des options implémentés : 


| Argument | Description | Exemple |
| -------- | -------- | -------- |
| <nom de fichier>| OBLIGATOIRE : nom du fichier à compiler|foo|
|-a|Analyse statique du fichier|foo -a|
|-c <nom de fichier out>|spécifie le fichier de sortie|foo -c foo2|
|-o|Optimisation (non implémentée)|foo -o|
|-h|Afficher l'aide|-h|
    
Les fichiers d'entrée doivent avoir l'extension .cmm

Après une option -c, toujours faire suivre un nom de fichier.

### Tests

Nous utilisons une panoplie de tests dans le dossier Test.
Vous pouvez lancer le script de tests launchTests.sh afin de lancer l'ensemble des tests.

Pour ajouter un test, veuillez créer un fichier d'extension .cmm dans le dossier Tests/files
## Fonctions implémentées : 
### 1. Eléments:  
Type: `char` `int32_t` `int64_t`


---------

Value:
| Type | Ecriture | Exemple |
|--|--|--|
|Char | `'<char>'` | `'a'`|
|int32_t | `<value>` | `125`|
|int64_t | `<value>L` | `125689L`|
> **Note:** une valeur négative n'est pas considéré comme une valeur mais comme une expression(Exmple : `a=1+-6` correspond a `a = 1+(-(6))`)
> On ne peut donc pas écrire `int a[-2];` car `-2` n'est pas considéré comme une valeur(cf: Définition) 
------
Opérateurs: `=` `+` `-` `*` `/` `%` `|` `&` `&&` `||`  `<` `<=` `==` `=>` `>` `!`
> **Note:** opperator `||` et `&&` sont légèrements différents du C (ne retourne pas forcement 1 si la condition est vraie mais la valeur de l'expression d'une des 2 expressions):
> | A | B | A&&B | A\|\|B | 
> |--|--|--|--|
> | =0 | =0 | 0* | 0 |
> | >0 | =0 | 0 | A* |
> | =0 | >0 | 0* | B |
> | >0 | >0 | B | A* |
> \* = ellement B n'est pas evaluer
### 2. Définitions:  
#### 2.1. Variables
```
	Type VarName;  
	Type VarName = Expression;  
	Type VarName[Value];
```  
*Exemple:*
```
	int64_t longVar;
	int32_t intVar = 8 + -5;
	int32_t longToInt = 16L;
	char[8] arrayOfChar;
```
*\/\!\\ Don't work*
```
	int32_t noExaValue = 0x8F;
	int32_t[3+3] _3Plus3NesPasUneValue; 
	int32_t[-8] M8NesPasUneValue; // cf Value
	int32_t[7] NotInitable = {1,2,3,4,5,6,7}; // not implemented yet
```
#### 2.2. Fonction
```
	Type FunctionName(Type VarName, ...){
		<Definition>*
		<Statement>*
	}
	void FunctionName(){...}
	void FunctionName(void){...}
```
> **Note:** Les définitions doivent obligatoirement se faire avant tout statement.
> **Note** Les paramètres ne peuvent pas étre des tableaux.
> **Note** Un Return est obligatoire si la méthode n'est pas void (cf Expression Return).
> **Note** Le nommage de fonctions identiques n'est pas permis même si leurs signatures sont uniques.
> **Note:** Les 6 premiers paramètres sont passés par les registres et les autres paramètres sont passés dans le stack selon la convention de l'ABI.
> **Note:** La valeur de retour est stocké dans le registres `%rax`

*Exemple*
```
	int32_t funct1(int32_t var1, int32_t var2, int32_t var3, int32_t var4, int32_t var5, int32_t var6, int32_t var7){
		if(var1+var2+var3+var4+var5+var6 > var7){
			return;
		}
		putchar('t');
	}
	void FunctionName(){}
	int32_t FunctionName(void){
		return 15+2;
	}
```
Fonction existente par défaut:
`void putchar(char);`
`char getchar();`

----------

### 3. Statement

#### 3.1. Basic
```
    <Expression>;
    <VarName> = <Expression>; // cf: Expression > affectation
```
*Exemples*
```
    a=a+2;
    a++;
    a=b=c=d=e=f=16;
    a = 3>b;
    b=functionF(a,a++,--b);
    c[6/a] = a*=6;
    b *= c[c[0]];
    
```


#### 3.2. If / While
if
```
	if(<Expression>){
		...
	}
	
	if(<Expression>) 
		<Statement>;
	else
		<Statement>;
		
	if(<Expression>){
		...
	}else if(<Expression>){
		...
	}else{
		...
	}
```
while
```
	while(<Expression>){
		...
	}
	while(<Expression>)
		<Statement>;
```
*Exemple*
```
	while(a<1){
		if(a-5){
			return b;
		}else
			b--;
	}
    
```
#### 3.3. Return

```
    return;
    return <Expression>;
```
> **Note:** Un Return est obligatoire pour les fonctions typés et un return doit être forcémment accessible afin que la fonction soit considéré comme ayant un return.
> **Note:** Les instructions aprés un return seront ignorés
> **Note:** La valeur de retour est stoker dans le registr `%rax`

Exemple
```
    int32_t f1(int32_t var){
        if(var == 2){
            return 1;
        }else{
            return var * var;
        }
        
    }
    void f1(int32_t var){
        while(var == 2){
            return;
            var = 2; // This ligne is just ignored and not in asm
        }
    }
```

*\/\!\\ Don't work*
```
    int32_t f1(int32_t var){
        if(var == 2){
            return 8;
        }else if(var != 2){
            return var * var;
        }
        /* Le compilateur est stupide!
         * Il pensse qu'il est possible que les 2 conditions soit fausses
         * dans lequelle cas l'execution n'arriverait pas à un return
         */
    }
```

### 4. Expression
Exemples D'expression:
```
    a++; a--;
    a += 1; a /= 3; // operator : += -= *= /= %=
    a = b + c; //operator : + - * / % & | && || ==  
    a = function1(a,b,c,d,array[a+b+c+d]);
    a = array[a+1];
    array[a+1] = a;
```

### 4.1 Affectation / Incrémentation & Décrementation
```
    <VarName> = <Expression>
    <ArrayName>[<Expression>] = <Expression>
    <VarName> += <Expression>
    <VarName> -= <Expression>
    <VarName> *= <Expression>
    <VarName> /= <Expression>
    <VarName> %= <Expression>
    <VarName>++;
    <ArrayName>[<Expression>]--;
```
> **Note:** L'affectation d'un type vers un autre est autorisée (excepté pour les tableaux)
> Par exmple pour `var_int32 = var_int64;` la variable `var_int32` va prendre les 32 bits de droite de `var_int64`;

#### 4.2 Operator
```
    <Expression> <Operator> <Expression>
    !<Expression>
    -<Expression>
```
> **Rappel:** 
> Opérateurs: `=` `+` `-` `*` `/` `%` `|` `&` `&&` `||`  `<` `<=` `==` `=>` `>` `!`
> cf: Eléments

> **Note:** Le type d'un operator correspond au plus gros type (en taille mémoire) de ses expressions
> **Note:** Le code assembleur stocke les résutats  des registre 32 ou 64 bits selon le type et utilise des opérateurs 32 ou 64 bit (un char est stocké dans un registre 32 bit )
> **Note:** Les operation sur des tableau ne sont pas autoriser
> exemple : ~~`array1 = array2`~~ ~~`array1 + array2`~~

Exemple
```
    a = 8
    r = 1 + 2;     //    r = 4
    r = 1 - 2;     //    r = -2
    r = 1 * 2;     //    r = 3
    r = 5 / 2;     //    r = 1
    r = 5 % 2;     //    r = 2
    r = 5 & 2;     //    r = 1
    r = 5 | 2;     //    r = 3
    r = 5 && 3;    //    r = 3
    r = 5 && 0;    //    r = 0
    r = 0 && a++;  //    r = 0        a = 8
    r = 5 || 3;    //    r = 5
    r = 5 || a++;  //    r = 5        a = 8
    r = 0 || 7;    //    r = 7        a = 8
    a = -1;
    r = a++ || funtionNotCall();  //  a = 0    r = -1
    r = a++ || funtionCall();     //  a = 1    r = funtionCall()
```


#### 4.3 Appel de fonction
```
    <functionName>(<Expression>*);
```
> **Note:** les expression passer en paramétre doivent étre du bon type
> **NoteRapel:** Les 6 premiers paramètres sont passés par les registres et les autres paramètres sont passés dans le stack selon la convention de l'ABI.
> **NoteRapel:** La valeur de retour est stocké dans le registres `%rax`
```
    char a = fontion1(1, 2L, 'C', 'A', 'b', 'c', 'd');
    putchar(a);
    putchar(fontion1(1, 2L, 'C', 'A', 'b', 'c', 'd'));
    a = getchar() - '0';
    putchar(getchar() + a);
```

## Bug / Non implementer
bug pour la division et modulo:
```
    a = 2/4;
    a = 2%4;
```
bug d'un access array:
```
    array[a+2] = 5;
```
