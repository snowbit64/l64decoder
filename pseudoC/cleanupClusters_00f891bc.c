// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cleanupClusters
// Entry Point: 00f891bc
// Size: 280 bytes
// Signature: undefined cleanupClusters(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::cleanupClusters() */

void btSoftBody::cleanupClusters(void)

{
  uint uVar1;
  long in_x0;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (0 < *(int *)(in_x0 + 0x454)) {
    uVar6 = 0;
    do {
      uVar7 = -(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3;
      (**(code **)(**(long **)(*(long *)(in_x0 + 0x460) + uVar7) + 0x20))
                (*(undefined4 *)(in_x0 + 0x240));
      if (*(char *)(*(long *)(*(long *)(in_x0 + 0x460) + uVar7) + 0xb4) == '\0') {
        uVar2 = *(uint *)(in_x0 + 0x454);
      }
      else {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        uVar2 = *(uint *)(in_x0 + 0x454);
        iVar5 = (int)uVar6;
        uVar6 = (ulong)(iVar5 - 1);
        if (0 < (int)uVar2) {
          lVar3 = *(long *)(in_x0 + 0x460);
          uVar7 = 0;
          do {
            if (*(long *)(lVar3 + uVar7 * 8) == *(long *)(lVar3 + (long)iVar5 * 8)) {
              if ((int)uVar7 < (int)uVar2) {
                uVar2 = uVar2 - 1;
                uVar4 = *(undefined8 *)(lVar3 + uVar7 * 8);
                *(uint *)(in_x0 + 0x454) = uVar2;
                *(undefined8 *)(lVar3 + uVar7 * 8) = *(undefined8 *)(lVar3 + (ulong)uVar2 * 8);
                *(undefined8 *)(*(long *)(in_x0 + 0x460) + (ulong)uVar2 * 8) = uVar4;
              }
              break;
            }
            uVar7 = uVar7 + 1;
          } while (uVar2 != uVar7);
        }
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
    } while ((int)uVar1 < (int)uVar2);
  }
  return;
}


