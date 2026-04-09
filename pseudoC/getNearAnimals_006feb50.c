// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNearAnimals
// Entry Point: 006feb50
// Size: 180 bytes
// Signature: undefined __thiscall getNearAnimals(AnimalHusbandry * this, AnimalContext * param_1, NearAnimal * param_2, uint param_3, float param_4)


/* AnimalHusbandry::getNearAnimals(AnimalContext*, AnimalContext::NearAnimal*, unsigned int, float)
    */

ulong __thiscall
AnimalHusbandry::getNearAnimals
          (AnimalHusbandry *this,AnimalContext *param_1,NearAnimal *param_2,uint param_3,
          float param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  uVar3 = *(uint *)(this + 0x5c);
  uVar1 = 0;
  if ((uVar3 != 0) && (param_3 != 0)) {
    uVar2 = 0;
    uVar1 = 0;
    do {
      lVar5 = *(long *)(this + uVar2 * 8 + 0x1f568);
      if ((AnimalContext *)(lVar5 + 8) != param_1) {
        fVar7 = *(float *)param_1 - *(float *)(lVar5 + 8);
        fVar9 = *(float *)(param_1 + 4) - *(float *)(lVar5 + 0xc);
        uVar8 = NEON_fmadd(fVar9,fVar9,fVar7 * fVar7);
        fVar7 = *(float *)(param_1 + 8) - *(float *)(lVar5 + 0x10);
        fVar7 = (float)NEON_fmadd(fVar7,fVar7,uVar8);
        if (fVar7 < (param_4 + param_4) * (param_4 + param_4)) {
          puVar4 = (undefined4 *)(param_2 + uVar1 * 0x24);
          uVar8 = *(undefined4 *)(lVar5 + 0x19c);
          uVar1 = (ulong)((int)uVar1 + 1);
          *(undefined *)(puVar4 + 2) = *(undefined *)(lVar5 + 0x1a5);
          *puVar4 = uVar8;
          puVar4[1] = (int)uVar2;
          uVar6 = *(undefined8 *)(lVar5 + 8);
          puVar4[5] = *(undefined4 *)(lVar5 + 0x10);
          *(undefined8 *)(puVar4 + 3) = uVar6;
          uVar3 = *(uint *)(this + 0x5c);
        }
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 < uVar3) && ((uint)uVar1 < param_3));
  }
  return uVar1;
}


