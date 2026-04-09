// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateFeedingPlace
// Entry Point: 006fda90
// Size: 412 bytes
// Signature: undefined __thiscall updateFeedingPlace(AnimalHusbandry * this, uint param_1, float param_2)


/* AnimalHusbandry::updateFeedingPlace(unsigned int, float) */

void __thiscall
AnimalHusbandry::updateFeedingPlace(AnimalHusbandry *this,uint param_1,float param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  if (param_1 < *(uint *)(this + 0x1f7b0)) {
    uVar5 = (ulong)param_1;
    if ((((*(int *)(this + (ulong)param_1 * 0x24 + 0x1f7d0) == 0) &&
         (this[uVar5 * 0x24 + 0x1f7d4] == (AnimalHusbandry)0x0)) &&
        (*(float *)(this + uVar5 * 0x24 + 0x1f7cc) < param_2)) && (*(uint *)(this + 0x5c) != 0)) {
      uVar4 = 0;
      do {
        plVar1 = (long *)(this + (ulong)uVar4 * 8 + 0x1f568);
        lVar3 = *plVar1;
        if (*(char *)(lVar3 + 0x180) != '\0') {
          fVar6 = *(float *)(this + uVar5 * 0x24 + 0x1f7b8) - *(float *)(lVar3 + 0xc);
          fVar8 = *(float *)(this + (ulong)param_1 * 0x24 + 0x1f7b4) - *(float *)(lVar3 + 8);
          fVar9 = *(float *)(this + uVar5 * 0x24 + 0x1f7bc) - *(float *)(lVar3 + 0x10);
          uVar7 = NEON_fmadd(fVar8,fVar8,fVar6 * fVar6);
          fVar6 = (float)NEON_fmadd(fVar9,fVar9,uVar7);
          if (fVar6 < 3.402823e+38) {
            *(uint *)(lVar3 + 0x184) = param_1;
            uVar2 = *(undefined8 *)(this + (ulong)param_1 * 0x24 + 0x1f7b4);
            *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(this + (ulong)param_1 * 0x24 + 0x1f7bc);
            *(undefined8 *)(lVar3 + 0x20) = uVar2;
            lVar3 = *plVar1;
            uVar2 = *(undefined8 *)(this + uVar5 * 0x24 + 0x1f7c0);
            *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(this + uVar5 * 0x24 + 0x1f7c8);
            *(undefined8 *)(lVar3 + 0x2c) = uVar2;
            lVar3 = *plVar1;
            *(undefined *)(lVar3 + 0x180) = 0;
            *(undefined *)(lVar3 + 0x188) = 1;
            Animal::resetBehavior();
            this[uVar5 * 0x24 + 0x1f7d4] = (AnimalHusbandry)0x1;
          }
          break;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(this + 0x5c) != uVar4);
    }
    *(float *)(this + uVar5 * 0x24 + 0x1f7cc) = param_2;
  }
  return;
}


