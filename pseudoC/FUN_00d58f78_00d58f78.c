// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d58f78
// Entry Point: 00d58f78
// Size: 368 bytes
// Signature: undefined FUN_00d58f78(void)


void FUN_00d58f78(void **param_1,undefined8 *param_2)

{
  void *__dest;
  void *pvVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong __n;
  undefined8 *puVar5;
  double dVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)param_1[2]) {
    pvVar1 = *param_1;
    __n = (long)puVar3 - (long)pvVar1;
    uVar2 = ((long)__n >> 4) + 1;
    if (uVar2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)__n >> 3)) {
      uVar2 = (long)__n >> 3;
    }
    if (0x7fffffffffffffef < __n) {
      uVar2 = 0xfffffffffffffff;
    }
    if (uVar2 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __dest = operator_new(uVar2 << 4);
    }
    puVar3 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
    uVar4 = *param_2;
    puVar5 = puVar3 + 2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar4;
    if (0 < (long)__n) {
      memcpy(__dest,pvVar1,__n);
    }
    *param_1 = __dest;
    param_1[1] = puVar5;
    param_1[2] = (void *)((long)__dest + uVar2 * 0x10);
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
      puVar5 = (undefined8 *)param_1[1];
    }
  }
  else {
    uVar4 = *param_2;
    puVar5 = puVar3 + 2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar4;
    param_1[1] = puVar5;
  }
  pvVar1 = *param_1;
  if (0x10 < (long)puVar5 - (long)pvVar1) {
    dVar6 = (double)puVar5[-1];
    uVar2 = ((ulong)((long)puVar5 - (long)pvVar1) >> 4) - 2 >> 1;
    if (dVar6 < *(double *)((long)pvVar1 + uVar2 * 0x10 + 8)) {
      uVar4 = puVar5[-2];
      puVar3 = puVar5 + -2;
      do {
        puVar5 = (undefined8 *)((long)pvVar1 + uVar2 * 0x10);
        uVar7 = *puVar5;
        puVar3[1] = puVar5[1];
        *puVar3 = uVar7;
        if (uVar2 == 0) break;
        if (-1 < (long)(uVar2 - 1)) {
          uVar2 = uVar2 - 1;
        }
        uVar2 = (long)uVar2 >> 1;
        puVar3 = puVar5;
      } while (dVar6 < *(double *)((long)pvVar1 + uVar2 * 0x10 + 8));
      *puVar5 = uVar4;
      puVar5[1] = dVar6;
    }
  }
  return;
}


