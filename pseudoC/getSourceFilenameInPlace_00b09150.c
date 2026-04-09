// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSourceFilenameInPlace
// Entry Point: 00b09150
// Size: 288 bytes
// Signature: undefined __cdecl getSourceFilenameInPlace(basic_string * param_1)


/* AudioLoadUtil::getSourceFilenameInPlace(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void AudioLoadUtil::getSourceFilenameInPlace(basic_string *param_1)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  bVar2 = *(byte *)param_1;
  uVar6 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 2);
  }
  if (4 < uVar6) {
    pcVar8 = *(char **)(param_1 + 4);
    if ((bVar2 & 1) == 0) {
      pcVar8 = (char *)((long)param_1 + 1);
    }
    if ((pcVar8[uVar6 - 4] == '.') &&
       (uVar6 = StringUtil::iEndsWith(pcVar8,"wav"), (uVar6 & 1) == 0)) {
      pcVar8 = (char *)((long)param_1 + 1);
      uVar6 = (ulong)(*(byte *)param_1 >> 1);
      pcVar1 = pcVar8;
      if ((*(byte *)param_1 & 1) != 0) {
        uVar6 = *(ulong *)(param_1 + 2);
        pcVar1 = *(char **)(param_1 + 4);
      }
      cVar3 = pcVar1[uVar6 - 1];
      pcVar1[uVar6 - 1] = 'v';
      uVar4 = *(undefined2 *)(pcVar1 + (uVar6 - 3));
      *(undefined2 *)(pcVar1 + (uVar6 - 3)) = 0x6177;
      pcVar1 = pcVar8;
      if ((*(byte *)param_1 & 1) != 0) {
        pcVar1 = *(char **)(param_1 + 4);
      }
      uVar6 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,pcVar1);
      if ((uVar6 & 1) == 0) {
        uVar6 = (ulong)(*(byte *)param_1 >> 1);
        if ((*(byte *)param_1 & 1) != 0) {
          uVar6 = *(ulong *)(param_1 + 2);
          pcVar8 = *(char **)(param_1 + 4);
        }
        *(undefined2 *)(pcVar8 + (uVar6 - 3)) = uVar4;
        pcVar8[uVar6 - 1] = cVar3;
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


