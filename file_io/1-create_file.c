#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file and writes text_content to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd; /* Descripteur de fichier */
	ssize_t bytesWritten; /* Nombre d'octets écrits */
	size_t text_length = 0; /* Longueur de text_content */

	/* Vérifie si le nom de fichier est NULL */
	if (filename == NULL)
	{
		return (-1);
	}

	/* Ouvre ou crée le fichier avec les permissions rw------- */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1); /* Échec de la création du fichier */
	}

	/* Si text_content est NULL, ne rien écrire (créer un fichier vide) */
	if (text_content != NULL)
	{
		/* Calcule la longueur de text_content */
		while (text_content[text_length])
			text_length++;

		/* Écrit le contenu dans le fichier */
		bytesWritten = write(fd, text_content, text_length);
		if (bytesWritten == -1)
		{
			close(fd);
			return (-1); /* Échec de l'écriture */
		}
	}

	/* Ferme le descripteur de fichier */
	close(fd);
	return (1); /* Succès */
}
