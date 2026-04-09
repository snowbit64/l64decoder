// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAnimalsForDetection
// Entry Point: 006fec04
// Size: 184 bytes
// Signature: undefined __thiscall getAnimalsForDetection(AnimalHusbandry * this, AnimalContext * param_1, Vector3 * param_2, float param_3, NearAnimal * param_4, uint param_5)


/* AnimalHusbandry::getAnimalsForDetection(AnimalContext*, Vector3 const&, float,
   AnimalContext::NearAnimal*, unsigned int) */

ulong __thiscall
AnimalHusbandry::getAnimalsForDetection
          (AnimalHusbandry *this,AnimalContext *param_1,Vector3 *param_2,float param_3,
          NearAnimal *param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  uVar4 = *(uint *)(this + 0x5c);
  uVar1 = 0;
  if ((uVar4 != 0) && (param_5 != 0)) {
    uVar3 = 0;
    uVar2 = 0;
    do {
      lVar5 = *(long *)(this + uVar3 * 8 + 0x1f568);
      uVar1 = uVar2;
      if ((AnimalContext *)(lVar5 + 8) != param_1) {
        fVar7 = *(float *)param_2 - *(float *)(lVar5 + 8);
        fVar9 = *(float *)(param_2 + 4) - *(float *)(lVar5 + 0xc);
        uVar8 = NEON_fmadd(fVar9,fVar9,fVar7 * fVar7);
        fVar7 = *(float *)(param_2 + 8) - *(float *)(lVar5 + 0x10);
        fVar7 = (float)NEON_fmadd(fVar7,fVar7,uVar8);
        if (fVar7 < param_3 * param_3) {
          uVar1 = (ulong)((int)uVar2 + 1);
          *(int *)(param_4 + uVar2 * 0x24 + 4) = (int)uVar3;
          uVar6 = *(undefined8 *)(lVar5 + 8);
          *(undefined4 *)(param_4 + uVar2 * 0x24 + 0x14) = *(undefined4 *)(lVar5 + 0x10);
          *(undefined8 *)(param_4 + uVar2 * 0x24 + 0xc) = uVar6;
          uVar6 = *(undefined8 *)(*(long *)(this + uVar3 * 8 + 0x1f568) + 0x14);
          *(undefined4 *)(param_4 + uVar2 * 0x24 + 0x20) =
               *(undefined4 *)(*(long *)(this + uVar3 * 8 + 0x1f568) + 0x1c);
          *(undefined8 *)(param_4 + uVar2 * 0x24 + 0x18) = uVar6;
          uVar4 = *(uint *)(this + 0x5c);
        }
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 < uVar4) && (uVar2 = uVar1, (uint)uVar1 < param_5));
  }
  return uVar1;
}


