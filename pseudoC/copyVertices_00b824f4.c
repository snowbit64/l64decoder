// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyVertices
// Entry Point: 00b824f4
// Size: 540 bytes
// Signature: undefined __thiscall copyVertices(TriangleSet * this, uint param_1, TriangleSet * param_2, uint param_3, uint param_4)


/* WARNING: Type propagation algorithm not settling */
/* TriangleSet::copyVertices(unsigned int, TriangleSet const*, unsigned int, unsigned int) */

void __thiscall
TriangleSet::copyVertices
          (TriangleSet *this,uint param_1,TriangleSet *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = (ulong)param_4;
  uVar1 = *(uint *)(param_2 + 0xc) & *(uint *)(this + 0xc);
  if ((uVar1 & 1) != 0) {
    memcpy((void *)(*(long *)(this + 0x38) + (ulong)(param_1 * 3) * 4),
           (void *)(*(long *)(param_2 + 0x38) + (ulong)(param_3 * 3) * 4),uVar4 * 0xc);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    memcpy((void *)(*(long *)(this + 0x40) + (ulong)(param_1 << 2) * 4),
           (void *)(*(long *)(param_2 + 0x40) + (ulong)(param_3 << 2) * 4),uVar4 << 4);
  }
  uVar2 = param_1 << 1;
  uVar3 = param_3 << 1;
  if ((uVar1 >> 1 & 1) != 0) {
    memcpy((void *)(*(long *)(this + 0x18) + (ulong)uVar2 * 4),
           (void *)(*(long *)(param_2 + 0x18) + (ulong)uVar3 * 4),uVar4 << 3);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    memcpy((void *)(*(long *)(this + 0x20) + (ulong)uVar2 * 4),
           (void *)(*(long *)(param_2 + 0x20) + (ulong)uVar3 * 4),uVar4 << 3);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    memcpy((void *)(*(long *)(this + 0x28) + (ulong)uVar2 * 4),
           (void *)(*(long *)(param_2 + 0x28) + (ulong)uVar3 * 4),uVar4 << 3);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    memcpy((void *)(*(long *)(this + 0x30) + (ulong)uVar2 * 4),
           (void *)(*(long *)(param_2 + 0x30) + (ulong)uVar3 * 4),uVar4 << 3);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    memcpy((void *)(*(long *)(this + 0x48) + (ulong)(param_1 << 2) * 4),
           (void *)(*(long *)(param_2 + 0x48) + (ulong)(param_3 << 2) * 4),uVar4 << 4);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    uVar3 = 4;
    uVar2 = uVar3;
    if ((*(uint *)(this + 0xc) & 0x100) != 0) {
      uVar2 = 1;
    }
    if (((byte)param_2[0xd] & 1) != 0) {
      uVar3 = 1;
    }
    if (uVar2 == uVar3) {
      if ((*(uint *)(this + 0xc) >> 8 & 1) == 0) {
        uVar5 = (ulong)(uVar2 * param_1);
        uVar6 = (ulong)(uVar2 * param_3);
        memcpy((void *)(*(long *)(this + 0x50) + uVar5 * 4),
               (void *)(*(long *)(param_2 + 0x50) + uVar6 * 4),(uVar2 << 2) * uVar4);
      }
      else {
        uVar5 = (ulong)(uVar2 * param_1);
        uVar6 = (ulong)(uVar2 * param_3);
      }
      memcpy((void *)(*(long *)(this + 0x58) + uVar5),(void *)(*(long *)(param_2 + 0x58) + uVar6),
             uVar4 * uVar2);
    }
  }
  if ((uVar1 >> 9 & 1) != 0) {
    memcpy((void *)(*(long *)(this + 0x60) + (ulong)param_1 * 4),
           (void *)(*(long *)(param_2 + 0x60) + (ulong)param_3 * 4),uVar4 << 2);
    return;
  }
  return;
}


