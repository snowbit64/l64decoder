// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteAabbTree
// Entry Point: 00f609d8
// Size: 180 bytes
// Signature: undefined deleteAabbTree(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btCompoundShape::deleteAabbTree() */

void btCompoundShape::deleteAabbTree(void)

{
  uint uVar1;
  long in_x0;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(btDbvt **)(in_x0 + 0x60) != (btDbvt *)0x0) {
    btDbvt::~btDbvt(*(btDbvt **)(in_x0 + 0x60));
    if (*(long *)(in_x0 + 0x60) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    uVar1 = *(uint *)(in_x0 + 0x24);
    uVar2 = (ulong)uVar1;
    *(undefined8 *)(in_x0 + 0x60) = 0;
    if (0 < (int)uVar1) {
      lVar4 = *(long *)(in_x0 + 0x30);
      if (uVar1 == 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar2 & 0xfffffffe;
        puVar5 = (undefined8 *)(lVar4 + 0xa8);
        uVar7 = uVar6;
        do {
          uVar7 = uVar7 - 2;
          puVar5[-0xb] = 0;
          *puVar5 = 0;
          puVar5 = puVar5 + 0x16;
        } while (uVar7 != 0);
        if (uVar6 == uVar2) {
          return;
        }
      }
      lVar3 = uVar2 - uVar6;
      puVar5 = (undefined8 *)(lVar4 + uVar6 * 0x58 + 0x50);
      do {
        lVar3 = lVar3 + -1;
        *puVar5 = 0;
        puVar5 = puVar5 + 0xb;
      } while (lVar3 != 0);
    }
  }
  return;
}


