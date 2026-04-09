// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setConflictedMetaData
// Entry Point: 00b4e754
// Size: 184 bytes
// Signature: undefined __cdecl setConflictedMetaData(uint param_1, char * param_2, bool param_3)


/* GenericSaveGameUtil::setConflictedMetaData(unsigned int, char const*, bool) */

void GenericSaveGameUtil::setConflictedMetaData(uint param_1,char *param_2,bool param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  
  if ((int)((ulong)(DAT_0211c588 - (long)s_saveGames) >> 3) != 0) {
    if (**s_saveGames == param_1) {
      uVar3 = 0;
    }
    else {
      uVar4 = (ulong)(DAT_0211c588 - (long)s_saveGames) >> 3 & 0xffffffff;
      uVar3 = 0;
      do {
        if (uVar4 - 1 == uVar3) {
          return;
        }
        lVar1 = uVar3 + 1;
        uVar3 = uVar3 + 1;
      } while (*s_saveGames[lVar1] != param_1);
      if (uVar4 <= uVar3) {
        return;
      }
    }
    puVar5 = s_saveGames[uVar3];
    if (*(void **)(puVar5 + 4) != (void *)0x0) {
      operator_delete__(*(void **)(puVar5 + 4));
    }
    if (param_2 == (char *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = StringUtil::createStrCpy(param_2);
    }
    *(undefined8 *)(puVar5 + 4) = uVar2;
    *(bool *)(puVar5 + 6) = param_3;
  }
  return;
}


