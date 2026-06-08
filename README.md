# xd

## Descripción

Este repositorio es un primer paso para aprender CI/CD usando GitHub Actions aplicado a un proyecto de PlatformIO.

## Objetivo

La intención es experimentar con flujos de integración continua y despliegue continuo (CI/CD) —crear y verificar workflows en `.github/workflows`— para compilar, testear y, en el futuro, publicar firmwares automáticamente.

## Cómo usar

- El código fuente se encuentra en `src/`.
- Usa PlatformIO para compilar y probar localmente.

Ejemplo rápido (desde la raíz del proyecto):

```
platformio run
```

## Próximos pasos (CI/CD)

1. Añadir workflows en `.github/workflows` para compilar con PlatformIO en cada push/pr.
2. Ejecutar tests automatizados y reportar artefactos de compilación.
3. Explorar despliegues automatizados si procede (por ejemplo, subir binarios a releases o a un servidor de OTA).

## Contacto

Siéntete libre de abrir issues o pull requests para ideas y mejoras.
