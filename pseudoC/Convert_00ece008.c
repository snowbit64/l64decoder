// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Convert
// Entry Point: 00ece008
// Size: 724 bytes
// Signature: undefined __thiscall Convert(Volume * this, VoxelSet * param_1)


/* VHACD::Volume::Convert(VHACD::VoxelSet&) const */

void __thiscall VHACD::Volume::Convert(Volume *this,VoxelSet *param_1)

{
  VoxelSet *pVVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  void *__dest;
  VoxelSet *pVVar8;
  ushort uVar9;
  ulong uVar10;
  long *plVar11;
  ushort uVar12;
  VoxelSet *pVVar13;
  VoxelSet *pVVar14;
  ulong uVar15;
  ushort uVar16;
  ulong uVar17;
  double dVar18;
  
  pVVar1 = param_1 + 0x9c0;
  uVar17 = *(ulong *)(param_1 + 0xa10);
  *(undefined8 *)(param_1 + 0x9a0) = *(undefined8 *)(this + 8);
  lVar2 = *(long *)(this + 0x58);
  lVar3 = *(long *)(this + 0x60);
  *(undefined8 *)(param_1 + 0x9a8) = *(undefined8 *)(this + 0x10);
  uVar15 = lVar2 + lVar3;
  *(undefined8 *)(param_1 + 0x9b0) = *(undefined8 *)(this + 0x18);
  if (uVar17 < uVar15) {
    uVar10 = uVar15 * 8;
    if (uVar15 >> 0x3d != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar10);
    pVVar13 = *(VoxelSet **)(param_1 + 0xa00);
    pVVar8 = pVVar1;
    if (uVar17 != 8) {
      pVVar8 = pVVar13;
    }
    memcpy(__dest,pVVar8,*(long *)(param_1 + 0xa08) << 3);
    if (pVVar13 != (VoxelSet *)0x0) {
      operator_delete__(pVVar13);
    }
    *(void **)(param_1 + 0xa00) = __dest;
    *(ulong *)(param_1 + 0xa10) = uVar15;
  }
  dVar18 = *(double *)(this + 0x38);
  iVar4 = *(int *)(this + 0x40);
  iVar5 = *(int *)(this + 0x48);
  iVar6 = *(int *)(this + 0x50);
  *(double *)(param_1 + 0x9b8) = dVar18;
  *(undefined8 *)(param_1 + 0x998) = 0;
  *(undefined8 *)(param_1 + 0x990) = 0;
  *(double *)(param_1 + 0xa18) = dVar18 * dVar18 * dVar18;
  if (((0 < iVar4 * 0x10000) && (0 < iVar5 * 0x10000)) && (0 < iVar6 * 0x10000)) {
    uVar12 = 0;
    do {
      uVar9 = 0;
      do {
        uVar16 = 0;
        do {
          cVar7 = *(char *)(*(long *)(this + 0x70) +
                           ((long)(short)uVar9 + *(long *)(this + 0x48) * (long)(short)uVar12) *
                           *(long *)(this + 0x50) + (long)(short)uVar16);
          if (cVar7 == '\x03') {
            uVar17 = *(ulong *)(param_1 + 0xa08);
            uVar15 = *(ulong *)(param_1 + 0xa10);
            plVar11 = (long *)(param_1 + 0x998);
            if (uVar17 == uVar15) {
              uVar15 = uVar17 << 1;
              uVar10 = uVar17 << 4;
              if (uVar15 >> 0x3d != 0) {
                uVar10 = 0xffffffffffffffff;
              }
              pVVar8 = (VoxelSet *)operator_new__(uVar10);
              pVVar14 = *(VoxelSet **)(param_1 + 0xa00);
              pVVar13 = pVVar1;
              if (uVar17 != 8) {
                pVVar13 = pVVar14;
              }
              memcpy(pVVar8,pVVar13,uVar17 << 3);
              if (pVVar14 != (VoxelSet *)0x0) {
                operator_delete__(pVVar14);
                uVar17 = *(ulong *)(param_1 + 0xa08);
              }
              uVar10 = 0x3000000000000;
LAB_00ece16c:
              *(VoxelSet **)(param_1 + 0xa00) = pVVar8;
              *(ulong *)(param_1 + 0xa10) = uVar15;
            }
            else {
              pVVar8 = *(VoxelSet **)(param_1 + 0xa00);
              uVar10 = 0x3000000000000;
            }
LAB_00ece17c:
            *(ulong *)(param_1 + 0xa08) = uVar17 + 1;
            pVVar13 = pVVar1;
            if (uVar15 != 8) {
              pVVar13 = pVVar8;
            }
            *(ulong *)(pVVar13 + uVar17 * 8) =
                 (ulong)uVar9 << 0x10 | (ulong)uVar16 << 0x20 | (ulong)uVar12 | uVar10;
            *plVar11 = *plVar11 + 1;
          }
          else if (cVar7 == '\x04') {
            uVar17 = *(ulong *)(param_1 + 0xa08);
            uVar15 = *(ulong *)(param_1 + 0xa10);
            plVar11 = (long *)(param_1 + 0x990);
            if (uVar17 == uVar15) {
              uVar15 = uVar17 << 1;
              uVar10 = uVar17 << 4;
              if (uVar15 >> 0x3d != 0) {
                uVar10 = 0xffffffffffffffff;
              }
              pVVar8 = (VoxelSet *)operator_new__(uVar10);
              pVVar14 = *(VoxelSet **)(param_1 + 0xa00);
              pVVar13 = pVVar1;
              if (uVar17 != 8) {
                pVVar13 = pVVar14;
              }
              memcpy(pVVar8,pVVar13,uVar17 << 3);
              if (pVVar14 != (VoxelSet *)0x0) {
                operator_delete__(pVVar14);
                uVar17 = *(ulong *)(param_1 + 0xa08);
              }
              uVar10 = 0x4000000000000;
              goto LAB_00ece16c;
            }
            pVVar8 = *(VoxelSet **)(param_1 + 0xa00);
            uVar10 = 0x4000000000000;
            goto LAB_00ece17c;
          }
          uVar16 = uVar16 + 1;
        } while ((short)uVar16 < (short)iVar6);
        uVar9 = uVar9 + 1;
      } while ((short)uVar9 < (short)iVar5);
      uVar12 = uVar12 + 1;
    } while ((short)uVar12 < (short)iVar4);
  }
  return;
}


