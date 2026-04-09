// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFreeTask
// Entry Point: 0072a414
// Size: 224 bytes
// Signature: undefined getFreeTask(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationMapGenerator::getFreeTask() */

long VehicleNavigationMapGenerator::getFreeTask(void)

{
  long in_x0;
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(in_x0 + 0x118);
  lVar1 = *(long *)(in_x0 + uVar3 * 0x50 + 0x68);
  if ((((((*(char *)(lVar1 + 0x39) == '\0') &&
         (lVar1 = *(long *)(in_x0 + uVar3 * 0x50 + 0x70), *(char *)(lVar1 + 0x39) == '\0')) &&
        (lVar1 = *(long *)(in_x0 + uVar3 * 0x50 + 0x78), *(char *)(lVar1 + 0x39) == '\0')) &&
       ((lVar1 = *(long *)(in_x0 + uVar3 * 0x50 + 0x80), *(char *)(lVar1 + 0x39) == '\0' &&
        (lVar1 = *(long *)(in_x0 + uVar3 * 0x50 + 0x88), *(char *)(lVar1 + 0x39) == '\0')))) &&
      ((lVar1 = *(long *)(in_x0 + uVar3 * 0x50 + 0x90), *(char *)(lVar1 + 0x39) == '\0' &&
       ((lVar1 = *(long *)(in_x0 + uVar3 * 0x50 + 0x98), *(char *)(lVar1 + 0x39) == '\0' &&
        (lVar1 = *(long *)(in_x0 + uVar3 * 0x50 + 0xa0), *(char *)(lVar1 + 0x39) == '\0')))))) &&
     (lVar1 = *(long *)(in_x0 + uVar3 * 0x50 + 0xa8), *(char *)(lVar1 + 0x39) == '\0')) {
    lVar2 = *(long *)(in_x0 + uVar3 * 0x50 + 0xb0);
    lVar1 = 0;
    if (*(char *)(lVar2 + 0x39) != '\0') {
      lVar1 = lVar2;
    }
    return lVar1;
  }
  return lVar1;
}


