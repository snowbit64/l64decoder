// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflateCopy
// Entry Point: 00e2ce3c
// Size: 440 bytes
// Signature: undefined inflateCopy(void)


undefined8 inflateCopy(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *__dest;
  void *__dest_00;
  long *plVar2;
  long lVar3;
  long *__src;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((((param_2 == (undefined8 *)0x0) || ((code *)param_2[8] == (code *)0x0)) || (param_2[9] == 0))
     || (__src = (long *)param_2[7], __src == (long *)0x0)) {
    return 0xfffffffe;
  }
  if ((((undefined8 *)*__src == param_2) && (param_1 != (undefined8 *)0x0)) &&
     (0xffffffdf < *(int *)(__src + 1) - 0x3f54U)) {
    __dest = (long *)(*(code *)param_2[8])(param_2[10],1,0x1bf8);
    if (__dest == (long *)0x0) {
      return 0xfffffffc;
    }
    if (__src[9] == 0) {
      __dest_00 = (void *)0x0;
    }
    else {
      __dest_00 = (void *)(*(code *)param_2[8])
                                    (param_2[10],1 << (ulong)(*(uint *)(__src + 7) & 0x1f),1);
      if (__dest_00 == (void *)0x0) {
        (*(code *)param_2[9])(param_2[10],__dest);
        return 0xfffffffc;
      }
    }
    uVar6 = param_2[2];
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    uVar8 = param_2[1];
    uVar7 = *param_2;
    param_1[3] = param_2[3];
    param_1[2] = uVar6;
    param_1[5] = uVar5;
    param_1[4] = uVar4;
    param_1[1] = uVar8;
    *param_1 = uVar7;
    uVar6 = param_2[10];
    uVar5 = param_2[0xd];
    uVar4 = param_2[0xc];
    uVar10 = param_2[7];
    uVar9 = param_2[6];
    uVar8 = param_2[9];
    uVar7 = param_2[8];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar6;
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar4;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    param_1[9] = uVar8;
    param_1[8] = uVar7;
    memcpy(__dest,__src,0x1bf8);
    plVar2 = (long *)__src[0xd];
    plVar1 = __src + 0xab;
    *__dest = (long)param_1;
    if ((plVar1 <= plVar2) && (plVar2 <= (long *)((long)__src + 0x1be4U))) {
      lVar3 = __src[0xe];
      __dest[0xd] = (long)__dest + (long)plVar2 + (0x558 - (long)plVar1);
      __dest[0xe] = (long)__dest + (lVar3 - (long)plVar1) + 0x558;
    }
    __dest[0x12] = (long)__dest + (__src[0x12] - (long)plVar1) + 0x558;
    if (__dest_00 != (void *)0x0) {
      memcpy(__dest_00,(void *)__src[9],1L << ((ulong)*(uint *)(__src + 7) & 0x3f));
    }
    __dest[9] = (long)__dest_00;
    param_1[7] = __dest;
    return 0;
  }
  return 0xfffffffe;
}


