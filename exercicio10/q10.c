#include &lt;stdio.h&gt;
#include &lt;ctype.h&gt;

int main() {
char str[100];
int letras = 0, digitos = 0, especiais = 0;

printf(&quot;Digite uma string: &quot;);
fgets(str, sizeof(str), stdin);
str[strcspn(str, &quot;\n&quot;)] = &#39;\0&#39;; // Remover nova linha

for (int i = 0; str[i] != &#39;\0&#39;; i++) {
if (isalpha(str[i])) {
letras++;
} else if (isdigit(str[i])) {

digitos++;
} else {
especiais++;
}
}

printf(&quot;Letras: %d, Dígitos: %d, Caracteres especiais: %d\n&quot;, letras, digitos, especiais);

return 0;
}
