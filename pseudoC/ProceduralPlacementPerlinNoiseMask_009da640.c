// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementPerlinNoiseMask
// Entry Point: 009da640
// Size: 320 bytes
// Signature: undefined __thiscall ProceduralPlacementPerlinNoiseMask(ProceduralPlacementPerlinNoiseMask * this, ProceduralPlacementPerlinNoiseMask * param_1)


/* ProceduralPlacementPerlinNoiseMask::ProceduralPlacementPerlinNoiseMask(ProceduralPlacementPerlinNoiseMask
   const&) */

void __thiscall
ProceduralPlacementPerlinNoiseMask::ProceduralPlacementPerlinNoiseMask
          (ProceduralPlacementPerlinNoiseMask *this,ProceduralPlacementPerlinNoiseMask *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  void *pvVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(ProceduralPlacementMask *)param_1);
  uVar3 = *(uint *)(this + 0x50);
  uVar4 = (ulong)uVar3;
  iVar5 = *(int *)(this + 0x54);
  uVar15 = *(undefined8 *)(param_1 + 0xcc);
  uVar6 = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined ***)this = &PTR__ProceduralPlacementPerlinNoiseMask_00fe2570;
  *(undefined8 *)(this + 0xcc) = uVar15;
  *(undefined4 *)(this + 0xd4) = uVar6;
                    /* try { // try from 009da690 to 009da693 has its CatchHandler @ 009da780 */
  pvVar7 = operator_new__((ulong)(iVar5 * uVar3) << 2);
  *(void **)(this + 0xd8) = pvVar7;
  if (iVar5 == 0) {
    return;
  }
  uVar8 = 0;
  iVar9 = 0;
  uVar10 = uVar4 & 0xfffffff8;
  do {
    if (uVar3 != 0) {
      pvVar11 = *(void **)(param_1 + 0xd8);
      if (uVar3 < 8) {
LAB_009da700:
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        if ((!CARRY4(uVar3 * iVar9,(uint)(uVar4 - 1))) && (uVar4 - 1 >> 0x20 == 0)) {
          uVar14 = uVar10;
          uVar12 = uVar8;
          if ((pvVar7 < (void *)((long)pvVar11 + uVar4 * 4)) &&
             (pvVar11 < (void *)((long)pvVar7 + uVar4 * 4))) goto LAB_009da700;
          do {
            uVar14 = uVar14 - 8;
            puVar1 = (undefined8 *)((long)pvVar11 + (ulong)uVar12 * 4);
            puVar2 = (undefined8 *)((long)pvVar7 + (ulong)uVar12 * 4);
            uVar15 = *puVar1;
            uVar17 = puVar1[3];
            uVar16 = puVar1[2];
            puVar2[1] = puVar1[1];
            *puVar2 = uVar15;
            puVar2[3] = uVar17;
            puVar2[2] = uVar16;
            uVar12 = uVar12 + 8;
          } while (uVar14 != 0);
          uVar14 = uVar10;
          if (uVar10 == uVar4) goto LAB_009da764;
        }
      }
      uVar12 = uVar8 + (int)uVar14;
      lVar13 = uVar4 - uVar14;
      do {
        uVar14 = (ulong)uVar12;
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + -1;
        *(undefined4 *)((long)pvVar7 + uVar14 * 4) = *(undefined4 *)((long)pvVar11 + uVar14 * 4);
      } while (lVar13 != 0);
    }
LAB_009da764:
    iVar9 = iVar9 + 1;
    if (iVar9 == iVar5) {
      return;
    }
    pvVar7 = *(void **)(this + 0xd8);
    uVar8 = uVar8 + uVar3;
  } while( true );
}


