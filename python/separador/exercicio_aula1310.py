# Ler um arquivo com dados separados com ","
# Gerar um novo arquivo com os dados separados por ";"

search = ","
replace = ";"


with open(r"C:/Users/mathe/OneDrive/Documentos/USP/Desenvolvimento de Software/sel0456/python/separador/dados.txt", "r") as file:
    data = file.read()
    data = data.replace(search, replace)

with open(r'C:/Users/mathe/OneDrive/Documentos/USP/Desenvolvimento de Software/sel0456/python/separador/dados_atualizados.txt', "w") as file:
    file.write(data)

print("Novo arquivo com texto substituido criado")
