// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readLineOfCode
// Entry Point: 00bbac60
// Size: 324 bytes
// Signature: undefined __cdecl readLineOfCode(char * param_1, uint param_2)


/* LuauScriptSystem::readLineOfCode(char const*, unsigned int) */

void LuauScriptSystem::readLineOfCode(char *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint in_w2;
  char *in_x8;
  int iVar7;
  
  pcVar6 = (char *)(ulong)param_2;
  cVar1 = *pcVar6;
  *in_x8 = '\x06';
  *(undefined4 *)(in_x8 + 1) = 0x3f3f3f;
  if (cVar1 == '=') {
    pcVar6 = pcVar6 + 1;
  }
  plVar3 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,pcVar6,0,
                                    false);
  if (plVar3 == (long *)0x0) {
    return;
  }
  uVar2 = (**(code **)(*plVar3 + 0x48))();
  pcVar4 = (char *)operator_new__((ulong)(uVar2 + 1));
  (**(code **)(*plVar3 + 0x28))(plVar3,pcVar4,uVar2);
  pcVar4[uVar2] = '\0';
  pcVar6 = pcVar4;
  if (1 < in_w2) {
    iVar7 = in_w2 - 1;
    do {
      pcVar5 = strchr(pcVar6,10);
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5 + 1;
      }
      iVar7 = iVar7 - (uint)(pcVar5 != (char *)0x0);
    } while ((pcVar5 != (char *)0x0) && (iVar7 != 0));
    if (iVar7 != 0) goto LAB_00bbad68;
  }
  pcVar5 = strchr(pcVar6,10);
  if (pcVar5 != (char *)0x0) {
    *pcVar5 = '\0';
  }
  for (; *pcVar6 == ' ' || *pcVar6 == '\t'; pcVar6 = pcVar6 + 1) {
  }
                    /* try { // try from 00bbad5c to 00bbad67 has its CatchHandler @ 00bbada4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(in_x8);
LAB_00bbad68:
  operator_delete__(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00bbad8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))(plVar3);
  return;
}


