// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: batchedUnitVectorGetSupportingVertexWithoutMargin
// Entry Point: 00f64eb0
// Size: 600 bytes
// Signature: undefined __thiscall batchedUnitVectorGetSupportingVertexWithoutMargin(btPolyhedralConvexShape * this, btVector3 * param_1, btVector3 * param_2, int param_3)


/* btPolyhedralConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*,
   btVector3*, int) const */

void __thiscall
btPolyhedralConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btPolyhedralConvexShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  ulong local_878;
  undefined8 auStack_870 [256];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (param_3 < 1) goto LAB_00f650d0;
  uVar11 = (ulong)(uint)param_3;
  if (param_3 == 1) {
    uVar7 = 0;
LAB_00f64f34:
    lVar9 = uVar11 - uVar7;
    puVar8 = (undefined4 *)(param_2 + uVar7 * 0x10 + 0xc);
    do {
      lVar9 = lVar9 + -1;
      *puVar8 = 0xdd5e0b6b;
      puVar8 = puVar8 + 4;
    } while (lVar9 != 0);
  }
  else {
    uVar7 = uVar11 & 0xfffffffe;
    puVar8 = (undefined4 *)(param_2 + 0x1c);
    uVar12 = uVar7;
    do {
      uVar12 = uVar12 - 2;
      puVar8[-4] = 0xdd5e0b6b;
      *puVar8 = 0xdd5e0b6b;
      puVar8 = puVar8 + 8;
    } while (uVar12 != 0);
    if (uVar7 != uVar11) goto LAB_00f64f34;
  }
  local_878 = 0;
  do {
    iVar4 = (**(code **)(*(long *)this + 0xc0))(this);
    if (0 < iVar4) {
      iVar4 = 0;
      puVar1 = (undefined8 *)(param_2 + local_878 * 0x10);
      do {
        iVar5 = (**(code **)(*(long *)this + 0xc0))(this);
        if (iVar5 - iVar4 < 0x80) {
          iVar5 = (**(code **)(*(long *)this + 0xc0))(this);
          uVar6 = iVar5 - iVar4;
          if (0 < (int)uVar6) goto LAB_00f65024;
          lVar9 = -1;
          fVar15 = -3.402823e+38;
        }
        else {
          uVar6 = 0x80;
LAB_00f65024:
          uVar12 = 0;
          puVar10 = auStack_870;
          do {
            (**(code **)(*(long *)this + 0xd8))(this,uVar12 & 0xffffffff,puVar10);
            uVar12 = uVar12 + 1;
            puVar10 = puVar10 + 2;
          } while (uVar6 != uVar12);
          lVar9 = 0;
          puVar10 = (undefined8 *)((ulong)auStack_870 | 4);
          fVar13 = -3.402823e+38;
          iVar5 = -1;
          do {
            uVar14 = *puVar10;
            puVar8 = (undefined4 *)((long)puVar10 - 4);
            puVar10 = puVar10 + 2;
            fVar15 = (float)NEON_fmadd(*puVar8,*(undefined4 *)(param_1 + local_878 * 0x10),
                                       (float)uVar14 *
                                       (float)*(undefined8 *)(param_1 + local_878 * 0x10 + 4));
            fVar15 = fVar15 + (float)((ulong)uVar14 >> 0x20) *
                              (float)((ulong)*(undefined8 *)(param_1 + local_878 * 0x10 + 4) >> 0x20
                                     );
            iVar2 = (int)lVar9;
            if (fVar15 <= fVar13) {
              iVar2 = iVar5;
            }
            lVar9 = lVar9 + 1;
            fVar13 = fVar15;
            iVar5 = iVar2;
          } while ((int)uVar6 != lVar9);
          lVar9 = (long)iVar2;
        }
        if (*(float *)((long)puVar1 + 0xc) < fVar15) {
          uVar14 = auStack_870[lVar9 * 2];
          puVar1[1] = auStack_870[lVar9 * 2 + 1];
          *puVar1 = uVar14;
          *(float *)((long)puVar1 + 0xc) = fVar15;
        }
        iVar4 = iVar4 + 0x80;
        iVar5 = (**(code **)(*(long *)this + 0xc0))(this);
      } while (iVar4 < iVar5);
    }
    local_878 = local_878 + 1;
  } while (local_878 != uVar11);
LAB_00f650d0:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


