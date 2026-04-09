// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateScanline<&DensityMapVisualizationOverlay::applyStateBorder,true>
// Entry Point: 00871a94
// Size: 440 bytes
// Signature: bool __cdecl generateScanline<&DensityMapVisualizationOverlay::applyStateBorder,true>(DensityMap * param_1, uint param_2)


/* bool 
   DensityMapVisualizationOverlay::generateScanline<&DensityMapVisualizationOverlay::applyStateBorder,
   true>(DensityMap*, unsigned int) */

bool DensityMapVisualizationOverlay::
     generateScanline<&DensityMapVisualizationOverlay::applyStateBorder,true>
               (DensityMap *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  DensityMapModifier aDStack_98 [48];
  long local_68;
  
  plVar9 = (long *)(ulong)param_2;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (plVar9 == (long *)0x0) {
    bVar5 = true;
    goto LAB_00871c14;
  }
  DensityMapModifier::DensityMapModifier(aDStack_98,(DensityMap *)plVar9);
                    /* try { // try from 00871adc to 00871ae3 has its CatchHandler @ 00871c58 */
  iVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
                    /* try { // try from 00871af0 to 00871af7 has its CatchHandler @ 00871c54 */
  iVar7 = (**(code **)(*plVar9 + 0x50))(plVar9);
                    /* try { // try from 00871b04 to 00871b0b has its CatchHandler @ 00871c50 */
  uVar8 = (**(code **)(*plVar9 + 0x58))(plVar9);
                    /* try { // try from 00871b18 to 00871b1f has its CatchHandler @ 00871c4c */
  (**(code **)(*plVar9 + 0x60))(plVar9);
  iVar1 = *(int *)(param_1 + 0x293d0);
  uVar11 = *(uint *)(param_1 + 0x293d4);
  uVar10 = *(uint *)(param_1 + 0x293ec);
  iVar12 = 0;
  if (uVar11 != 0) {
    iVar12 = iVar7 / (int)uVar11;
  }
  if (iVar12 == 0) {
    uVar2 = 0;
    if (iVar7 != 0) {
      uVar2 = (int)uVar11 / iVar7;
    }
    iVar12 = 1;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar10 / uVar2;
    }
    iVar7 = iVar7 + ~uVar3;
    iVar13 = 0;
    if (iVar1 != 0) {
      iVar13 = iVar6 / iVar1;
    }
    if (iVar13 == 0) goto LAB_00871b7c;
LAB_00871b48:
    iVar16 = 1;
  }
  else {
    iVar7 = iVar7 - (iVar12 + iVar12 * uVar10);
    iVar13 = 0;
    if (iVar1 != 0) {
      iVar13 = iVar6 / iVar1;
    }
    if (iVar13 != 0) goto LAB_00871b48;
LAB_00871b7c:
    iVar16 = 0;
    if (iVar6 != 0) {
      iVar16 = iVar1 / iVar6;
    }
    iVar13 = 1;
  }
  if (0 < iVar6) {
    iVar14 = 0;
    puVar15 = (uint *)(*(long *)(param_1 + 0x293c8) + (ulong)(uVar10 * iVar1) * 4);
    do {
      iVar1 = iVar16;
      if (0 < iVar16) {
        do {
                    /* try { // try from 00871bbc to 00871bdf has its CatchHandler @ 00871c5c */
          applyStateBorder((DensityMapVisualizationOverlay *)param_1,iVar14,iVar7,iVar13,iVar12,
                           aDStack_98,uVar8,puVar15);
          puVar15 = puVar15 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      iVar14 = iVar14 + iVar13;
    } while (iVar14 < iVar6);
    uVar10 = *(uint *)(param_1 + 0x293ec);
    uVar11 = *(uint *)(param_1 + 0x293d4);
  }
  bVar5 = uVar11 <= uVar10 + 1;
  *(uint *)(param_1 + 0x293ec) = uVar10 + 1;
  DensityMapModifier::~DensityMapModifier(aDStack_98);
LAB_00871c14:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


