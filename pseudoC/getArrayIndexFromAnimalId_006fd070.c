// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArrayIndexFromAnimalId
// Entry Point: 006fd070
// Size: 132 bytes
// Signature: undefined __thiscall getArrayIndexFromAnimalId(AnimalHusbandry * this, uint param_1, uint * param_2)


/* AnimalHusbandry::getArrayIndexFromAnimalId(unsigned int, unsigned int&) const */

bool __thiscall
AnimalHusbandry::getArrayIndexFromAnimalId(AnimalHusbandry *this,uint param_1,uint *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(this + 0x5c);
  if (*(uint *)(this + 0x5c) == 0) {
    return false;
  }
  if (*(uint *)(*(long *)(this + 0x1f568) + 0x1a0) == param_1) {
    *param_2 = 0;
    return true;
  }
  uVar2 = 0;
  do {
    if (uVar3 - 1 == uVar2) {
      return uVar2 + 1 < uVar3;
    }
    lVar1 = uVar2 * 8;
    uVar2 = uVar2 + 1;
  } while (*(uint *)(*(long *)(this + lVar1 + 0x1f570) + 0x1a0) != param_1);
  *param_2 = (uint)uVar2;
  return uVar2 < uVar3;
}


