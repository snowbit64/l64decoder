// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNode
// Entry Point: 00dd96d0
// Size: 208 bytes
// Signature: undefined __thiscall getNode(dtNodePool * this, uint param_1)


/* dtNodePool::getNode(unsigned int) */

long __thiscall dtNodePool::getNode(dtNodePool *this,uint param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar1 = (param_1 << 0xf ^ 0xffffffff) + param_1;
  uVar1 = (uVar1 ^ uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar6 = (ulong)(*(int *)(this + 0x1c) - 1U & (uVar1 ^ uVar1 >> 0x10));
  lVar5 = *(long *)this;
  uVar4 = *(ushort *)(*(long *)(this + 8) + uVar6 * 2);
  if (uVar4 != 0xffff) {
    do {
      uVar8 = (ulong)uVar4;
      if (*(uint *)(lVar5 + uVar8 * 0x1c + 0x18) == param_1) {
        return lVar5 + uVar8 * 0x1c;
      }
      uVar4 = *(ushort *)(*(long *)(this + 0x10) + uVar8 * 2);
    } while (uVar4 != 0xffff);
  }
  uVar1 = *(uint *)(this + 0x20);
  if ((int)uVar1 < *(int *)(this + 0x18)) {
    lVar7 = uVar6 * 2;
    lVar5 = lVar5 + ((ulong)uVar1 & 0xffff) * 0x1c;
    *(uint *)(this + 0x20) = uVar1 + 1;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined4 *)(lVar5 + 0xc) = 0;
    lVar2 = *(long *)(this + 8);
    lVar3 = *(long *)(this + 0x10);
    *(uint *)(lVar5 + 0x18) = param_1;
    *(undefined2 *)(lVar3 + ((ulong)uVar1 & 0xffff) * 2) = *(undefined2 *)(lVar2 + lVar7);
    *(short *)(lVar2 + lVar7) = (short)uVar1;
    return lVar5;
  }
  return 0;
}


