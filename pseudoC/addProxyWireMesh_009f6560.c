// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addProxyWireMesh
// Entry Point: 009f6560
// Size: 768 bytes
// Signature: undefined __thiscall addProxyWireMesh(DeferredDebugRenderer * this, Matrix4x4 * param_1, float * param_2, float * param_3, ushort * param_4, ushort * param_5, uint param_6, CATEGORY param_7)


/* DeferredDebugRenderer::addProxyWireMesh(Matrix4x4 const&, float const*, float const*, unsigned
   short const*, unsigned short const*, unsigned int, DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addProxyWireMesh
          (DeferredDebugRenderer *this,Matrix4x4 *param_1,float *param_2,float *param_3,
          ushort *param_4,ushort *param_5,uint param_6,CATEGORY param_7)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float local_88;
  float fStack_84;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_6 != 0) {
    uVar7 = 0;
    uVar9 = 0;
    do {
      uVar2 = param_5[uVar7];
      uVar3 = uVar2 - 1;
      uVar8 = (ulong)uVar3;
      if (uVar3 != 0) {
        uVar10 = (ulong)uVar9;
        do {
          puVar1 = param_4 + uVar10;
          uVar10 = (ulong)((int)uVar10 + 1);
          iVar5 = (uint)*puVar1 * 3;
          iVar6 = (uint)param_4[uVar10] * 3;
          fVar13 = param_3[iVar5 - 2] * 0.01;
          fVar16 = param_3[iVar6 - 2] * 0.01;
          fVar18 = param_3[iVar5 - 3] * 0.01;
          fVar20 = param_3[iVar6 - 3] * 0.01;
          fVar19 = param_3[iVar5 - 1] * 0.01;
          uVar22 = NEON_fmadd(fVar18,*(undefined4 *)param_1,fVar13 * *(float *)(param_1 + 0x10));
          fVar17 = param_3[iVar6 - 1] * 0.01;
          uVar21 = NEON_fmadd(fVar18,*(undefined4 *)(param_1 + 4),
                              fVar13 * *(float *)(param_1 + 0x14));
          uVar14 = NEON_fmadd(fVar18,*(undefined4 *)(param_1 + 8),
                              fVar13 * *(float *)(param_1 + 0x18));
          uVar11 = NEON_fmadd(fVar20,*(undefined4 *)param_1,fVar16 * *(float *)(param_1 + 0x10));
          uVar12 = NEON_fmadd(fVar20,*(undefined4 *)(param_1 + 4),
                              fVar16 * *(float *)(param_1 + 0x14));
          uVar15 = NEON_fmadd(fVar20,*(undefined4 *)(param_1 + 8),
                              fVar16 * *(float *)(param_1 + 0x18));
          local_78 = (float)NEON_fmadd(fVar19,*(undefined4 *)(param_1 + 0x20),uVar22);
          fStack_74 = (float)NEON_fmadd(fVar19,*(undefined4 *)(param_1 + 0x24),uVar21);
          local_70 = (float)NEON_fmadd(fVar19,*(undefined4 *)(param_1 + 0x28),uVar14);
          local_88 = (float)NEON_fmadd(fVar17,*(undefined4 *)(param_1 + 0x20),uVar11);
          fStack_84 = (float)NEON_fmadd(fVar17,*(undefined4 *)(param_1 + 0x24),uVar12);
          local_80 = (float)NEON_fmadd(fVar17,*(undefined4 *)(param_1 + 0x28),uVar15);
          local_78 = *(float *)(param_1 + 0x30) + local_78;
          fStack_74 = *(float *)(param_1 + 0x34) + fStack_74;
          local_88 = *(float *)(param_1 + 0x30) + local_88;
          local_70 = *(float *)(param_1 + 0x38) + local_70;
          fStack_84 = *(float *)(param_1 + 0x34) + fStack_84;
          local_80 = *(float *)(param_1 + 0x38) + local_80;
          addLine(this,&local_78,param_2,&local_88,param_2,param_7);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar8 = (ulong)uVar9;
      uVar9 = uVar9 + uVar2;
      iVar5 = (uint)param_4[uVar8] * 3;
      iVar6 = (uint)param_4[uVar9 - 1] * 3;
      fVar16 = param_3[iVar5 - 2] * 0.01;
      fVar17 = param_3[iVar5 - 3] * 0.01;
      fVar18 = param_3[iVar5 - 1] * 0.01;
      fVar19 = param_3[iVar6 - 2] * 0.01;
      fVar20 = param_3[iVar6 - 3] * 0.01;
      fVar13 = param_3[iVar6 - 1] * 0.01;
      uVar21 = NEON_fmadd(fVar17,*(undefined4 *)param_1,fVar16 * *(float *)(param_1 + 0x10));
      uVar22 = NEON_fmadd(fVar17,*(undefined4 *)(param_1 + 4),fVar16 * *(float *)(param_1 + 0x14));
      uVar14 = NEON_fmadd(fVar17,*(undefined4 *)(param_1 + 8),fVar16 * *(float *)(param_1 + 0x18));
      uVar11 = NEON_fmadd(fVar20,*(undefined4 *)param_1,fVar19 * *(float *)(param_1 + 0x10));
      uVar12 = NEON_fmadd(fVar20,*(undefined4 *)(param_1 + 4),fVar19 * *(float *)(param_1 + 0x14));
      uVar15 = NEON_fmadd(fVar20,*(undefined4 *)(param_1 + 8),fVar19 * *(float *)(param_1 + 0x18));
      local_78 = (float)NEON_fmadd(fVar18,*(undefined4 *)(param_1 + 0x20),uVar21);
      fStack_74 = (float)NEON_fmadd(fVar18,*(undefined4 *)(param_1 + 0x24),uVar22);
      local_70 = (float)NEON_fmadd(fVar18,*(undefined4 *)(param_1 + 0x28),uVar14);
      local_88 = (float)NEON_fmadd(fVar13,*(undefined4 *)(param_1 + 0x20),uVar11);
      fStack_84 = (float)NEON_fmadd(fVar13,*(undefined4 *)(param_1 + 0x24),uVar12);
      local_80 = (float)NEON_fmadd(fVar13,*(undefined4 *)(param_1 + 0x28),uVar15);
      local_78 = *(float *)(param_1 + 0x30) + local_78;
      fStack_74 = *(float *)(param_1 + 0x34) + fStack_74;
      local_88 = *(float *)(param_1 + 0x30) + local_88;
      local_70 = *(float *)(param_1 + 0x38) + local_70;
      fStack_84 = *(float *)(param_1 + 0x34) + fStack_84;
      local_80 = *(float *)(param_1 + 0x38) + local_80;
      addLine(this,&local_78,param_2,&local_88,param_2,param_7);
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_6);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


