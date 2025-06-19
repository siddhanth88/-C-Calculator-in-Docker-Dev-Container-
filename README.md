# 🧮 C Calculator in Docker Dev Container

A modular, multi-file **C language calculator** that runs inside a **Docker container** using **Visual Studio Code Dev Containers**. This project showcases clean C programming with a modern, containerized development workflow.

---

## 📋 Description

This CLI calculator supports basic operations like **addition** and **subtraction**, and demonstrates how to:
- Structure a C project using multiple source files (`main.c`, `utils.c`, `utils.h`)
- Use a `Makefile` to automate builds
- Run and build the project inside a **Dockerized Linux environment**
- Use **VS Code Dev Containers** for a consistent, portable development setup

---

## 🚀 Features

- Multi-file C code with header files
- Automated build using `make`
- Docker-based environment with Ubuntu and GCC
- VS Code Dev Container integration (`.devcontainer` folder)
- Extendable design (easy to add multiply/divide)

---

##  Tech Stack

- **Language**: C (GCC)
- **Container**: Docker (Ubuntu base image)
- **Build Tool**: Make
- **IDE**: Visual Studio Code with Dev Containers

---

## Sample Output

```bash
Welcome, Docker C Developer!
Enter two numbers separated by space: 22 7
Add: 22 + 7 = 29
Subtract: 22 - 7 = 15
