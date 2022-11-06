# Nome: Matheus Marques Jacobsen
# Numero USP: 10312403
# Atividade 4 da Disciplina Desenvolvimento de Software para Sistemas Embarcados com Sistemas Operacionais
# SEL0456

# Função Fatorial - Recursiva
def fact(x):
    return x * fact(x - 1) if x > 1 else 1

# Função de Fibonacci
def fib(x):
    return fib(x - 1) + fib(x - 2) if x > 1 else 1 if x == 1 else 0

# Função para Remover linhas, caracteres e espaços indesejados da lista
def isNumber(listItem):
    return True if (listItem != '\n') and (listItem != ' ') else False

# Seleção de números
def indexIsEven(listItem):
    return True if (listItem[0] % 2 == 0) else False

# Seleção de números
def indexIsOdd(listItem):
    return True if (listItem[0] % 2 != 0) else False

# Leitura de Arquivo de Entrada
with open(r"C:\Users\mathe\OneDrive\Documentos\USP\Desenvolvimento de Software\sel0456\activity_4\input.dat", "r") as inputFile:
    inputData = list(inputFile.read())

# Limpando o Arquivo de Entrada para Executar as Funções
filteredInputData = list(filter(isNumber, inputData))

# Cast para tipo int
numberInputData =  list(enumerate(map(int, filteredInputData)))

# Buscando dados para Sequência de Fibonacci
evenIndexData = [data[1] for data in list(filter(indexIsEven, numberInputData))]

# Buscando dados para Fatorial
oddIndexData = [data[1] for data in list(filter(indexIsOdd, numberInputData))]

# Pegando dados de Fibonnaci e transformando em lista
fibonacci = list(map(fib, evenIndexData))

# Pegando dados do Fatorial e transformando em lista
factorial = list(map(fact, oddIndexData))

# Arquivo de Saída
outputLines = ["Linha {}:\tfib({}) = {}\tfact({}) = {}\n".format(i, evenIndexData[i], fibonacci[i], oddIndexData[i], factorial[i]) for i in range(len(fibonacci))]
outputData = ''.join(outputLines)

with open('output.dat', 'w') as outputFile:
    outputFile.write(outputData)