// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitIntoFloats
// Entry Point: 00b9c978
// Size: 536 bytes
// Signature: undefined __cdecl splitIntoFloats(char * param_1, vector * param_2, char param_3)


/* StringUtil::splitIntoFloats(char const*, std::__ndk1::vector<float, std::__ndk1::allocator<float>
   >&, char) */

void StringUtil::splitIntoFloats(char *param_1,vector *param_2,char param_3)

{
  ulong uVar1;
  float *pfVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  char *pcVar8;
  float local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  cVar3 = *param_1;
  if (cVar3 != '\0') {
    pcVar8 = param_1 + 1;
    do {
      if (cVar3 == param_3) {
        atof(param_1,&local_6c);
        pfVar2 = *(float **)(param_2 + 8);
        param_1 = pcVar8;
        if (pfVar2 == *(float **)(param_2 + 0x10)) {
          pvVar6 = *(void **)param_2;
          uVar7 = (long)pfVar2 - (long)pvVar6;
          uVar1 = ((long)uVar7 >> 2) + 1;
          if (uVar1 >> 0x3e != 0) goto LAB_00b9cb78;
          if (uVar1 <= (ulong)((long)uVar7 >> 1)) {
            uVar1 = (long)uVar7 >> 1;
          }
          if (0x7ffffffffffffffb < uVar7) {
            uVar1 = 0x3fffffffffffffff;
          }
          if (uVar1 == 0) {
            pvVar5 = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3e != 0) goto LAB_00b9cb80;
            pvVar5 = operator_new(uVar1 << 2);
          }
          pfVar2 = (float *)((long)pvVar5 + ((long)uVar7 >> 2) * 4);
          *pfVar2 = local_6c;
          if (0 < (long)uVar7) {
            memcpy(pvVar5,pvVar6,uVar7);
          }
          *(void **)param_2 = pvVar5;
          *(float **)(param_2 + 8) = pfVar2 + 1;
          *(void **)(param_2 + 0x10) = (void *)((long)pvVar5 + uVar1 * 4);
          if (pvVar6 != (void *)0x0) {
            operator_delete(pvVar6);
          }
        }
        else {
          *pfVar2 = local_6c;
          *(float **)(param_2 + 8) = pfVar2 + 1;
        }
      }
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    atof(param_1,&local_6c);
    pfVar2 = *(float **)(param_2 + 8);
    if (pfVar2 == *(float **)(param_2 + 0x10)) {
      pvVar6 = *(void **)param_2;
      uVar7 = (long)pfVar2 - (long)pvVar6;
      uVar1 = ((long)uVar7 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) {
LAB_00b9cb78:
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)uVar7 >> 1)) {
        uVar1 = (long)uVar7 >> 1;
      }
      if (0x7ffffffffffffffb < uVar7) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) {
LAB_00b9cb80:
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar5 = operator_new(uVar1 << 2);
      }
      pfVar2 = (float *)((long)pvVar5 + ((long)uVar7 >> 2) * 4);
      *pfVar2 = local_6c;
      if (0 < (long)uVar7) {
        memcpy(pvVar5,pvVar6,uVar7);
      }
      *(void **)param_2 = pvVar5;
      *(float **)(param_2 + 8) = pfVar2 + 1;
      *(void **)(param_2 + 0x10) = (void *)((long)pvVar5 + uVar1 * 4);
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
    }
    else {
      *pfVar2 = local_6c;
      *(float **)(param_2 + 8) = pfVar2 + 1;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


