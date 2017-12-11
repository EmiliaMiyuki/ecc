#include <lex/pplex.h>
#include "lex/lex.h"
#include "lex/token.h"
#include "include.h"
#include "common/flread.h"
#include "common/exception.h"
#include "common/console.h"
#include "parse/parser.h"

using namespace std;
using namespace Miyuki;
using namespace Miyuki::Parse;
using namespace Miyuki::Lex;

int main(int argc, const char ** argv) {
    cout << "JACC - Java Code C\n";
    cout << "License under MIT License\n\n";

    const char * file_name = "test.c";
    if (argc > 1) file_name = argv[1];

    try {
        Parser parser(file_name);
        parser.parse();
    }
    catch (exception& e) {
        cout << Miyuki::Console::Error("fatal:") << e.what() << endl << endl;
    }

}
