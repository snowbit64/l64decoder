// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Process
// Entry Point: 00f43224
// Size: 272 bytes
// Signature: undefined __thiscall Process(btDbvtNodeEnumerator * this, btDbvtNode * param_1)


/* btDbvtNodeEnumerator::Process(btDbvtNode const*) */

undefined8 __thiscall btDbvtNodeEnumerator::Process(btDbvtNodeEnumerator *this,btDbvtNode *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *(uint *)(this + 0xc);
  if (uVar3 == *(uint *)(this + 0x10)) {
    uVar1 = uVar3 << 1;
    if (uVar3 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar3 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar2 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar2 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
        uVar3 = *(uint *)(this + 0xc);
      }
      if (0 < (int)uVar3) {
        lVar4 = 0;
        do {
          *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(*(long *)(this + 0x18) + lVar4);
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar3 * 8 - lVar4 != 0);
      }
      if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btDbvtNodeEnumerator)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        uVar3 = *(uint *)(this + 0xc);
      }
      *(long *)(this + 0x18) = lVar2;
      *(uint *)(this + 0x10) = uVar1;
      this[0x20] = (btDbvtNodeEnumerator)0x1;
    }
  }
  *(btDbvtNode **)(*(long *)(this + 0x18) + (long)(int)uVar3 * 8) = param_1;
  *(uint *)(this + 0xc) = uVar3 + 1;
  return 1;
}


