// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendMaterial
// Entry Point: 00f75488
// Size: 368 bytes
// Signature: undefined appendMaterial(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::appendMaterial() */

undefined8 * btSoftBody::appendMaterial(void)

{
  uint uVar1;
  long in_x0;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  puVar2 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x18,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if (*(int *)(in_x0 + 0x474) < 1) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  else {
    puVar5 = (undefined8 *)**(long **)(in_x0 + 0x480);
    uVar8 = puVar5[1];
    uVar7 = *puVar5;
    puVar2[2] = puVar5[2];
    puVar2[1] = uVar8;
    *puVar2 = uVar7;
  }
  uVar4 = *(uint *)(in_x0 + 0x474);
  if (uVar4 == *(uint *)(in_x0 + 0x478)) {
    uVar1 = uVar4 << 1;
    if (uVar4 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar4 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar3 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar3 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
        uVar4 = *(uint *)(in_x0 + 0x474);
      }
      if (0 < (int)uVar4) {
        lVar6 = 0;
        do {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(*(long *)(in_x0 + 0x480) + lVar6);
          lVar6 = lVar6 + 8;
        } while ((ulong)uVar4 * 8 - lVar6 != 0);
      }
      if ((*(long *)(in_x0 + 0x480) != 0) && (*(char *)(in_x0 + 0x488) != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        uVar4 = *(uint *)(in_x0 + 0x474);
      }
      *(long *)(in_x0 + 0x480) = lVar3;
      *(uint *)(in_x0 + 0x478) = uVar1;
      *(undefined *)(in_x0 + 0x488) = 1;
    }
  }
  *(undefined8 **)(*(long *)(in_x0 + 0x480) + (long)(int)uVar4 * 8) = puVar2;
  *(uint *)(in_x0 + 0x474) = uVar4 + 1;
  return puVar2;
}


