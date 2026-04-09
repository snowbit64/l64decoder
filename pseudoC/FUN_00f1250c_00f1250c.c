// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1250c
// Entry Point: 00f1250c
// Size: 232 bytes
// Signature: undefined FUN_00f1250c(void)


void FUN_00f1250c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  void *__s;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  void **ppvVar7;
  
  if (-1 < (int)param_2) {
    __s = (void *)FUN_00f10090(param_1,(ulong)param_2 << 3,0);
    ppvVar7 = *(void ***)(param_1 + 0x18);
    if (param_2 != 0) {
      memset(__s,0,(ulong)param_2 << 3);
    }
    uVar2 = *(uint *)((long)ppvVar7 + 0xc);
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        lVar3 = *(long *)((long)*ppvVar7 + uVar4 * 8);
        while (lVar3 != 0) {
          lVar6 = *(long *)(lVar3 + 8);
          uVar1 = *(uint *)(lVar3 + 0x10) & param_2 - 1;
          uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          *(undefined8 *)(lVar3 + 8) = *(undefined8 *)((long)__s + uVar5);
          *(long *)((long)__s + uVar5) = lVar3;
          lVar3 = lVar6;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar2);
    }
    FUN_00f1043c(param_1,*ppvVar7,(long)(int)uVar2 << 3,0);
    *(uint *)((long)ppvVar7 + 0xc) = param_2;
    *ppvVar7 = __s;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f1007c(param_1);
}


