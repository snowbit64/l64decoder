// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitInPlace
// Entry Point: 00b9c794
// Size: 484 bytes
// Signature: undefined __cdecl splitInPlace(char * param_1, char param_2, vector * param_3)


/* StringUtil::splitInPlace(char*, char, std::__ndk1::vector<char*, std::__ndk1::allocator<char*>
   >&) */

void StringUtil::splitInPlace(char *param_1,char param_2,vector *param_3)

{
  ulong uVar1;
  char **ppcVar2;
  char cVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  char *pcVar7;
  
  cVar3 = *param_1;
  if (cVar3 != '\0') {
    pcVar7 = param_1 + 1;
    do {
      if (cVar3 == param_2) {
        pcVar7[-1] = '\0';
        ppcVar2 = *(char ***)(param_3 + 8);
        if (ppcVar2 == *(char ***)(param_3 + 0x10)) {
          pvVar5 = *(void **)param_3;
          uVar6 = (long)ppcVar2 - (long)pvVar5;
          uVar1 = ((long)uVar6 >> 3) + 1;
          if (uVar1 >> 0x3d != 0) goto LAB_00b9c964;
          if (uVar1 <= (ulong)((long)uVar6 >> 2)) {
            uVar1 = (long)uVar6 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar6) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            pvVar4 = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3d != 0) goto LAB_00b9c96c;
            pvVar4 = operator_new(uVar1 << 3);
          }
          ppcVar2 = (char **)((long)pvVar4 + ((long)uVar6 >> 3) * 8);
          *ppcVar2 = param_1;
          if (0 < (long)uVar6) {
            memcpy(pvVar4,pvVar5,uVar6);
          }
          *(void **)param_3 = pvVar4;
          *(char ***)(param_3 + 8) = ppcVar2 + 1;
          *(void **)(param_3 + 0x10) = (void *)((long)pvVar4 + uVar1 * 8);
          param_1 = pcVar7;
          if (pvVar5 != (void *)0x0) {
            operator_delete(pvVar5);
          }
        }
        else {
          *ppcVar2 = param_1;
          *(char ***)(param_3 + 8) = ppcVar2 + 1;
          param_1 = pcVar7;
        }
      }
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    ppcVar2 = *(char ***)(param_3 + 8);
    if (ppcVar2 == *(char ***)(param_3 + 0x10)) {
      pvVar5 = *(void **)param_3;
      uVar6 = (long)ppcVar2 - (long)pvVar5;
      uVar1 = ((long)uVar6 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
LAB_00b9c964:
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)uVar6 >> 2)) {
        uVar1 = (long)uVar6 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3d != 0) {
LAB_00b9c96c:
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar4 = operator_new(uVar1 << 3);
      }
      ppcVar2 = (char **)((long)pvVar4 + ((long)uVar6 >> 3) * 8);
      *ppcVar2 = param_1;
      if (0 < (long)uVar6) {
        memcpy(pvVar4,pvVar5,uVar6);
      }
      *(void **)param_3 = pvVar4;
      *(char ***)(param_3 + 8) = ppcVar2 + 1;
      *(void **)(param_3 + 0x10) = (void *)((long)pvVar4 + uVar1 * 8);
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
        return;
      }
    }
    else {
      *ppcVar2 = param_1;
      *(char ***)(param_3 + 8) = ppcVar2 + 1;
    }
  }
  return;
}


