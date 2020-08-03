# ft_printf

  1. `printf("%010.2d", 1234)` - флаг `0` игнорируется с точностью для `%d`

  2. Флаг `0` не работает с `%s` и `%c`

  3. `%%` - выведет `%`, типа экранирования

  4. Наш ft_printf не выдает ошибку при переполнении `long int` с `l` (оригинальный выдает ошибку компиляции, походу не надо учитывать ошибки компиляции)
  
  5. `printf("%.-123d")` - в оригинальном выдаст ошибку компиляции. В нашем нет, но `0` не распечатает
  
  6. `+` не работает с `%c` (`-` работает), `0`, ` `(space), `precision` и `#` не работают с `%c`
  
  7. `l` работает с `%c` (но ничего не меняется
  
  8. `0`, `+`, `#`,` `(space), `l`, `ll` и т.п. не работают с `%s`. Со строками работают только `width`, `-` и `precision(на вывод строки не влияет)`
  
