// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deflatePrime
// Entry Point: 00e26dec
// Size: 308 bytes
// Signature: undefined deflatePrime(void)


undefined8 deflatePrime(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     (plVar5 = *(long **)(param_1 + 0x38), plVar5 != (long *)0x0)) {
    if (*plVar5 == param_1) {
      iVar2 = *(int *)(plVar5 + 1);
      if (((0x38 < iVar2 - 0x39U) ||
          ((1L << ((ulong)(iVar2 - 0x39U) & 0x3f) & 0x100400400011001U) == 0)) &&
         ((iVar2 != 0x29a && (iVar2 != 0x2a)))) {
        return 0xfffffffe;
      }
      if ((ulong)plVar5[0x2e2] < plVar5[4] + 2U) {
        return 0xfffffffb;
      }
      do {
        uVar3 = *(uint *)((long)plVar5 + 0x1734);
        uVar1 = param_2;
        if ((int)(0x10 - uVar3) <= (int)param_2) {
          uVar1 = 0x10 - uVar3;
        }
        *(uint *)((long)plVar5 + 0x1734) = uVar1 + uVar3;
        *(ushort *)(plVar5 + 0x2e6) =
             *(ushort *)(plVar5 + 0x2e6) |
             (ushort)((param_3 & (-1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU)) <<
                     (ulong)(uVar3 & 0x1f));
        _tr_flush_bits(plVar5);
        uVar4 = 0;
        param_3 = (int)param_3 >> (uVar1 & 0x1f);
        param_2 = param_2 - uVar1;
      } while (param_2 != 0);
    }
    else {
      uVar4 = 0xfffffffe;
    }
    return uVar4;
  }
  return 0xfffffffe;
}


