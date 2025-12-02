# libft

Biblioteca personalizada de funciones en C para los proyectos de 42.

## Descripción

Libft es una biblioteca que implementa versiones personalizadas de funciones estándar de C, junto con funciones adicionales útiles para proyectos futuros. Esta versión extendida incluye **ft_printf** integrado y **get_next_line** como submódulo.

## Contenido

### Funciones Básicas de Libc
- Funciones de caracteres: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_tolower`, `ft_toupper`
- Funciones de strings: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`
- Funciones de memoria: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- Otras: `ft_atoi`, `ft_strdup`

### Funciones Adicionales
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
- `ft_strmapi`, `ft_striteri`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Funciones Bonus (Listas Enlazadas)
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- `ft_lstsize`, `ft_lstlast`
- `ft_lstdelone`, `ft_lstclear`
- `ft_lstiter`, `ft_lstmap`

### ft_printf (Integrado)
- `ft_printf`: Implementación personalizada de printf
- Soporta conversiones: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`
- Ubicación: `ft_printf/`

### get_next_line
- **gnl**: Función para leer línea por línea de un file descriptor (incluida localmente)

## Compilación

Para compilar la biblioteca:
```bash
make
```

Para compilar con funciones bonus:
```bash
make bonus
```

Para limpiar archivos objeto:
```bash
make clean
```

Para limpiar todo (incluida la biblioteca):
```bash
make fclean
```

Para recompilar desde cero:
```bash
make re
```

## Uso

1. Incluir el header en tu código:
```c
#include "libft.h"
```

2. Compilar tu programa con la biblioteca:
```bash
gcc tu_programa.c -L. -lft -o programa
```

## Clonar el Proyecto

Para clonar el proyecto:

```bash
git clone https://github.com/tal-44/libft.git
```

Todas las dependencias están incluidas localmente, no requiere inicialización de submódulos.

## Estructura

```
libft/
├── *.c              # Archivos fuente de funciones básicas
├── libft.h          # Header principal
├── Makefile         # Compilación
├── ft_printf/       # Directorio de ft_printf
│   ├── ft_printf.c
│   ├── ft_printf.h
│   └── ft_printf_utils.c
└── gnl/             # get_next_line integrado localmente
```

## Autor
jmiguele - 42 Madrid
