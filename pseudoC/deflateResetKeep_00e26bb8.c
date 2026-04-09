// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deflateResetKeep
// Entry Point: 00e26bb8
// Size: 272 bytes
// Signature: undefined deflateResetKeep(void)


undefined8 deflateResetKeep(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     ((plVar6 = *(long **)(param_1 + 0x38), plVar6 != (long *)0x0 && (*plVar6 == param_1)))) {
    iVar3 = *(int *)(plVar6 + 1);
    if (((iVar3 - 0x39U < 0x39) &&
        ((1L << ((ulong)(iVar3 - 0x39U) & 0x3f) & 0x100400400011001U) != 0)) ||
       ((iVar3 == 0x29a || (iVar3 == 0x2a)))) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      lVar5 = plVar6[2];
      *(undefined8 *)(param_1 + 0x10) = 0;
      iVar3 = *(int *)(plVar6 + 6);
      *(undefined4 *)(param_1 + 0x58) = 2;
      plVar6[4] = lVar5;
      plVar6[5] = 0;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
        *(int *)(plVar6 + 6) = iVar3;
      }
      uVar4 = 0x71;
      if (iVar3 != 0) {
        uVar4 = 0x2a;
      }
      uVar1 = 0x39;
      if (iVar3 != 2) {
        uVar1 = uVar4;
      }
      *(undefined4 *)(plVar6 + 1) = uVar1;
      if (iVar3 != 2) {
        uVar2 = adler32(0,0,0);
      }
      else {
        uVar2 = crc32();
      }
      *(undefined8 *)(param_1 + 0x60) = uVar2;
      *(undefined4 *)((long)plVar6 + 0x4c) = 0;
      _tr_init(plVar6);
      return 0;
    }
  }
  return 0xfffffffe;
}


