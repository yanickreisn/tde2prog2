#include &lt;stdio.h&gt;

int main() {
char str[100];

printf(&quot;Digite uma string: &quot;);
fgets(str, sizeof(str), stdin);
str[strcspn(str, &quot;\n&quot;)] = &#39;\0&#39;; // Remover nova linha

printf(&quot;Caracteres da string:\n&quot;);
for (int i = 0; str[i] != &#39;\0&#39;; i++) {
printf(&quot;%c\n&quot;, str[i]);
}

return 0;
}
