// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makeUnifiedPathInPlace
// Entry Point: 00c631c4
// Size: 116 bytes
// Signature: undefined __cdecl makeUnifiedPathInPlace(basic_string * param_1)


/* PathUtil::makeUnifiedPathInPlace(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void PathUtil::makeUnifiedPathInPlace(basic_string *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  
  StringUtil::substituteInPlace('\\','/',param_1);
  pcVar2 = *(char **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    pcVar2 = (char *)((long)param_1 + 1);
  }
  if ((*pcVar2 == '/') && (pcVar2[1] == '/')) {
    pcVar2[1] = '\\';
    puVar1 = (undefined *)((long)param_1 + 1);
    if ((*(byte *)param_1 & 1) != 0) {
      puVar1 = *(undefined **)(param_1 + 4);
    }
    *puVar1 = 0x5c;
  }
  return;
}


