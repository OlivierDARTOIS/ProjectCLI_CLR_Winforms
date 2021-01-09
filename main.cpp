// Mise en oeuvre Windows Form VS2019
// Tuto sur http://y-okamoto-psy1949.la.coocan.jp/VCpp/OnVSCpp2019/en/
// O. Dartois, le 26/12/2020

#include "MyForm.h"

using namespace ProjectCLICLRWinforms;
[STAThreadAttribute]
int main()
{
	MyForm mf;
	mf.ShowDialog();
	return 0;
}