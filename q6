#include &lt;stdio.h&gt;
#include &lt;string.h&gt;

int main() {
char str1[100], str2[50];

printf(&quot;Digite a primeira string: &quot;);
fgets(str1, sizeof(str1), stdin);
str1[strcspn(str1, &quot;\n&quot;)] = &#39;\0&#39;; // Remover nova linha

printf(&quot;Digite a segunda string: &quot;);

fgets(str2, sizeof(str2), stdin);
str2[strcspn(str2, &quot;\n&quot;)] = &#39;\0&#39;; // Remover nova linha

// Concatenar str2 em str1
strcat(str1, str2);

printf(&quot;Resultado da concatenação: %s\n&quot;, str1);

return 0;
}
