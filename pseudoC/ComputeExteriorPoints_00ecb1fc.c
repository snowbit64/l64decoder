// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeExteriorPoints
// Entry Point: 00ecb1fc
// Size: 644 bytes
// Signature: undefined __thiscall ComputeExteriorPoints(VoxelSet * this, Plane * param_1, Mesh * param_2, SArray * param_3)


/* VHACD::VoxelSet::ComputeExteriorPoints(VHACD::Plane const&, VHACD::Mesh const&,
   VHACD::SArray<VHACD::Vec3<double>, 64ul>*) const */

void __thiscall
VHACD::VoxelSet::ComputeExteriorPoints(VoxelSet *this,Plane *param_1,Mesh *param_2,SArray *param_3)

{
  long lVar1;
  VoxelSet *pVVar2;
  SArray *__src;
  int iVar3;
  undefined auVar4 [16];
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  SArray *pSVar10;
  ulong *__dest;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  ulong local_178 [6];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulong uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  ulong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  double dStack_b0;
  undefined8 local_a8;
  long local_a0;
  
  lVar5 = tpidr_el0;
  local_a0 = *(long *)(lVar5 + 0x28);
  lVar8 = *(long *)(this + 0xa08);
  if (lVar8 != 0) {
    lVar12 = 0;
    do {
      uVar14 = *(undefined8 *)(this + 0x9b8);
      pVVar2 = this + 0x9c0;
      if (*(long *)(this + 0xa10) != 8) {
        pVVar2 = *(VoxelSet **)(this + 0xa00);
      }
      iVar3 = *(int *)(pVVar2 + lVar12 * 8);
      dVar16 = (double)(int)*(short *)((long)(pVVar2 + lVar12 * 8) + 4);
      dVar17 = (double)(iVar3 >> 0x10);
      dVar18 = (double)(int)(short)iVar3;
      dStack_b0 = (double)NEON_fmadd(dVar17,uVar14,*(undefined8 *)(this + 0x9a8));
      local_b8 = NEON_fmadd(dVar18,uVar14,*(undefined8 *)(this + 0x9a0));
      local_a8 = NEON_fmadd(dVar16,uVar14,*(undefined8 *)(this + 0x9b0));
      uVar14 = NEON_fmadd(*(undefined8 *)param_1,local_b8,dStack_b0 * *(double *)(param_1 + 8));
      dVar15 = (double)NEON_fmadd(*(undefined8 *)(param_1 + 0x10),local_a8,uVar14);
      if ((0.0 <= *(double *)(param_1 + 0x18) + dVar15) &&
         (uVar6 = Mesh::IsInside(param_2,(Vec3 *)&local_b8), (uVar6 & 1) == 0)) {
        uVar14 = *(undefined8 *)(this + 0x9b8);
        uVar6 = *(ulong *)(param_3 + 0x608);
        local_178[0] = NEON_fmadd(dVar18 + -0.5,uVar14,*(undefined8 *)(this + 0x9a0));
        local_148 = NEON_fmadd(dVar18 + 0.5,uVar14,*(undefined8 *)(this + 0x9a0));
        local_178[1] = NEON_fmadd(dVar17 + -0.5,uVar14,*(undefined8 *)(this + 0x9a8));
        uStack_140 = NEON_fmadd(dVar17 + 0.5,uVar14,*(undefined8 *)(this + 0x9a8));
        uVar13 = *(ulong *)(param_3 + 0x610);
        local_178[2] = NEON_fmadd(dVar16 + -0.5,uVar14,*(undefined8 *)(this + 0x9b0));
        local_108 = NEON_fmadd(dVar16 + 0.5,uVar14,*(undefined8 *)(this + 0x9b0));
        local_118 = local_178[0];
        uStack_110 = local_178[1];
        local_e8 = local_148;
        uStack_e0 = uStack_140;
        local_178[3] = local_148;
        local_178[4] = local_178[1];
        local_178[5] = local_178[2];
        local_138 = local_178[2];
        uStack_130 = local_178[0];
        local_128 = uStack_140;
        uStack_120 = local_178[2];
        uStack_100 = local_148;
        local_f8 = local_178[1];
        uStack_f0 = local_108;
        local_d8 = local_108;
        uStack_d0 = local_178[0];
        local_c8 = uStack_140;
        uStack_c0 = local_108;
        lVar9 = 0;
        do {
          if (uVar6 == uVar13) {
            uVar11 = uVar13 * 2;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar11;
            uVar6 = uVar13 * 0x30 | 8;
            if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
              uVar6 = 0xffffffffffffffff;
            }
            puVar7 = (ulong *)operator_new__(uVar6);
            pSVar10 = *(SArray **)(param_3 + 0x600);
            __src = param_3;
            if (uVar13 != 0x40) {
              __src = pSVar10;
            }
            __dest = puVar7 + 1;
            *puVar7 = uVar11;
            memcpy(__dest,__src,uVar13 * 0x18);
            uVar6 = uVar13;
            if (pSVar10 != (SArray *)0x0) {
              operator_delete__(pSVar10 + -8);
              uVar6 = *(ulong *)(param_3 + 0x608);
            }
            *(ulong **)(param_3 + 0x600) = __dest;
            *(ulong *)(param_3 + 0x610) = uVar11;
            uVar13 = uVar11;
          }
          else {
            __dest = *(ulong **)(param_3 + 0x600);
          }
          puVar7 = (ulong *)param_3;
          if (uVar13 != 0x40) {
            puVar7 = __dest;
          }
          lVar1 = lVar9 + 0x18;
          puVar7 = puVar7 + uVar6 * 3;
          uVar6 = uVar6 + 1;
          uVar11 = *(ulong *)((long)local_178 + lVar9);
          *(ulong *)(param_3 + 0x608) = uVar6;
          *puVar7 = uVar11;
          puVar7[1] = *(ulong *)((long)local_178 + lVar9 + 8);
          puVar7[2] = *(ulong *)((long)local_178 + lVar9 + 0x10);
          lVar9 = lVar1;
        } while (lVar1 != 0xc0);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar8);
  }
  if (*(long *)(lVar5 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


