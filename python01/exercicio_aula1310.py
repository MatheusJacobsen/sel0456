# Ler um arquivo com dados separados com ","
# Gerar um novo arquivo com os dados separados por ";"

#class Dados:

#    def _init_(self, dado):
#        self.dado = dado

#    def setDado(self,dado):
#        self.dado = dado

#    def get.Dado(self):
#        return self.dado


arq = open('dados.txt','r')
linhas = arq.readlines()
for linha in linhas:
    print(linha)

