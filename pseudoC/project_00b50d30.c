// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: project
// Entry Point: 00b50d30
// Size: 612 bytes
// Signature: undefined __thiscall project(ClippingMesh * this, ClippingMesh * param_1, bool param_2, float * param_3, float * param_4, float * param_5, float * param_6)


/* ClippingMesh::project(ClippingMesh&, bool, float&, float&, float&, float&) const */

void __thiscall
ClippingMesh::project
          (ClippingMesh *this,ClippingMesh *param_1,bool param_2,float *param_3,float *param_4,
          float *param_5,float *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  
  lVar4 = tpidr_el0;
  local_98 = *(long *)(lVar4 + 0x28);
  if (param_2) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(this + 0x18) == 0) {
    fVar16 = 1e+30;
    fVar15 = -1e+30;
    fVar17 = fVar16;
    fVar18 = fVar15;
  }
  else {
    fVar15 = -1e+30;
    fVar16 = 1e+30;
    uVar8 = 0;
    fVar17 = fVar16;
    fVar18 = fVar15;
    do {
      *(undefined4 *)(param_1 + 0x10) = 0;
      uVar2 = *(uint *)(*(long *)(this + 8) + (ulong)(uint)((int)uVar8 << 1) * 4);
      uVar7 = (ulong)uVar2;
      if (uVar2 == 0) {
LAB_00b50dc0:
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      else {
        bVar10 = 0;
        pfVar5 = (float *)(*(long *)this +
                           (ulong)*(uint *)(*(long *)(this + 8) + (ulong)((int)uVar8 << 1 | 1) * 4)
                           * 0x10 + 8);
        uVar9 = uVar7;
        do {
          fVar14 = 1.0 / pfVar5[1];
          fVar11 = pfVar5[-2] * fVar14;
          fVar13 = pfVar5[-1] * fVar14;
          bVar10 = bVar10 | -1.0 <= fVar11;
          if (fVar11 <= 1.0) {
            bVar10 = bVar10 | 2;
          }
          if (-1.0 <= fVar13) {
            bVar10 = bVar10 | 4;
          }
          if (fVar13 <= 1.0) {
            bVar10 = bVar10 | 8;
          }
          Vector4::set((Vector4 *)&local_a8,fVar11,fVar13,*pfVar5 * fVar14,fVar14);
          pfVar5 = pfVar5 + 4;
          uVar9 = uVar9 - 1;
          puVar3 = (undefined8 *)
                   (*(long *)param_1 +
                   (ulong)(uint)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14)) * 0x10);
          puVar3[1] = uStack_a0;
          *puVar3 = local_a8;
          uVar1 = *(int *)(param_1 + 0x10) + 1;
          *(uint *)(param_1 + 0x10) = uVar1;
        } while (uVar9 != 0);
        if (bVar10 != 0xf) goto LAB_00b50dc0;
        if (uVar2 != 0) {
          pfVar5 = (float *)(*(long *)param_1 + (ulong)*(uint *)(param_1 + 0x14) * 0x10 + 4);
          do {
            fVar13 = pfVar5[-1];
            fVar14 = *pfVar5;
            pfVar5 = pfVar5 + 4;
            fVar11 = fVar13;
            if (fVar16 <= fVar13) {
              fVar11 = fVar16;
            }
            fVar16 = fVar11;
            fVar11 = fVar14;
            if (fVar17 <= fVar14) {
              fVar11 = fVar17;
            }
            fVar17 = fVar11;
            if (fVar13 <= fVar18) {
              fVar13 = fVar18;
            }
            fVar18 = fVar13;
            if (fVar14 <= fVar15) {
              fVar14 = fVar15;
            }
            fVar15 = fVar14;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (2 < uVar1) {
          lVar6 = *(long *)(param_1 + 8);
          *(uint *)(lVar6 + (ulong)(uint)(*(int *)(param_1 + 0x18) << 1) * 4) = uVar1;
          *(undefined4 *)(lVar6 + (ulong)(*(int *)(param_1 + 0x18) << 1 | 1) * 4) =
               *(undefined4 *)(param_1 + 0x14);
          iVar12 = *(int *)(param_1 + 0x10);
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(ulong *)(param_1 + 0x14) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) + 1,
                        (int)*(undefined8 *)(param_1 + 0x14) + iVar12);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(this + 0x18));
  }
  *param_3 = fVar16;
  *param_4 = fVar18;
  *param_5 = fVar17;
  *param_6 = fVar15;
  if (*(long *)(lVar4 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


