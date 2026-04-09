// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDateFormatString
// Entry Point: 00c5e874
// Size: 44 bytes
// Signature: undefined __cdecl getDateFormatString(DATE_FORMAT param_1)


/* LanguageUtil::getDateFormatString(LanguageUtil::DATE_FORMAT) */

char * LanguageUtil::getDateFormatString(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "%m/%d/%Y";
  if (param_1 != 1) {
    pcVar1 = "%Y-%m-%d";
  }
  pcVar2 = "%d/%m/%Y";
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}


