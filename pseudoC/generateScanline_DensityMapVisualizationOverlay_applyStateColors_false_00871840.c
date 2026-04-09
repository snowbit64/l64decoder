// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateScanline<&DensityMapVisualizationOverlay::applyStateColors,false>
// Entry Point: 00871840
// Size: 540 bytes
// Signature: bool __thiscall generateScanline<&DensityMapVisualizationOverlay::applyStateColors,false>(DensityMapVisualizationOverlay * this, DensityMap * param_1, DensityMap * param_2, uint param_3)


/* bool 
   DensityMapVisualizationOverlay::generateScanline<&DensityMapVisualizationOverlay::applyStateColors,
   false>(DensityMap*, DensityMap*, unsigned int) */

bool __thiscall
DensityMapVisualizationOverlay::
generateScanline<&DensityMapVisualizationOverlay::applyStateColors,false>
          (DensityMapVisualizationOverlay *this,DensityMap *param_1,DensityMap *param_2,uint param_3
          )

{
  DensityMapModifier *pDVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  DensityMapModifier aDStack_c8 [48];
  DensityMapModifier aDStack_98 [48];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (param_1 == (DensityMap *)0x0) {
    bVar6 = true;
    goto LAB_00871a24;
  }
  DensityMapModifier::DensityMapModifier(aDStack_98,param_1);
                    /* try { // try from 00871888 to 0087188f has its CatchHandler @ 00871a70 */
  DensityMapModifier::DensityMapModifier(aDStack_c8);
  if (param_2 != param_1) {
                    /* try { // try from 00871898 to 008718a3 has its CatchHandler @ 00871a5c */
    DensityMapModifier::init(aDStack_c8,param_2);
  }
                    /* try { // try from 008718ac to 008718b3 has its CatchHandler @ 00871a6c */
  iVar7 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
                    /* try { // try from 008718c0 to 008718c7 has its CatchHandler @ 00871a68 */
  iVar8 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
                    /* try { // try from 008718d4 to 008718db has its CatchHandler @ 00871a64 */
  uVar9 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
                    /* try { // try from 008718e8 to 008718ef has its CatchHandler @ 00871a60 */
  (**(code **)(*(long *)param_1 + 0x60))(param_1);
  iVar2 = *(int *)(this + 0x293d0);
  uVar11 = *(uint *)(this + 0x293d4);
  uVar10 = *(uint *)(this + 0x293ec);
  iVar15 = 0;
  if (uVar11 != 0) {
    iVar15 = iVar8 / (int)uVar11;
  }
  if (iVar15 == 0) {
    uVar3 = 0;
    if (iVar8 != 0) {
      uVar3 = (int)uVar11 / iVar8;
    }
    iVar15 = 1;
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar10 / uVar3;
    }
    iVar8 = iVar8 + ~uVar4;
    iVar16 = 0;
    if (iVar2 != 0) {
      iVar16 = iVar7 / iVar2;
    }
    if (iVar16 != 0) goto LAB_0087191c;
LAB_00871948:
    iVar12 = 0;
    if (iVar7 != 0) {
      iVar12 = iVar2 / iVar7;
    }
    iVar16 = 1;
  }
  else {
    iVar8 = iVar8 - (iVar15 + iVar15 * uVar10);
    iVar16 = 0;
    if (iVar2 != 0) {
      iVar16 = iVar7 / iVar2;
    }
    if (iVar16 == 0) goto LAB_00871948;
LAB_0087191c:
    iVar12 = 1;
  }
  pDVar1 = (DensityMapModifier *)0x0;
  if (param_2 != param_1) {
    pDVar1 = aDStack_c8;
  }
  if (0 < iVar7) {
    iVar14 = 0;
    puVar13 = (uint *)(*(long *)(this + 0x293c8) + (ulong)(uVar10 * iVar2) * 4);
    do {
      iVar2 = iVar12;
      if (0 < iVar12) {
        do {
          if (*puVar13 == 0) {
                    /* try { // try from 008719c0 to 008719eb has its CatchHandler @ 00871a78 */
            applyStateColors(this,iVar14,iVar8,iVar16,iVar15,aDStack_98,pDVar1,uVar9,param_3,puVar13
                            );
          }
          puVar13 = puVar13 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar14 = iVar14 + iVar16;
    } while (iVar14 < iVar7);
    uVar10 = *(uint *)(this + 0x293ec);
    uVar11 = *(uint *)(this + 0x293d4);
  }
  bVar6 = uVar11 <= uVar10 + 1;
  *(uint *)(this + 0x293ec) = uVar10 + 1;
  DensityMapModifier::~DensityMapModifier(aDStack_c8);
  DensityMapModifier::~DensityMapModifier(aDStack_98);
LAB_00871a24:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}


