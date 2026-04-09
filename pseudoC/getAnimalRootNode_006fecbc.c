// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAnimalRootNode
// Entry Point: 006fecbc
// Size: 148 bytes
// Signature: undefined __thiscall getAnimalRootNode(AnimalHusbandry * this, uint param_1)


/* AnimalHusbandry::getAnimalRootNode(unsigned int) */

undefined8 __thiscall AnimalHusbandry::getAnimalRootNode(AnimalHusbandry *this,uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  if (((this[0x50] == (AnimalHusbandry)0x0) || (this[0x51] == (AnimalHusbandry)0x0)) ||
     (uVar2 = *(uint *)(this + 0x5c), uVar2 == 0)) {
    return 0;
  }
  if (*(uint *)(*(long *)(this + 0x1f568) + 0x1a0) == param_1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      if ((ulong)uVar2 - 1 == uVar3) {
        return 0;
      }
      lVar1 = uVar3 * 8;
      uVar3 = uVar3 + 1;
    } while (*(uint *)(*(long *)(this + lVar1 + 0x1f570) + 0x1a0) != param_1);
    if (uVar2 <= uVar3) {
      return 0;
    }
  }
  return *(undefined8 *)(*(long *)(this + uVar3 * 8 + 0x1f568) + 0x6a8);
}


