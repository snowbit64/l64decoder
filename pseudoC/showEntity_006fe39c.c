// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: showEntity
// Entry Point: 006fe39c
// Size: 116 bytes
// Signature: undefined __thiscall showEntity(AnimalHusbandry * this, uint param_1)


/* AnimalHusbandry::showEntity(unsigned int) */

void __thiscall AnimalHusbandry::showEntity(AnimalHusbandry *this,uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(this + 0x5c);
  if (uVar2 == 0) {
    return;
  }
  if (*(uint *)(*(long *)(this + 0x1f568) + 0x1a0) != param_1) {
    uVar3 = 0;
    do {
      if ((ulong)uVar2 - 1 == uVar3) {
        return;
      }
      lVar1 = uVar3 * 8;
      uVar3 = uVar3 + 1;
    } while (*(uint *)(*(long *)(this + lVar1 + 0x1f570) + 0x1a0) != param_1);
    if (uVar2 <= uVar3) {
      return;
    }
  }
  Animal::show();
  return;
}


