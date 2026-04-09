// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findTransition
// Entry Point: 007090c8
// Size: 132 bytes
// Signature: undefined __thiscall findTransition(AnimalAnimationSystemSource * this, uint param_1, uint param_2, float param_3)


/* AnimalAnimationSystemSource::findTransition(unsigned int, unsigned int, float) */

undefined4 __thiscall
AnimalAnimationSystemSource::findTransition
          (AnimalAnimationSystemSource *this,uint param_1,uint param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(uint *)(this + 0x1110) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    piVar4 = (int *)(this + 0x1160);
    fVar5 = 3.402823e+38;
    uVar2 = 0xffffffff;
    do {
      fVar6 = fVar5;
      uVar1 = uVar2;
      if ((*piVar4 == *(int *)(this + (ulong)param_1 * 0x70 + 0x310)) &&
         (piVar4[1] == *(int *)(this + (ulong)param_2 * 0x70 + 0x310))) {
        fVar7 = ABS((float)piVar4[3] - param_3);
        fVar6 = fVar7;
        if (fVar5 <= fVar7) {
          fVar6 = fVar5;
        }
        uVar1 = (int)uVar3;
        if (fVar5 <= fVar7) {
          uVar1 = uVar2;
        }
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 0x18;
      fVar5 = fVar6;
      uVar2 = uVar1;
    } while (*(uint *)(this + 0x1110) != uVar3);
  }
  return uVar1;
}


