// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deflateCopy
// Entry Point: 00e291e8
// Size: 572 bytes
// Signature: undefined deflateCopy(void)


undefined8 deflateCopy(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long *__dest;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long *__src;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((((param_2 != (undefined8 *)0x0) && (param_2[8] != 0)) && (param_2[9] != 0)) &&
     ((__src = (long *)param_2[7], __src != (long *)0x0 && ((undefined8 *)*__src == param_2)))) {
    iVar1 = *(int *)(__src + 1);
    if ((((iVar1 - 0x39U < 0x39) &&
         ((1L << ((ulong)(iVar1 - 0x39U) & 0x3f) & 0x100400400011001U) != 0)) ||
        ((iVar1 == 0x29a || (iVar1 == 0x2a)))) && (param_1 != (undefined8 *)0x0)) {
      uVar2 = param_2[8];
      uVar6 = param_2[0xb];
      uVar5 = param_2[10];
      uVar9 = param_2[7];
      uVar8 = param_2[6];
      uVar11 = param_2[0xd];
      uVar10 = param_2[0xc];
      param_1[9] = param_2[9];
      param_1[8] = uVar2;
      param_1[0xb] = uVar6;
      param_1[10] = uVar5;
      uVar7 = param_2[1];
      uVar6 = *param_2;
      uVar5 = param_2[3];
      uVar2 = param_2[2];
      uVar13 = param_2[5];
      uVar12 = param_2[4];
      param_1[0xd] = uVar11;
      param_1[0xc] = uVar10;
      param_1[1] = uVar7;
      *param_1 = uVar6;
      param_1[3] = uVar5;
      param_1[2] = uVar2;
      param_1[5] = uVar13;
      param_1[4] = uVar12;
      param_1[7] = uVar9;
      param_1[6] = uVar8;
      __dest = (long *)(*(code *)param_1[8])(param_1[10],1,0x1740);
      if (__dest != (long *)0x0) {
        param_1[7] = __dest;
        memcpy(__dest,__src,0x1740);
        pcVar4 = (code *)param_1[8];
        uVar2 = param_1[10];
        *__dest = (long)param_1;
        lVar3 = (*pcVar4)(uVar2,*(undefined4 *)(__dest + 10),2);
        uVar2 = param_1[10];
        __dest[0xc] = lVar3;
        lVar3 = (*(code *)param_1[8])(uVar2,*(undefined4 *)(__dest + 10),2);
        uVar2 = param_1[10];
        __dest[0xe] = lVar3;
        lVar3 = (*(code *)param_1[8])(uVar2,*(undefined4 *)((long)__dest + 0x84),2);
        uVar2 = param_1[10];
        __dest[0xf] = lVar3;
        lVar3 = (*(code *)param_1[8])(uVar2,*(undefined4 *)(__dest + 0x2e1),4);
        __dest[2] = lVar3;
        if (((((void *)__dest[0xc] != (void *)0x0) && (__dest[0xe] != 0)) && (__dest[0xf] != 0)) &&
           (lVar3 != 0)) {
          memcpy((void *)__dest[0xc],(void *)__src[0xc],(ulong)(uint)(*(int *)(__dest + 10) << 1));
          memcpy((void *)__dest[0xe],(void *)__src[0xe],(ulong)*(uint *)(__dest + 10) << 1);
          memcpy((void *)__dest[0xf],(void *)__src[0xf],(ulong)*(uint *)((long)__dest + 0x84) << 1);
          memcpy((void *)__dest[2],(void *)__src[2],(ulong)*(uint *)(__dest + 3));
          __dest[4] = __dest[2] + (__src[4] - __src[2]);
          __dest[0x2e2] = lVar3 + ((ulong)*(uint *)(__dest + 0x2e1) & 0xfffffffe);
          __dest[0x2e0] = __dest[2] + (ulong)*(uint *)(__dest + 0x2e1) * 3;
          __dest[0x16b] = (long)__dest + 0xd4;
          __dest[0x16e] = (long)(__dest + 0x139);
          __dest[0x171] = (long)__dest + 0xabc;
          return 0;
        }
        deflateEnd(param_1);
      }
      return 0xfffffffc;
    }
  }
  return 0xfffffffe;
}


