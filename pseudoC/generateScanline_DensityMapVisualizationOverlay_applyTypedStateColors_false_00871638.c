// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateScanline<&DensityMapVisualizationOverlay::applyTypedStateColors,false>
// Entry Point: 00871638
// Size: 484 bytes
// Signature: bool __thiscall generateScanline<&DensityMapVisualizationOverlay::applyTypedStateColors,false>(DensityMapVisualizationOverlay * this, DensityMap * param_1, uint param_2)


/* bool 
   DensityMapVisualizationOverlay::generateScanline<&DensityMapVisualizationOverlay::applyTypedStateColors,
   false>(DensityMap*, unsigned int) */

bool __thiscall
DensityMapVisualizationOverlay::
generateScanline<&DensityMapVisualizationOverlay::applyTypedStateColors,false>
          (DensityMapVisualizationOverlay *this,DensityMap *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  DensityMapModifier aDStack_98 [48];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_1 == (DensityMap *)0x0) {
    bVar5 = true;
    goto LAB_008717e4;
  }
  DensityMapModifier::DensityMapModifier(aDStack_98,param_1);
                    /* try { // try from 00871684 to 0087168b has its CatchHandler @ 00871828 */
  iVar6 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
                    /* try { // try from 00871698 to 0087169f has its CatchHandler @ 00871824 */
  iVar7 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
                    /* try { // try from 008716ac to 008716b3 has its CatchHandler @ 00871820 */
  uVar8 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
                    /* try { // try from 008716c0 to 008716c7 has its CatchHandler @ 0087181c */
  uVar9 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
  iVar1 = *(int *)(this + 0x293d0);
  uVar11 = *(uint *)(this + 0x293d4);
  uVar10 = *(uint *)(this + 0x293ec);
  iVar14 = 0;
  if (uVar11 != 0) {
    iVar14 = iVar7 / (int)uVar11;
  }
  if (iVar14 == 0) {
    uVar2 = 0;
    if (iVar7 != 0) {
      uVar2 = (int)uVar11 / iVar7;
    }
    iVar14 = 1;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar10 / uVar2;
    }
    iVar7 = iVar7 + ~uVar3;
    iVar15 = 0;
    if (iVar1 != 0) {
      iVar15 = iVar6 / iVar1;
    }
    if (iVar15 != 0) goto LAB_008716f0;
LAB_0087171c:
    iVar12 = 0;
    if (iVar6 != 0) {
      iVar12 = iVar1 / iVar6;
    }
    iVar15 = 1;
  }
  else {
    iVar7 = iVar7 - (iVar14 + iVar14 * uVar10);
    iVar15 = 0;
    if (iVar1 != 0) {
      iVar15 = iVar6 / iVar1;
    }
    if (iVar15 == 0) goto LAB_0087171c;
LAB_008716f0:
    iVar12 = 1;
  }
  if (0 < iVar6) {
    iVar16 = 0;
    puVar13 = (uint *)(*(long *)(this + 0x293c8) + (ulong)(uVar10 * iVar1) * 4);
    do {
      iVar1 = iVar12;
      if (0 < iVar12) {
        do {
          if (*puVar13 == 0) {
                    /* try { // try from 00871790 to 008717bb has its CatchHandler @ 0087182c */
            applyTypedStateColors
                      (this,iVar16,iVar7,iVar15,iVar14,aDStack_98,uVar8,
                       ~(-1 << (ulong)(uVar9 & 0x1f)),param_2,puVar13);
          }
          puVar13 = puVar13 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      iVar16 = iVar16 + iVar15;
    } while (iVar16 < iVar6);
    uVar10 = *(uint *)(this + 0x293ec);
    uVar11 = *(uint *)(this + 0x293d4);
  }
  bVar5 = uVar11 <= uVar10 + 1;
  *(uint *)(this + 0x293ec) = uVar10 + 1;
  DensityMapModifier::~DensityMapModifier(aDStack_98);
LAB_008717e4:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


