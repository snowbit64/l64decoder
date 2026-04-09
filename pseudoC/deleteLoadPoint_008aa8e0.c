// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteLoadPoint
// Entry Point: 008aa8e0
// Size: 292 bytes
// Signature: undefined __thiscall deleteLoadPoint(LoadSimulationRuntimeSettings * this, float param_1)


/* LoadSimulationRuntimeSettings::deleteLoadPoint(float) */

void __thiscall
LoadSimulationRuntimeSettings::deleteLoadPoint(LoadSimulationRuntimeSettings *this,float param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  pfVar2 = *(float **)(this + 0x48);
  puVar8 = *(undefined8 **)(this + 0x50);
  if ((int)((ulong)((long)puVar8 - (long)pfVar2) >> 6) == 0) {
    return;
  }
  uVar5 = 0;
  if (*pfVar2 != param_1) {
    uVar6 = (ulong)((long)puVar8 - (long)pfVar2) >> 6 & 0xffffffff;
    pfVar7 = pfVar2;
    do {
      pfVar7 = pfVar7 + 0x10;
      if (uVar6 - 1 == uVar5) {
        return;
      }
      uVar5 = uVar5 + 1;
    } while (*pfVar7 != param_1);
    if (uVar6 <= uVar5) {
      return;
    }
  }
  puVar10 = (undefined8 *)(pfVar2 + uVar5 * 0x10);
  puVar9 = puVar10;
  if (puVar10 + 8 != puVar8) {
    do {
      pvVar3 = (void *)puVar9[2];
      *puVar9 = puVar9[8];
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar9 + 9);
      if (pvVar3 != (void *)0x0) {
        puVar9[3] = pvVar3;
        operator_delete(pvVar3);
        puVar9[3] = 0;
        puVar9[4] = 0;
      }
      uVar12 = puVar9[0xb];
      uVar11 = puVar9[10];
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      uVar4 = puVar9[0xc];
      puVar9[0xc] = 0;
      puVar9[3] = uVar12;
      puVar9[2] = uVar11;
      puVar9[4] = uVar4;
      puVar10 = puVar9 + 8;
      puVar9[7] = puVar9[0xf];
      puVar1 = puVar9 + 0x10;
      puVar9[6] = puVar9[0xe];
      puVar9[5] = puVar9[0xd];
      puVar9 = puVar10;
    } while (puVar1 != puVar8);
    puVar8 = *(undefined8 **)(this + 0x50);
    if (puVar10 == puVar8) goto LAB_008aa99c;
  }
  do {
    pvVar3 = (void *)puVar8[-6];
    puVar9 = puVar8 + -8;
    if (pvVar3 != (void *)0x0) {
      puVar8[-5] = pvVar3;
      operator_delete(pvVar3);
    }
    puVar8 = puVar9;
  } while (puVar9 != puVar10);
LAB_008aa99c:
  *(undefined8 **)(this + 0x50) = puVar10;
  return;
}


