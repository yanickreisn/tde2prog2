#include &lt;stdio.h&gt;

int main() {
char str[100];
int count = 0;

printf(&quot;Digite uma string: &quot;);

fgets(str, sizeof(str), stdin);
str[strcspn(str, &quot;\n&quot;)] = &#39;\0&#39;; // Remover nova linha

for (int i = 0; str[i] != &#39;\0&#39;; i++) {
if (str[i] == &#39;a&#39; || str[i] == &#39;A&#39;) {
count++;
}
}

printf(&quot;O caractere &#39;a&#39; aparece %d vez(es).\n&quot;, count);

return 0;
}
