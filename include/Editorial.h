#ifndef EDITORIAL_H
#define EDITORIAL_H


class Editorial
{
    public:
        Editorial();
        Editorial(int IdEditorial,char* editorial);

        /// GETTERS
        int get_IdEditorial();
        const char* get_editorial();

        /// SETTERS
        void set_IdEditorial(int);
        void set_editorial(const char*);

    protected:

    private:
        int _IdEditorial;
        char _editorial[30];
};

#endif // EDITORIAL_H
