// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportingVertex
// Entry Point: 00f8b584
// Size: 128 bytes
// Signature: undefined __thiscall localGetSupportingVertex(btSoftClusterCollisionShape * this, btVector3 * param_1)


/* btSoftClusterCollisionShape::localGetSupportingVertex(btVector3 const&) const */

float __thiscall
btSoftClusterCollisionShape::localGetSupportingVertex
          (btSoftClusterCollisionShape *this,btVector3 *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  plVar3 = *(long **)(*(long *)(this + 0x48) + 0x30);
  uVar2 = *(uint *)(*(long *)(this + 0x48) + 0x24);
  lVar5 = *plVar3;
  fVar7 = *(float *)(lVar5 + 0x10);
  if (1 < (int)uVar2) {
    uVar6 = 1;
    uVar8 = NEON_fmadd(*(undefined4 *)(lVar5 + 0x14),*(undefined4 *)(param_1 + 4),
                       fVar7 * *(float *)param_1);
    fVar7 = (float)NEON_fmadd(*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(param_1 + 8),uVar8);
    iVar4 = 0;
    do {
      lVar5 = plVar3[uVar6];
      uVar8 = NEON_fmadd(*(undefined4 *)(lVar5 + 0x14),*(undefined4 *)(param_1 + 4),
                         *(float *)(lVar5 + 0x10) * *(float *)param_1);
      fVar9 = (float)NEON_fmadd(*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(param_1 + 8),uVar8);
      iVar1 = (int)uVar6;
      if (fVar9 <= fVar7) {
        iVar1 = iVar4;
      }
      uVar6 = uVar6 + 1;
      fVar7 = fVar9;
      iVar4 = iVar1;
    } while (uVar2 != uVar6);
    fVar7 = *(float *)(plVar3[iVar1] + 0x10);
  }
  return fVar7;
}


