// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findNode
// Entry Point: 00dd9648
// Size: 136 bytes
// Signature: undefined __thiscall findNode(dtNodePool * this, uint param_1)


/* dtNodePool::findNode(unsigned int) */

long __thiscall dtNodePool::findNode(dtNodePool *this,uint param_1)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  
  uVar1 = (param_1 << 0xf ^ 0xffffffff) + param_1;
  uVar1 = (uVar1 ^ uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar2 = *(ushort *)
           (*(long *)(this + 8) + (ulong)(*(int *)(this + 0x1c) - 1U & (uVar1 ^ uVar1 >> 0x10)) * 2)
  ;
  if (uVar2 != 0xffff) {
    do {
      uVar3 = (ulong)uVar2;
      if (*(uint *)(*(long *)this + uVar3 * 0x1c + 0x18) == param_1) {
        return *(long *)this + uVar3 * 0x1c;
      }
      uVar2 = *(ushort *)(*(long *)(this + 0x10) + uVar3 * 2);
    } while (uVar2 != 0xffff);
  }
  return 0;
}


