// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAnimalPosition
// Entry Point: 006fe410
// Size: 128 bytes
// Signature: undefined __thiscall getAnimalPosition(AnimalHusbandry * this, uint param_1, Vector3 * param_2)


/* AnimalHusbandry::getAnimalPosition(unsigned int, Vector3&) const */

void __thiscall
AnimalHusbandry::getAnimalPosition(AnimalHusbandry *this,uint param_1,Vector3 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(this + 0x5c);
  if (uVar2 != 0) {
    if (*(uint *)(*(long *)(this + 0x1f568) + 0x1a0) == param_1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        if ((ulong)uVar2 - 1 == uVar4) {
          return;
        }
        lVar1 = uVar4 * 8;
        uVar4 = uVar4 + 1;
      } while (*(uint *)(*(long *)(this + lVar1 + 0x1f570) + 0x1a0) != param_1);
      if (uVar2 <= uVar4) {
        return;
      }
    }
    uVar3 = *(undefined8 *)(*(long *)(this + uVar4 * 8 + 0x1f568) + 8);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*(long *)(this + uVar4 * 8 + 0x1f568) + 0x10);
    *(undefined8 *)param_2 = uVar3;
  }
  return;
}


