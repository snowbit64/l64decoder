// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: extractBoundary
// Entry Point: 00b64b20
// Size: 228 bytes
// Signature: undefined extractBoundary(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Brep::extractBoundary() const */

void Brep::extractBoundary(void)

{
  ushort uVar1;
  long in_x0;
  undefined8 *in_x8;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  
  lVar4 = *(long *)(in_x0 + 0x2f58);
  lVar2 = *(long *)(in_x0 + 0x2f50);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  uVar5 = (lVar4 - lVar2 >> 2) * 0xaaab;
  if ((uVar5 & 0xffff) != 0) {
    uVar3 = 0;
    puVar6 = (uint *)(lVar2 + 4);
    do {
      if (*(int *)(*(long *)(in_x0 + 0x2f68) + (ulong)*puVar6 * 8 + 4) == -1) {
        uVar7 = (uint)uVar3 & 0xffff;
        goto LAB_00b64ba8;
      }
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 3;
    } while ((uVar5 & 0xffff) != uVar3);
  }
  uVar7 = 0xffff;
LAB_00b64ba8:
  uVar5 = (ulong)uVar7;
  do {
                    /* try { // try from 00b64bc4 to 00b64bcb has its CatchHandler @ 00b64c04 */
    FUN_007204e4();
    uVar1 = *(ushort *)
             (*(long *)(in_x0 + 0x2f68) +
             (ulong)*(uint *)(*(long *)(in_x0 + 0x2f50) + uVar5 * 0xc + 4) * 8);
    uVar5 = (ulong)uVar1;
  } while (uVar1 != uVar7);
  return;
}


