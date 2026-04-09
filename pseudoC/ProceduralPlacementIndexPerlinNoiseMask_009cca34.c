// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementIndexPerlinNoiseMask
// Entry Point: 009cca34
// Size: 460 bytes
// Signature: undefined __thiscall ProceduralPlacementIndexPerlinNoiseMask(ProceduralPlacementIndexPerlinNoiseMask * this, ProceduralPlacementIndexPerlinNoiseMask * param_1)


/* ProceduralPlacementIndexPerlinNoiseMask::ProceduralPlacementIndexPerlinNoiseMask(ProceduralPlacementIndexPerlinNoiseMask
   const&) */

void __thiscall
ProceduralPlacementIndexPerlinNoiseMask::ProceduralPlacementIndexPerlinNoiseMask
          (ProceduralPlacementIndexPerlinNoiseMask *this,
          ProceduralPlacementIndexPerlinNoiseMask *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(ProceduralPlacementMask *)param_1);
  uVar16 = *(ulong *)(param_1 + 200);
  uVar18 = *(undefined4 *)(param_1 + 0xd0);
  uVar14 = uVar16 & 0xffffffff;
  *(ulong *)(this + 200) = uVar16;
  *(undefined4 *)(this + 0xd0) = uVar18;
  *(undefined ***)this = &PTR__ProceduralPlacementIndexPerlinNoiseMask_00fe2168;
  uVar15 = uVar14 * 4;
                    /* try { // try from 009cca78 to 009ccadf has its CatchHandler @ 009ccc00 */
  pvVar4 = operator_new__(uVar15);
  *(void **)(this + 0xd8) = pvVar4;
  if ((uint)uVar16 != 0) {
    pvVar6 = *(void **)(param_1 + 0xd8);
    if (((uint)uVar16 < 8) ||
       ((pvVar4 < (void *)((long)pvVar6 + uVar15) && (pvVar6 < (void *)((long)pvVar4 + uVar15))))) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar16 & 0xfffffff8;
      puVar11 = (undefined8 *)((long)pvVar6 + 0x10);
      puVar12 = (undefined8 *)((long)pvVar4 + 0x10);
      uVar15 = uVar16;
      do {
        puVar3 = puVar11 + -1;
        uVar17 = puVar11[-2];
        uVar20 = puVar11[1];
        uVar19 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar15 = uVar15 - 8;
        puVar12[-1] = *puVar3;
        puVar12[-2] = uVar17;
        puVar12[1] = uVar20;
        *puVar12 = uVar19;
        puVar12 = puVar12 + 4;
      } while (uVar15 != 0);
      if (uVar16 == uVar14) goto LAB_009ccad0;
    }
    lVar9 = uVar14 - uVar16;
    puVar7 = (undefined4 *)((long)pvVar6 + uVar16 * 4);
    puVar10 = (undefined4 *)((long)pvVar4 + uVar16 * 4);
    do {
      lVar9 = lVar9 + -1;
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar9 != 0);
  }
LAB_009ccad0:
  uVar1 = *(uint *)(this + 0x50);
  uVar16 = (ulong)uVar1;
  iVar2 = *(int *)(this + 0x54);
  pvVar4 = operator_new__((ulong)(iVar2 * uVar1) << 2);
  *(void **)(this + 0xe0) = pvVar4;
  if (iVar2 == 0) {
    return;
  }
  uVar5 = 0;
  iVar8 = 0;
  uVar15 = uVar16 & 0xfffffff8;
  do {
    if (uVar1 != 0) {
      pvVar6 = *(void **)(param_1 + 0xe0);
      if (uVar1 < 8) {
LAB_009ccb20:
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        if ((!CARRY4(uVar1 * iVar8,(uint)(uVar16 - 1))) && (uVar16 - 1 >> 0x20 == 0)) {
          uVar14 = uVar15;
          uVar13 = uVar5;
          if ((pvVar4 < (void *)((long)pvVar6 + uVar16 * 4)) &&
             (pvVar6 < (void *)((long)pvVar4 + uVar16 * 4))) goto LAB_009ccb20;
          do {
            uVar14 = uVar14 - 8;
            puVar11 = (undefined8 *)((long)pvVar6 + (ulong)uVar13 * 4);
            puVar12 = (undefined8 *)((long)pvVar4 + (ulong)uVar13 * 4);
            uVar17 = *puVar11;
            uVar20 = puVar11[3];
            uVar19 = puVar11[2];
            puVar12[1] = puVar11[1];
            *puVar12 = uVar17;
            puVar12[3] = uVar20;
            puVar12[2] = uVar19;
            uVar13 = uVar13 + 8;
          } while (uVar14 != 0);
          uVar14 = uVar15;
          if (uVar15 == uVar16) goto LAB_009ccbb0;
        }
      }
      uVar13 = uVar5 + (int)uVar14;
      lVar9 = uVar16 - uVar14;
      do {
        uVar14 = (ulong)uVar13;
        uVar13 = uVar13 + 1;
        lVar9 = lVar9 + -1;
        *(undefined4 *)((long)pvVar4 + uVar14 * 4) = *(undefined4 *)((long)pvVar6 + uVar14 * 4);
      } while (lVar9 != 0);
    }
LAB_009ccbb0:
    iVar8 = iVar8 + 1;
    if (iVar8 == iVar2) {
      return;
    }
    pvVar4 = *(void **)(this + 0xe0);
    uVar5 = uVar5 + uVar1;
  } while( true );
}


