#ifndef FILME_H
#define FILME_H

#include <limits>
#include <QString>

class Filme
{
private:
    QString titulo;
    QString diretor;
    QString genero;
    QString idioma;
    QString codigo;
    int ano;
    float valor;
    int diarias;
public:
    Filme();
    const QString &getTitulo() const;
    bool setTitulo(const QString &newTitulo);
    const QString &getDiretor() const;
    bool setDiretor(const QString &newDiretor);
    const QString &getGenero() const;
    void setGenero(const QString &newGenero);
    const QString &getIdioma() const;
    bool setIdioma(const QString &newIdioma);
    int getAno() const;
    bool setAno(int newAno);
    float getValor() const;
    bool setValor(float newValor);
    int getDiarias() const;
    void setDiarias(int newDiarias);
    const QString &getCodigo() const;

    QString gerar_codigo();
};

#endif // FILME_H
