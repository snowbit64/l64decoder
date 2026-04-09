// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeUpdateFSM
// Entry Point: 008712fc
// Size: 308 bytes
// Signature: undefined executeUpdateFSM(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DensityMapVisualizationOverlay::executeUpdateFSM() */

bool DensityMapVisualizationOverlay::executeUpdateFSM(void)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  DensityMapVisualizationOverlay *in_x0;
  undefined8 uVar4;
  
  iVar2 = *(int *)(in_x0 + 0x293e4);
  if (iVar2 == 2) {
    uVar1 = *(uint *)(in_x0 + 0x293e8);
    bVar3 = generateScanline<&DensityMapVisualizationOverlay::applyStateColors,false>
                      (in_x0,*(DensityMap **)(in_x0 + (ulong)uVar1 * 0x40d8 + 0x8cd0),
                       *(DensityMap **)(in_x0 + (ulong)uVar1 * 0x40d8 + 0x8cd8),uVar1);
    if (!bVar3) {
      return false;
    }
    iVar2 = *(int *)(in_x0 + 0x293e8);
    *(uint *)(in_x0 + 0x293e8) = iVar2 + 1U;
    if (iVar2 + 1U < *(uint *)(in_x0 + 0x29390)) goto LAB_00871404;
    uVar4 = 3;
  }
  else if (iVar2 == 1) {
    bVar3 = generateScanline<&DensityMapVisualizationOverlay::applyTypedStateColors,false>
                      (in_x0,*(DensityMap **)
                              (in_x0 + (ulong)*(uint *)(in_x0 + 0x293e8) * 0x2208 + 0x4a8),
                       *(uint *)(in_x0 + 0x293e8));
    if (!bVar3) {
      return false;
    }
    iVar2 = *(int *)(in_x0 + 0x293e8);
    *(uint *)(in_x0 + 0x293e8) = iVar2 + 1U;
    if (iVar2 + 1U < *(uint *)(in_x0 + 0x8cc8)) goto LAB_00871404;
    uVar4 = 2;
  }
  else {
    if (iVar2 != 0) {
      bVar3 = generateScanline<&DensityMapVisualizationOverlay::applyStateBorder,true>
                        ((DensityMap *)in_x0,(uint)*(undefined8 *)(in_x0 + 0x29398));
      return bVar3;
    }
    bVar3 = generateScanline<&DensityMapVisualizationOverlay::applyTypeColors,false>
                      (in_x0,*(DensityMap **)
                              (in_x0 + (ulong)*(uint *)(in_x0 + 0x293e8) * 0x108 + 0x80),
                       *(uint *)(in_x0 + 0x293e8));
    if (!bVar3) {
      return false;
    }
    iVar2 = *(int *)(in_x0 + 0x293e8);
    *(uint *)(in_x0 + 0x293e8) = iVar2 + 1U;
    if (iVar2 + 1U < *(uint *)(in_x0 + 0x4a0)) goto LAB_00871404;
    uVar4 = 1;
  }
  *(undefined8 *)(in_x0 + 0x293e4) = uVar4;
LAB_00871404:
  *(undefined4 *)(in_x0 + 0x293ec) = 0;
  return false;
}


