// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: canAllStructsBeInstantiated
// Entry Point: 00c54ca0
// Size: 84 bytes
// Signature: undefined canAllStructsBeInstantiated(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_TypeSet::canAllStructsBeInstantiated() */

bool IR_TypeSet::canAllStructsBeInstantiated(void)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  long in_x0;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar2 = *(long *)(in_x0 + 0xda8) - *(long *)(in_x0 + 0xda0);
  if (lVar2 != 0) {
    uVar6 = lVar2 >> 4;
    uVar5 = 0;
    uVar7 = 1;
    do {
      cVar1 = *(char *)(*(long *)(*(long *)(*(long *)(in_x0 + 0xda0) + uVar5 * 0x10) + 8) + 0x55);
      bVar4 = uVar7 <= uVar6;
      bVar3 = uVar6 != uVar7;
      uVar5 = uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while ((cVar1 != '\0' && bVar4) && (cVar1 == '\0' || bVar3));
    return cVar1 != '\0';
  }
  return true;
}


