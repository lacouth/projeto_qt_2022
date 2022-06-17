#include "filme.h"

const QString &Filme::getTitulo() const
{
    return titulo;
}

bool Filme::setTitulo(const QString &newTitulo)
{
    if(newTitulo.size() >= 3){
        titulo = newTitulo;
        return true;
    }else{
        return false;
    }
}

const QString &Filme::getDiretor() const
{
    return diretor;
}

bool Filme::setDiretor(const QString &newDiretor)
{
    if(newDiretor.size() >= 3){
        diretor = newDiretor;
        return true;
    }else{
        return false;
    }
}

const QString &Filme::getGenero() const
{
    return genero;
}

void Filme::setGenero(const QString &newGenero)
{
    genero = newGenero;
}

const QString &Filme::getIdioma() const
{
    return idioma;
}

bool Filme::setIdioma(const QString &newIdioma)
{
    if(newIdioma.size() >= 3){
        idioma = newIdioma;
        return true;
    }else{
        return false;
    }
}

int Filme::getAno() const
{
    return ano;
}

bool Filme::setAno(int newAno)
{
    if(newAno > 0){
        ano = newAno;
        return true;
    }else{
        return false;
    }

}

float Filme::getValor() const
{
    return valor;
}

bool Filme::setValor(float newValor)
{
    if(newValor > 0){
        valor = newValor;
        return true;
    }
    return false;
}

int Filme::getDiarias() const
{
    return diarias;
}

void Filme::setDiarias(int newDiarias)
{
    diarias = newDiarias;
}

const QString &Filme::getCodigo() const
{
    return codigo;
}

QString Filme::gerar_codigo()
{
    QString cod;
    int numero;
    srand(time(NULL));
    cod = this->titulo.sliced(0,3);
    numero = (rand() % 5000) + 1;
    cod = cod + QString::number(numero);
    this->codigo = cod;
    return cod;

}

Filme::Filme()
{

}
