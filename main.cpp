#include <iostream>
#include "styleBank.h"

using namespace std;

int main() {
    OutputManager OM = OutputManager();
    //cout << OM.c_set("cyan") << "This is an example of default text." << endl;
    //cout << "Adding " << OM.c_push("b_magenta") << "flavor" << OM.c_pop() << " text is also " << OM.s_push("i") << OM.s_push("st") << "quite straightforward" << OM.s_pop() << OM.s_pop() << "!" << endl;
    //cout << endl;

    // now the above lines of code become...
    OM.print("[cyan]This is an example[/cyan] of default text.\n");
    OM.print("Adding [b_magenta]flavor[/b_magenta] text is also [i]quite[/i] straightforward!?\n");
    return 0;
}