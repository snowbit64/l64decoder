// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fixupMultilineString
// Entry Point: 00ee8b50
// Size: 180 bytes
// Signature: undefined __cdecl fixupMultilineString(basic_string * param_1)


/* Luau::Lexer::fixupMultilineString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void Luau::Lexer::fixupMultilineString(basic_string *param_1)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  char cVar6;
  long lVar7;
  
  bVar1 = *(byte *)param_1;
  uVar4 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 2);
  }
  if (uVar4 == 0) {
    return;
  }
  pcVar3 = *(char **)(param_1 + 4);
  if ((bVar1 & 1) == 0) {
    pcVar3 = (char *)((long)param_1 + 1);
  }
  if ((*pcVar3 == '\r') && (pcVar3[1] == '\n')) {
    uVar4 = 2;
  }
  else {
    uVar4 = (ulong)(*pcVar3 == '\n');
  }
  pcVar5 = pcVar3 + uVar4;
  pcVar2 = pcVar3;
  do {
    cVar6 = *pcVar5;
    if (cVar6 == '\r') {
      if (pcVar5[1] != '\n') goto LAB_00ee8bb0;
      cVar6 = '\n';
      lVar7 = 2;
    }
    else {
      if (cVar6 == '\0') {
        cVar6 = (char)param_1 + '\x01';
        if ((*(byte *)param_1 & 1) != 0) {
          cVar6 = (char)*(undefined8 *)(param_1 + 4);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::resize((ulong)param_1,(char)pcVar3 - cVar6);
        return;
      }
LAB_00ee8bb0:
      lVar7 = 1;
    }
    pcVar5 = pcVar5 + lVar7;
    pcVar3 = pcVar3 + 1;
    *pcVar2 = cVar6;
    pcVar2 = pcVar2 + 1;
  } while( true );
}


