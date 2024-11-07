#include &lt;stdio.h&gt;
#include &lt;ctype.h&gt;

int main() {
char str[100];

printf(&quot;Digite uma string: &quot;);
fgets(str, sizeof(str), stdin);
str[strcspn(str, &quot;\n&quot;)] = &#39;\0&#39;; // Remover nova linha

// Converter para maiúsculas
for (int i = 0; str[i] != &#39;\0&#39;; i++) {

str[i] = toupper(str[i]);
}

printf(&quot;String em maiúsculas: %s\n&quot;, str);

return 0;
}
