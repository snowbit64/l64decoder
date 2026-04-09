// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSaveGameData
// Entry Point: 00b4da70
// Size: 472 bytes
// Signature: undefined __cdecl setSaveGameData(uint param_1, char * param_2, char * param_3, bool param_4)


/* GenericSaveGameUtil::setSaveGameData(unsigned int, char const*, char const*, bool) */

void GenericSaveGameUtil::setSaveGameData(uint param_1,char *param_2,char *param_3,bool param_4)

{
  uint **ppuVar1;
  long lVar2;
  uint **__src;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint **__dest;
  ulong uVar6;
  ulong __n;
  uint *puVar7;
  ulong uVar8;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  puVar3 = (uint *)operator_new(0x20);
                    /* try { // try from 00b4daa8 to 00b4dabf has its CatchHandler @ 00b4dc48 */
  uVar4 = StringUtil::createStrCpy(param_2);
  if (param_3 == (char *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = StringUtil::createStrCpy(param_3);
  }
  *puVar3 = param_1;
  *(undefined8 *)(puVar3 + 2) = uVar4;
  *(undefined8 *)(puVar3 + 4) = uVar5;
  *(bool *)(puVar3 + 6) = param_4;
  __src = s_saveGames;
  __n = (long)DAT_0211c588 - (long)s_saveGames;
  if ((int)(__n >> 3) == 0) {
LAB_00b4db6c:
    if (DAT_0211c588 == DAT_0211c590) {
      uVar8 = ((long)__n >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar8 <= (ulong)((long)__n >> 2)) {
        uVar8 = (long)__n >> 2;
      }
      if (0x7ffffffffffffff7 < __n) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 == 0) {
        __dest = (uint **)0x0;
      }
      else {
        if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = (uint **)operator_new(uVar8 << 3);
      }
      ppuVar1 = __dest + ((long)__n >> 3);
      *ppuVar1 = puVar3;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      s_saveGames = __dest;
      DAT_0211c588 = ppuVar1 + 1;
      DAT_0211c590 = __dest + uVar8;
      if (__src != (uint **)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      *DAT_0211c588 = puVar3;
      DAT_0211c588 = DAT_0211c588 + 1;
    }
  }
  else {
    if (**s_saveGames == param_1) {
      uVar8 = 0;
    }
    else {
      uVar6 = __n >> 3 & 0xffffffff;
      uVar8 = 0;
      do {
        if (uVar6 - 1 == uVar8) goto LAB_00b4db6c;
        lVar2 = uVar8 + 1;
        uVar8 = uVar8 + 1;
      } while (*s_saveGames[lVar2] != param_1);
      if (uVar6 <= uVar8) goto LAB_00b4db6c;
    }
    puVar7 = s_saveGames[uVar8];
    if (puVar7 != (uint *)0x0) {
      if (*(void **)(puVar7 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(puVar7 + 2));
      }
      if (*(void **)(puVar7 + 4) != (void *)0x0) {
        operator_delete__(*(void **)(puVar7 + 4));
      }
      operator_delete(puVar7);
    }
    s_saveGames[uVar8] = puVar3;
  }
  return;
}


