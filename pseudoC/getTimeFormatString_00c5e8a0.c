// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTimeFormatString
// Entry Point: 00c5e8a0
// Size: 56 bytes
// Signature: undefined __cdecl getTimeFormatString(TIME_FORMAT param_1, bool param_2)


/* LanguageUtil::getTimeFormatString(LanguageUtil::TIME_FORMAT, bool) */

undefined * LanguageUtil::getTimeFormatString(int param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  
  bVar3 = (param_2 & 1) == 0;
  puVar2 = &UNK_004f83f6;
  if (bVar3) {
    puVar2 = &UNK_004dee2b;
  }
  puVar1 = &UNK_00505138;
  if (bVar3) {
    puVar1 = &UNK_004fff97;
  }
  if (param_1 != 1) {
    puVar2 = puVar1;
  }
  return puVar2;
}


