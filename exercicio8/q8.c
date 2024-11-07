#include &lt;stdio.h&gt;
#include &lt;ctype.h&gt;

int main() {
char str[100];
int count = 0;

printf(&quot;Digite uma string: &quot;);
fgets(str, sizeof(str), stdin);
str[strcspn(str, &quot;\n&quot;)] = &#39;\0&#39;; // Remover nova linha

for (int i = 0; str[i] != &#39;\0&#39;; i++) {
char c = tolower(str[i]);

if (c == &#39;a&#39; || c == &#39;e&#39; || c == &#39;i&#39; || c == &#39;o&#39; || c == &#39;u&#39;) {
count++;
}
}

printf(&quot;Número de vogais: %d\n&quot;, count);

return 0;
}
