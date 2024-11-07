#include &lt;stdio.h&gt;

#include &lt;string.h&gt;

int main() {
char str1[100], str2[100];

printf(&quot;Digite a primeira string: &quot;);
fgets(str1, sizeof(str1), stdin);
str1[strcspn(str1, &quot;\n&quot;)] = &#39;\0&#39;; // Remover nova linha

printf(&quot;Digite a segunda string: &quot;);
fgets(str2, sizeof(str2), stdin);
str2[strcspn(str2, &quot;\n&quot;)] = &#39;\0&#39;; // Remover nova linha

if (strcmp(str1, str2) == 0) {
printf(&quot;As strings são iguais.\n&quot;);
} else {
printf(&quot;As strings são diferentes.\n&quot;);
}

return 0;
}
