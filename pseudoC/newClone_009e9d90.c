// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009e9d90
// Size: 332 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementSimplexNoiseMask::newClone() */

undefined8 * ProceduralPlacementSimplexNoiseMask::newClone(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ProceduralPlacementMask *in_x0;
  undefined8 *this;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  this = (undefined8 *)operator_new(0x2d0);
                    /* try { // try from 009e9db0 to 009e9db7 has its CatchHandler @ 009e9eec */
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,in_x0);
  *this = &PTR__ProceduralPlacementSimplexNoiseMask_00fe2ca8;
  memcpy(this + 0x19,in_x0 + 200,0x200);
  uVar3 = *(uint *)(this + 10);
  uVar4 = (ulong)uVar3;
  iVar5 = *(int *)((long)this + 0x54);
                    /* try { // try from 009e9de4 to 009e9de7 has its CatchHandler @ 009e9edc */
  pvVar6 = operator_new__((ulong)(iVar5 * uVar3) << 2);
  this[0x59] = pvVar6;
  if (iVar5 == 0) {
    return this;
  }
  uVar8 = 0;
  iVar9 = 0;
  uVar10 = uVar4 & 0xfffffff8;
  do {
    if (uVar3 != 0) {
      pvVar11 = *(void **)(in_x0 + 0x2c8);
      if (uVar3 < 8) {
LAB_009e9e58:
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        if ((!CARRY4(uVar3 * iVar9,(uint)(uVar4 - 1))) && (uVar4 - 1 >> 0x20 == 0)) {
          uVar7 = uVar10;
          uVar13 = uVar8;
          if ((pvVar6 < (void *)((long)pvVar11 + uVar4 * 4)) &&
             (pvVar11 < (void *)((long)pvVar6 + uVar4 * 4))) goto LAB_009e9e58;
          do {
            uVar7 = uVar7 - 8;
            puVar1 = (undefined8 *)((long)pvVar11 + (ulong)uVar13 * 4);
            puVar2 = (undefined8 *)((long)pvVar6 + (ulong)uVar13 * 4);
            uVar14 = *puVar1;
            uVar16 = puVar1[3];
            uVar15 = puVar1[2];
            puVar2[1] = puVar1[1];
            *puVar2 = uVar14;
            puVar2[3] = uVar16;
            puVar2[2] = uVar15;
            uVar13 = uVar13 + 8;
          } while (uVar7 != 0);
          uVar7 = uVar10;
          if (uVar10 == uVar4) goto LAB_009e9ebc;
        }
      }
      lVar12 = uVar4 - uVar7;
      uVar13 = uVar8 + (int)uVar7;
      do {
        uVar7 = (ulong)uVar13;
        lVar12 = lVar12 + -1;
        uVar13 = uVar13 + 1;
        *(undefined4 *)((long)pvVar6 + uVar7 * 4) = *(undefined4 *)((long)pvVar11 + uVar7 * 4);
      } while (lVar12 != 0);
    }
LAB_009e9ebc:
    iVar9 = iVar9 + 1;
    if (iVar9 == iVar5) {
      return this;
    }
    pvVar6 = (void *)this[0x59];
    uVar8 = uVar8 + uVar3;
  } while( true );
}


