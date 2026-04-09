// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateTriangle
// Entry Point: 00f9c34c
// Size: 356 bytes
// Signature: undefined __thiscall allocateTriangle(HullLibrary * this, int param_1, int param_2, int param_3)


/* HullLibrary::allocateTriangle(int, int, int) */

int * __thiscall
HullLibrary::allocateTriangle(HullLibrary *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  piVar2 = (int *)(*(code *)PTR_FUN_01048e38)(0x24,0x10);
  *piVar2 = param_1;
  piVar2[1] = param_2;
  piVar2[2] = param_3;
  *(undefined8 *)(piVar2 + 7) = 0xffffffff;
  *(undefined8 *)(piVar2 + 3) = 0xffffffffffffffff;
  uVar4 = *(uint *)(this + 4);
  uVar1 = *(uint *)(this + 8);
  piVar2[5] = -1;
  piVar2[6] = uVar4;
  if (uVar4 == uVar1) {
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
        uVar4 = *(uint *)(this + 4);
      }
      if (0 < (int)uVar4) {
        lVar5 = 0;
        do {
          *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(*(long *)(this + 0x10) + lVar5);
          lVar5 = lVar5 + 8;
        } while ((ulong)uVar4 * 8 - lVar5 != 0);
      }
      if ((*(long *)(this + 0x10) != 0) && (this[0x18] != (HullLibrary)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        uVar4 = *(uint *)(this + 4);
      }
      *(long *)(this + 0x10) = lVar3;
      *(uint *)(this + 8) = uVar1;
      this[0x18] = (HullLibrary)0x1;
    }
  }
  *(int **)(*(long *)(this + 0x10) + (long)(int)uVar4 * 8) = piVar2;
  *(uint *)(this + 4) = uVar4 + 1;
  return piVar2;
}


