// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deflateParams
// Entry Point: 00e26f20
// Size: 456 bytes
// Signature: undefined deflateParams(void)


undefined8 deflateParams(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined8 uVar7;
  void *__s;
  ulong uVar8;
  long *plVar9;
  
  if ((((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) ||
     (plVar9 = *(long **)(param_1 + 0x38), plVar9 == (long *)0x0)) {
    return 0xfffffffe;
  }
  if (*plVar9 == param_1) {
    iVar3 = *(int *)(plVar9 + 1);
    if (((0x38 < iVar3 - 0x39U) ||
        ((1L << ((ulong)(iVar3 - 0x39U) & 0x3f) & 0x100400400011001U) == 0)) &&
       ((iVar3 != 0x29a && (iVar3 != 0x2a)))) {
      return 0xfffffffe;
    }
    uVar2 = 6;
    if (param_2 != 0xffffffff) {
      uVar2 = param_2;
    }
    if ((param_3 < 5) && (uVar2 < 10)) {
      if (((*(uint *)(plVar9 + 0x19) != param_3) ||
          ((&PTR_FUN_01013b98)[(long)*(int *)((long)plVar9 + 0xc4) * 2] !=
           (&PTR_FUN_01013b98)[(ulong)uVar2 * 2])) && (plVar9[0x2e7] != 0)) {
        uVar7 = deflate(param_1,5);
        if ((int)uVar7 == -2) {
          return uVar7;
        }
        if (*(int *)(param_1 + 0x20) == 0) {
          return 0xfffffffb;
        }
      }
      if (*(uint *)((long)plVar9 + 0xc4) != uVar2) {
        if ((*(uint *)((long)plVar9 + 0xc4) == 0) && (*(int *)(plVar9 + 0x2e5) != 0)) {
          if (*(int *)(plVar9 + 0x2e5) == 1) {
            FUN_00e27ee0(plVar9);
            __s = (void *)plVar9[0xf];
            uVar8 = (ulong)(*(int *)((long)plVar9 + 0x84) - 1);
          }
          else {
            __s = (void *)plVar9[0xf];
            uVar8 = (ulong)(*(int *)((long)plVar9 + 0x84) - 1);
            *(undefined2 *)((long)__s + uVar8 * 2) = 0;
          }
          memset(__s,0,uVar8 << 1);
          *(undefined4 *)(plVar9 + 0x2e5) = 0;
        }
        *(uint *)((long)plVar9 + 0xc4) = uVar2;
        lVar1 = (ulong)uVar2 * 0x10;
        uVar4 = *(ushort *)(&DAT_01013b94 + lVar1);
        uVar5 = *(ushort *)(&DAT_01013b92 + lVar1);
        uVar6 = *(ushort *)(&DAT_01013b96 + lVar1);
        *(uint *)((long)plVar9 + 0xcc) = (uint)*(ushort *)(&DAT_01013b90 + lVar1);
        *(uint *)(plVar9 + 0x1a) = (uint)uVar4;
        *(uint *)((long)plVar9 + 0xbc) = (uint)uVar6;
        *(uint *)(plVar9 + 0x18) = (uint)uVar5;
      }
      *(uint *)(plVar9 + 0x19) = param_3;
      return 0;
    }
  }
  return 0xfffffffe;
}


