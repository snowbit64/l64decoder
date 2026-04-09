// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseCluster
// Entry Point: 00f78a40
// Size: 400 bytes
// Signature: undefined __thiscall releaseCluster(btSoftBody * this, int param_1)


/* btSoftBody::releaseCluster(int) */

void __thiscall btSoftBody::releaseCluster(btSoftBody *this,int param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)(this + 0x5e8) + (long)param_1 * 8);
  lVar5 = *(long *)(lVar4 + 0x180);
  if (lVar5 != 0) {
    FUN_00f424e4(this + 0x578,lVar5);
    if (*(long *)(this + 0x580) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(long *)(this + 0x580) = lVar5;
    *(int *)(this + 0x58c) = *(int *)(this + 0x58c) + -1;
  }
  if (*(long *)(lVar4 + 0x50) != 0 && *(char *)(lVar4 + 0x58) != '\0') {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined4 *)(lVar4 + 0x44) = 0;
  *(undefined4 *)(lVar4 + 0x48) = 0;
  *(undefined *)(lVar4 + 0x58) = 1;
  if ((*(long *)(lVar4 + 0x30) != 0) && (*(char *)(lVar4 + 0x38) != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined *)(lVar4 + 0x38) = 1;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined4 *)(lVar4 + 0x24) = 0;
  *(undefined4 *)(lVar4 + 0x28) = 0;
  if ((*(long *)(lVar4 + 0x10) != 0) && (*(char *)(lVar4 + 0x18) != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined4 *)(lVar4 + 4) = 0;
  *(undefined4 *)(lVar4 + 8) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  gNumAlignedFree = gNumAlignedFree + 1;
  *(undefined *)(lVar4 + 0x18) = 1;
  (*(code *)PTR_FUN_01048e40)(lVar4);
  uVar1 = *(uint *)(this + 0x5dc);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    lVar5 = *(long *)(this + 0x5e8);
    do {
      if (*(long *)(lVar5 + uVar2 * 8) == lVar4) {
        if ((int)uVar1 <= (int)uVar2) {
          return;
        }
        lVar4 = (ulong)(uVar1 - 1) * 8;
        uVar3 = *(undefined8 *)(lVar5 + uVar2 * 8);
        *(uint *)(this + 0x5dc) = uVar1 - 1;
        *(undefined8 *)(lVar5 + uVar2 * 8) = *(undefined8 *)(lVar5 + lVar4);
        *(undefined8 *)(*(long *)(this + 0x5e8) + lVar4) = uVar3;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}


