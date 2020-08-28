/*! \file
 *  \brief  Основной файл клиента.
 */

#include "Client.h"

/*! \brief Главная функция клиентской части.
 *
 *  \param argc Число входных аргуметов.
 *  \param argv Сами аргументы.
 *
 *  \details В качестве входных аргументов необходимо ввести ip-адрес сервера,
 *  в случае отсутствия или некорректности входных параметров будет установлен
 *  локальный ip-адрес "127.0.0.1"
 */
int main(int argc, const char* argv[])
{
    return client(argc, argv);
}