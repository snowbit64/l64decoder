// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocate
// Entry Point: 00f570dc
// Size: 276 bytes
// Signature: undefined __thiscall allocate(btUnionFind * this, int param_1)


/* btUnionFind::allocate(int) */

void __thiscall btUnionFind::allocate(btUnionFind *this,int param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(uint *)(this + 4);
  if ((int)uVar1 < param_1) {
    lVar4 = (long)(int)uVar1;
    if (*(int *)(this + 8) < param_1) {
      if (param_1 == 0) {
        lVar2 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar2 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 |
                           (ulong)(uint)param_1 << 3,0x10);
        uVar1 = *(uint *)(this + 4);
      }
      if (0 < (int)uVar1) {
        lVar3 = 0;
        do {
          *(undefined8 *)(lVar2 + lVar3) = *(undefined8 *)(*(long *)(this + 0x10) + lVar3);
          lVar3 = lVar3 + 8;
        } while ((ulong)uVar1 * 8 - lVar3 != 0);
      }
      if ((*(long *)(this + 0x10) != 0) && (this[0x18] != (btUnionFind)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x10) = lVar2;
      *(int *)(this + 8) = param_1;
      this[0x18] = (btUnionFind)0x1;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x10) + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (param_1 != lVar4);
  }
  *(int *)(this + 4) = param_1;
  return;
}


