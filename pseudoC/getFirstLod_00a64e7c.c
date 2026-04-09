// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFirstLod
// Entry Point: 00a64e7c
// Size: 128 bytes
// Signature: undefined getFirstLod(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageSystemDesc::Layer::getFirstLod() const */

long FoliageSystemDesc::Layer::getFirstLod(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long in_x0;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(in_x0 + 0x60) - *(long *)(in_x0 + 0x58);
  if (lVar3 != 0) {
    uVar4 = 0;
    uVar5 = (lVar3 >> 3) * 0x4ec4ec4ec4ec4ec5;
    do {
      lVar6 = *(long *)(in_x0 + 0x58) + uVar4 * 0x68;
      lVar3 = *(long *)(lVar6 + 0x50);
      lVar6 = *(long *)(lVar6 + 0x58) - lVar3;
      if (lVar6 != 0) {
        uVar7 = 0;
        do {
          lVar1 = lVar3 + uVar7 * 0x20;
          lVar2 = *(long *)(lVar1 + 8);
          if (*(long *)(lVar1 + 0x10) != lVar2) {
            if (lVar2 != 0) {
              return lVar2;
            }
            break;
          }
          uVar7 = (ulong)((int)uVar7 + 1);
        } while (uVar7 < (ulong)(lVar6 >> 5));
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 <= uVar5 && uVar5 - uVar4 != 0);
  }
  return 0;
}


