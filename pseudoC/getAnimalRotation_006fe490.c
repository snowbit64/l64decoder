// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAnimalRotation
// Entry Point: 006fe490
// Size: 176 bytes
// Signature: undefined __thiscall getAnimalRotation(AnimalHusbandry * this, uint param_1, Vector3 * param_2)


/* AnimalHusbandry::getAnimalRotation(unsigned int, Vector3&) */

void __thiscall
AnimalHusbandry::getAnimalRotation(AnimalHusbandry *this,uint param_1,Vector3 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(this + 0x5c);
  if (uVar1 != 0) {
    if (*(uint *)(*(long *)(this + 0x1f568) + 0x1a0) == param_1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      do {
        if ((ulong)uVar1 - 1 == uVar3) {
          return;
        }
        lVar4 = uVar3 * 8;
        uVar3 = uVar3 + 1;
      } while (*(uint *)(*(long *)(this + lVar4 + 0x1f570) + 0x1a0) != param_1);
      if (uVar1 <= uVar3) {
        return;
      }
    }
    lVar4 = *(long *)(*(long *)(this + uVar3 * 8 + 0x1f568) + 0x690);
    if ((*(byte *)(lVar4 + 0x41) >> 3 & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
    }
    uVar2 = *(undefined8 *)(lVar4 + 0x13c);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lVar4 + 0x144);
    *(undefined8 *)param_2 = uVar2;
  }
  return;
}


