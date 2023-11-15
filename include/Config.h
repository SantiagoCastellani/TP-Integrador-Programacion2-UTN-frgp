#ifndef CONFIG_H
#define CONFIG_H


class Config
{
    public:
        Config();

        // Realizar BACKUP LIBROS
        void backupLibros();

        // Realizar BACKUP VENTAS
        void backupVentas();

        // Realizar BACKUP CLIENTES
        void backupClientes();

        // Restaurar Archivos LIBROS
        void restaurarArchivosLibros();

        // Restaurar Archivos VENTAS
        void restaurarArchivosVentas();

        // Restaurar Archivos CLIENTES
        void restaurarArchivosClientes();


    protected:

    private:

    /// ARCHIVOS DE BACKUP
    const char *BACKUP_VENTAS = "Backup-Ventas.bak";
    const char *BACKUP_CLIENTES = "Backup-Clientes.bak";
    const char *BACKUP_LIBROS = "Backup-Libros.bak";
};

#endif // CONFIG_H
