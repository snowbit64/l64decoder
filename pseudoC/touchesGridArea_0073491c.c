// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: touchesGridArea
// Entry Point: 0073491c
// Size: 320 bytes
// Signature: undefined __thiscall touchesGridArea(SearchTree * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* SearchTree::touchesGridArea(unsigned int, unsigned int, unsigned int, unsigned int) const */

undefined8 __thiscall
SearchTree::touchesGridArea(SearchTree *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  if (param_1 <= param_2) {
    uVar5 = param_1 + param_3 * *(ushort *)(this + 8);
    do {
      if (param_3 <= param_4) {
        uVar6 = (ulong)(param_1 - *(ushort *)(this + 10)) & 0xffff;
        uVar2 = uVar5;
        uVar1 = param_3;
        do {
          if (((uint)uVar6 < 0xe) && ((uVar1 - *(ushort *)(this + 0xc) & 0xffff) < 0xe)) {
            uVar4 = (ulong)(uVar1 - *(ushort *)(this + 0xc)) & 0xffff;
            if (*(short *)(this + uVar6 * 0x10 + uVar4 * 0xe0 + 0xe) != -1) {
              return 1;
            }
            if (*(short *)(this + uVar6 * 0x10 + uVar4 * 0xe0 + 0x10) != -1) {
              return 1;
            }
            if (*(short *)(this + uVar6 * 0x10 + uVar4 * 0xe0 + 0x12) != -1) {
              return 1;
            }
            if (*(short *)(this + uVar6 * 0x10 + uVar4 * 0xe0 + 0x14) != -1) {
              return 1;
            }
            if (*(short *)(this + uVar6 * 0x10 + uVar4 * 0xe0 + 0x16) != -1) {
              return 1;
            }
            if (*(short *)(this + uVar6 * 0x10 + uVar4 * 0xe0 + 0x18) != -1) {
              return 1;
            }
            if (*(short *)(this + uVar6 * 0x10 + uVar4 * 0xe0 + 0x1a) != -1) {
              return 1;
            }
            sVar3 = *(short *)(this + uVar6 * 0x10 + uVar4 * 0xe0 + 0x1c);
          }
          else {
            sVar3 = *(short *)(*(long *)this + (ulong)uVar2 * 6);
          }
          if (sVar3 != -1) {
            return 1;
          }
          uVar1 = uVar1 + 1;
          uVar2 = uVar2 + *(ushort *)(this + 8);
        } while (uVar1 <= param_4);
      }
      param_1 = param_1 + 1;
      uVar5 = uVar5 + 1;
    } while (param_1 <= param_2);
  }
  return 0;
}


