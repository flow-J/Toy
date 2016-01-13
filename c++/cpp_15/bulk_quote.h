#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

class Bulk_quote : public Disc_quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& b, double p, std::size_t q, double disc) : Disc_quote(b, p, q, disc) { }

    double net_price(std::size_t n) const override;
    void   debug() const override;
};

#endif

/********************************************************************/

double Bulk_quote::net_price(std::size_t n) const
{
    return n * price * (n >= quantity ? 1 - discount : 1);
}

void Bulk_quote::debug() const
{
    Quote::debug();
    std::cout << "min_qty= " << quantity << " "
        << "discount= " << discount << " ";
}
