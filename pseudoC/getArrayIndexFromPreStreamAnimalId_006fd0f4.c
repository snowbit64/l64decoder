// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArrayIndexFromPreStreamAnimalId
// Entry Point: 006fd0f4
// Size: 124 bytes
// Signature: undefined __thiscall getArrayIndexFromPreStreamAnimalId(AnimalHusbandry * this, uint param_1, uint * param_2)


/* AnimalHusbandry::getArrayIndexFromPreStreamAnimalId(unsigned int, unsigned int&) const */

bool __thiscall
AnimalHusbandry::getArrayIndexFromPreStreamAnimalId
          (AnimalHusbandry *this,uint param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint *puVar4;
  
  uVar3 = (ulong)*(uint *)(this + 0x60);
  if (*(uint *)(this + 0x60) == 0) {
    return false;
  }
  if (*(uint *)(this + 0x1f634) == param_1) {
    *param_2 = 0;
    return true;
  }
  uVar2 = 0;
  puVar4 = (uint *)(this + 0x1f63c);
  do {
    if (uVar3 - 1 == uVar2) {
      return uVar2 + 1 < uVar3;
    }
    uVar1 = *puVar4;
    uVar2 = uVar2 + 1;
    puVar4 = puVar4 + 2;
  } while (uVar1 != param_1);
  *param_2 = (uint)uVar2;
  return uVar2 < uVar3;
}


