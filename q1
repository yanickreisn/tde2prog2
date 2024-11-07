#include &lt;stdio.h&gt;
#include &lt;string.h&gt;

int main() {
char str[100];

printf(&quot;Digite uma string: &quot;);
fgets(str, sizeof(str), stdin); // Leitura da string

// Remover o caractere de nova linha se presente
str[strcspn(str, &quot;\n&quot;)] = &#39;\0&#39;;

printf(&quot;Conteúdo da string: %s\n&quot;, str);
printf(&quot;Comprimento da string: %lu\n&quot;, strlen(str));

return 0;
}
