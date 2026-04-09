// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementIndexSimplexNoiseMask
// Entry Point: 009cd950
// Size: 320 bytes
// Signature: undefined __thiscall ProceduralPlacementIndexSimplexNoiseMask(ProceduralPlacementIndexSimplexNoiseMask * this, ProceduralPlacementIndexSimplexNoiseMask * param_1)


/* ProceduralPlacementIndexSimplexNoiseMask::ProceduralPlacementIndexSimplexNoiseMask(ProceduralPlacementIndexSimplexNoiseMask
   const&) */

void __thiscall
ProceduralPlacementIndexSimplexNoiseMask::ProceduralPlacementIndexSimplexNoiseMask
          (ProceduralPlacementIndexSimplexNoiseMask *this,
          ProceduralPlacementIndexSimplexNoiseMask *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  void *pvVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(ProceduralPlacementMask *)param_1);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined ***)this = &PTR__ProceduralPlacementIndexSimplexNoiseMask_00fe2228;
  memcpy(this + 0xcc,param_1 + 0xcc,0x200);
  uVar3 = *(uint *)(this + 0x50);
  uVar4 = (ulong)uVar3;
  iVar5 = *(int *)(this + 0x54);
                    /* try { // try from 009cd9a0 to 009cd9a3 has its CatchHandler @ 009cda90 */
  pvVar6 = operator_new__((ulong)(iVar5 * uVar3) << 2);
  *(void **)(this + 0x2d0) = pvVar6;
  if (iVar5 == 0) {
    return;
  }
  uVar7 = 0;
  iVar8 = 0;
  uVar9 = uVar4 & 0xfffffff8;
  do {
    if (uVar3 != 0) {
      pvVar10 = *(void **)(param_1 + 0x2d0);
      if (uVar3 < 8) {
LAB_009cda10:
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        if ((!CARRY4(uVar3 * iVar8,(uint)(uVar4 - 1))) && (uVar4 - 1 >> 0x20 == 0)) {
          uVar13 = uVar9;
          uVar11 = uVar7;
          if ((pvVar6 < (void *)((long)pvVar10 + uVar4 * 4)) &&
             (pvVar10 < (void *)((long)pvVar6 + uVar4 * 4))) goto LAB_009cda10;
          do {
            uVar13 = uVar13 - 8;
            puVar1 = (undefined8 *)((long)pvVar10 + (ulong)uVar11 * 4);
            puVar2 = (undefined8 *)((long)pvVar6 + (ulong)uVar11 * 4);
            uVar14 = *puVar1;
            uVar16 = puVar1[3];
            uVar15 = puVar1[2];
            puVar2[1] = puVar1[1];
            *puVar2 = uVar14;
            puVar2[3] = uVar16;
            puVar2[2] = uVar15;
            uVar11 = uVar11 + 8;
          } while (uVar13 != 0);
          uVar13 = uVar9;
          if (uVar9 == uVar4) goto LAB_009cda74;
        }
      }
      uVar11 = uVar7 + (int)uVar13;
      lVar12 = uVar4 - uVar13;
      do {
        uVar13 = (ulong)uVar11;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + -1;
        *(undefined4 *)((long)pvVar6 + uVar13 * 4) = *(undefined4 *)((long)pvVar10 + uVar13 * 4);
      } while (lVar12 != 0);
    }
LAB_009cda74:
    iVar8 = iVar8 + 1;
    if (iVar8 == iVar5) {
      return;
    }
    pvVar6 = *(void **)(this + 0x2d0);
    uVar7 = uVar7 + uVar3;
  } while( true );
}


