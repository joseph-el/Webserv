# include "serveX.hpp"
# include "sX_optioneer.hpp"

void init_serveX( int argc, char *const *argv)
{
    options opt(argc, argv);

    char stream[ (1 << 0xA) ];

    signal(SIGPIPE, SIG_IGN);

    if (!opt.successful() or !sX_config.successful()) // or sX_config .syntax
        return ;
    
    // Get virtual server

    while (true) {
        cout << "serve running\n";
    }


}

int main (int argc, char *const argv[])
{

    init_serveX(argc, argv);

 
 
    // puts(""); puts(""); puts(""); puts("");
    // cout << "all is good\n";
    return EXIT_SUCCESS;
}