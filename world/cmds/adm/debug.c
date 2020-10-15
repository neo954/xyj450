#include <runtime_config.h>

int main(object me, string arg)
{
    write(get_config(__DEFAULT_ERROR_MESSAGE__) + "\n");
    return 1;
}
