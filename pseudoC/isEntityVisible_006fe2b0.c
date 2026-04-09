// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isEntityVisible
// Entry Point: 006fe2b0
// Size: 120 bytes
// Signature: undefined __thiscall isEntityVisible(AnimalHusbandry * this, uint param_1)


/* AnimalHusbandry::isEntityVisible(unsigned int) const */

undefined8 __thiscall AnimalHusbandry::isEntityVisible(AnimalHusbandry *this,uint param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(this + 0x5c);
  if (uVar2 == 0) {
    return 0;
  }
  if (*(uint *)(*(long *)(this + 0x1f568) + 0x1a0) != param_1) {
    uVar4 = 0;
    do {
      if ((ulong)uVar2 - 1 == uVar4) {
        return 0;
      }
      lVar1 = uVar4 * 8;
      uVar4 = uVar4 + 1;
    } while (*(uint *)(*(long *)(this + lVar1 + 0x1f570) + 0x1a0) != param_1);
    if (uVar2 <= uVar4) {
      return 0;
    }
  }
  uVar3 = Animal::isVisible();
  return uVar3;
}


