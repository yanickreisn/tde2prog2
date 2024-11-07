#include &lt;stdio.h&gt;
#include &lt;string.h&gt;

int main() {
char str1[100], str2[100];

printf(&quot;Digite uma string: &quot;);

fgets(str1, sizeof(str1), stdin);
str1[strcspn(str1, &quot;\n&quot;)] = &#39;\0&#39;; // Remover nova linha

// Copiar str1 para str2
strcpy(str2, str1);

printf(&quot;String original: %s\n&quot;, str1);
printf(&quot;String copiada: %s\n&quot;, str2);

return 0;
}
