// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTextureTile
// Entry Point: 006fe638
// Size: 140 bytes
// Signature: undefined __thiscall setTextureTile(AnimalHusbandry * this, uint param_1, uint param_2, uint param_3)


/* AnimalHusbandry::setTextureTile(unsigned int, unsigned int, unsigned int) */

void __thiscall
AnimalHusbandry::setTextureTile(AnimalHusbandry *this,uint param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(this + 0x5c);
  if (uVar2 == 0) {
    return;
  }
  if (*(uint *)(*(long *)(this + 0x1f568) + 0x1a0) == param_1) {
    uVar3 = 0;
  }
  else {
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
  Animal::setTextureTile
            (*(Animal **)(this + uVar3 * 8 + 0x1f568),
             (AnimalSource *)
             (this + (ulong)*(uint *)(*(Animal **)(this + uVar3 * 8 + 0x1f568) + 0x19c) * 0x3ea0 +
                     0x68),param_2,param_3);
  return;
}


