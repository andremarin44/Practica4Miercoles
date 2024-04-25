#include <string>

class Producto {
public:
    Producto(std::string nombre, std::string marca, int precio, int descuento, int inventario);
    virtual ~Producto() {}

    std::string getNombre();
    std::string getMarca();
    int getPrecio();
    int getDescuento();
    int getInventario();

    virtual void imprimirDetalles() = 0;

protected:
    std::string nombre;
    std::string marca;
    int precio;
    int descuento;
    int inventario;
};

class Comestible : public Producto {
public:
    Comestible(std::string nombre, std::string marca, int precio, int descuento, int inventario, std::string fechaVencimiento);

    void imprimirDetalles() override;

private:
    std::string fechaVencimiento;
};

class Electronico : public Producto {
public:
    Electronico(std::string nombre, std::string marca, int precio, int descuento, int inventario, int garantia);

    void imprimirDetalles() override;

private:
    int garantia;
};

class Aseo : public Producto {
public:
    Aseo(std::string nombre, std::string marca, int precio, int descuento, int inventario, std::string material);

    void imprimirDetalles() override;

private:
    std::string material;
};
