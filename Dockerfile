# 1. IMAGEN BASE: Descargamos un entorno linux que ya incluye el compilador de c/c++

FROM gcc:latest

# 2. DIRECTORIO DE TRABAJO: Creamos una carpeta llamada /app dentro del contenedor

WORKDIR /app

