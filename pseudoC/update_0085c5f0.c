// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0085c5f0
// Size: 500 bytes
// Signature: undefined __cdecl update(float param_1)


/* DensityMapHeightUpdater::update(float) */

void DensityMapHeightUpdater::update(float param_1)

{
  DensityMapModifier *pDVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  DensityMapHeightUpdater *in_x0;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  DensityMap *pDVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  DensityMapModifier aDStack_c8 [48];
  DensityMapModifier aDStack_98 [48];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (-1 < *(int *)(in_x0 + 0xc54)) {
    lVar8 = Watch::getCurrentTicks();
    pDVar14 = *(DensityMap **)(*(long *)(in_x0 + 0xa40) + 0x50);
    uVar2 = *(uint *)(*(long *)(in_x0 + 0xa40) + 0x6c);
    uVar6 = DensityMap::getSquareSize();
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar6 / uVar2;
    }
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = uVar6 / uVar4;
    }
    iVar7 = uVar2 * uVar2;
    if (*(int *)(in_x0 + 0xc5c) == 0) {
      *(int *)(in_x0 + 0xc54) = iVar7;
    }
    DensityMapModifier::DensityMapModifier(aDStack_98,pDVar14);
                    /* try { // try from 0085c678 to 0085c67f has its CatchHandler @ 0085c7e8 */
    DensityMapModifier::DensityMapModifier(aDStack_c8);
    if (*(DensityMap **)(in_x0 + 0xc68) == (DensityMap *)0x0) {
      fVar16 = 0.0;
      fVar17 = 0.0;
    }
    else {
                    /* try { // try from 0085c688 to 0085c6b3 has its CatchHandler @ 0085c7f0 */
      DensityMapModifier::init(aDStack_c8,*(DensityMap **)(in_x0 + 0xc68));
      uVar9 = (**(code **)(**(long **)(in_x0 + 0xc68) + 0x48))();
      uVar10 = (**(code **)(**(long **)(in_x0 + 0xc68) + 0x50))();
      fVar17 = (float)(uVar9 & 0xffffffff) / (float)(ulong)uVar6;
      fVar16 = (float)(uVar10 & 0xffffffff) / (float)(ulong)uVar6;
    }
    do {
      iVar12 = *(int *)(in_x0 + 0xc54);
      if (iVar7 <= iVar12) goto LAB_0085c744;
      iVar3 = 0;
      if (uVar2 != 0) {
        iVar3 = iVar12 / (int)uVar2;
      }
      pDVar1 = (DensityMapModifier *)0x0;
      if (*(long *)(in_x0 + 0xc68) != 0) {
        pDVar1 = aDStack_c8;
      }
                    /* try { // try from 0085c700 to 0085c72f has its CatchHandler @ 0085c7f4 */
      updateCell(in_x0,(iVar12 - iVar3 * uVar2) * uVar4,iVar3 * uVar4,uVar4,aDStack_98,pDVar1,fVar17
                 ,fVar16);
      *(int *)(in_x0 + 0xc54) = *(int *)(in_x0 + 0xc54) + 1;
      lVar11 = Watch::getCurrentTicks();
      dVar15 = (double)Watch::convertTicksToMs(lVar11 - lVar8);
    } while (dVar15 <= (double)*(float *)(in_x0 + 0xc80));
    iVar12 = *(int *)(in_x0 + 0xc54);
LAB_0085c744:
    if (iVar12 == iVar7) {
      plVar13 = *(long **)(in_x0 + 0xc68);
      *(undefined4 *)(in_x0 + 0xc54) = 0xffffffff;
      if (plVar13 != (long *)0x0) {
        iVar7 = FUN_00f27700(0xffffffff,plVar13 + 1);
        if (iVar7 < 2) {
                    /* try { // try from 0085c778 to 0085c77f has its CatchHandler @ 0085c7f0 */
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
        *(undefined8 *)(in_x0 + 0xc68) = 0;
      }
      plVar13 = *(long **)(in_x0 + 0xc78);
      if (plVar13 != (long *)0x0) {
        *(undefined8 *)(in_x0 + 0xc78) = 0;
                    /* try { // try from 0085c798 to 0085c79f has its CatchHandler @ 0085c7e4 */
        (**(code **)(*plVar13 + 0x10))(plVar13,1);
      }
    }
    DensityMapModifier::~DensityMapModifier(aDStack_c8);
    param_1 = (float)DensityMapModifier::~DensityMapModifier(aDStack_98);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


