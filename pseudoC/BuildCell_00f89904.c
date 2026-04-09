// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BuildCell
// Entry Point: 00f89904
// Size: 672 bytes
// Signature: undefined __thiscall BuildCell(btSparseSdf<3> * this, Cell * param_1)


/* btSparseSdf<3>::BuildCell(btSparseSdf<3>::Cell&) */

void __thiscall btSparseSdf<3>::BuildCell(btSparseSdf<3> *this,Cell *param_1)

{
  long lVar1;
  btConvexShape *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  sResults asStack_128 [56];
  undefined4 local_f0 [5];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined4 local_b4;
  long local_b0;
  
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  lVar5 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x80);
  puVar6 = (undefined8 *)((ulong)local_f0 | 4);
  iVar12 = *(int *)(param_1 + 0x104);
  fVar9 = *(float *)(this + 0x20);
  iVar13 = *(int *)(param_1 + 0x108);
  fVar14 = fVar9 * 3.0;
  fVar15 = fVar14 * (float)*(int *)(param_1 + 0x100);
  while( true ) {
    lVar8 = 0;
    uVar16 = NEON_fmadd(fVar9,(float)(int)lVar5,fVar14 * (float)iVar13);
    puVar7 = puVar4;
    while( true ) {
      pbVar2 = *(btConvexShape **)(param_1 + 0x118);
      uVar11 = 0;
      local_12c = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      local_dc = 0x3f800000;
      uVar17 = NEON_fmadd(fVar9,(float)(int)lVar8,fVar14 * (float)iVar12);
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0x3f800000;
      local_c4 = 0;
      uStack_bc = 0;
      local_b4 = 0;
      iVar3 = *(int *)(pbVar2 + 8);
      local_f0[0] = 0x3f800000;
      if (iVar3 < 0x14) {
        local_138 = fVar15;
        local_134 = uVar17;
        local_130 = uVar16;
        uVar10 = btGjkEpaSolver2::SignedDistance
                           ((btVector3 *)&local_138,0.0,pbVar2,(btTransform *)local_f0,asStack_128);
        pbVar2 = *(btConvexShape **)(param_1 + 0x118);
        iVar3 = *(int *)(pbVar2 + 8);
      }
      else {
        uVar10 = 0;
      }
      puVar7[-0x20] = uVar10;
      local_138 = *(float *)(this + 0x20);
      local_12c = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      local_138 = local_138 + fVar15;
      local_f0[0] = 0x3f800000;
      local_dc = 0x3f800000;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0x3f800000;
      local_c4 = 0;
      uStack_bc = 0;
      local_b4 = 0;
      if (iVar3 < 0x14) {
        local_134 = uVar17;
        local_130 = uVar16;
        uVar11 = btGjkEpaSolver2::SignedDistance
                           ((btVector3 *)&local_138,0.0,pbVar2,(btTransform *)local_f0,asStack_128);
        pbVar2 = *(btConvexShape **)(param_1 + 0x118);
      }
      puVar7[-0x10] = uVar11;
      uVar10 = 0;
      uVar11 = *(undefined4 *)(this + 0x20);
      local_12c = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      local_dc = 0x3f800000;
      local_138 = (float)NEON_fmadd(uVar11,0x40000000,fVar15);
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0x3f800000;
      local_c4 = 0;
      uStack_bc = 0;
      local_b4 = 0;
      local_f0[0] = 0x3f800000;
      if (*(int *)(pbVar2 + 8) < 0x14) {
        local_134 = uVar17;
        local_130 = uVar16;
        uVar11 = btGjkEpaSolver2::SignedDistance
                           ((btVector3 *)&local_138,0.0,pbVar2,(btTransform *)local_f0,asStack_128);
        pbVar2 = *(btConvexShape **)(param_1 + 0x118);
      }
      else {
        uVar11 = 0;
      }
      *puVar7 = uVar11;
      uVar11 = *(undefined4 *)(this + 0x20);
      local_12c = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      local_dc = 0x3f800000;
      local_138 = (float)NEON_fmadd(uVar11,0x40400000,fVar15);
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0x3f800000;
      local_c4 = 0;
      uStack_bc = 0;
      local_b4 = 0;
      local_f0[0] = 0x3f800000;
      local_134 = uVar17;
      local_130 = uVar16;
      if (*(int *)(pbVar2 + 8) < 0x14) {
        uVar10 = btGjkEpaSolver2::SignedDistance
                           ((btVector3 *)&local_138,0.0,pbVar2,(btTransform *)local_f0,asStack_128);
      }
      puVar7[0x10] = uVar10;
      if (lVar8 == 3) break;
      fVar9 = *(float *)(this + 0x20);
      puVar7 = puVar7 + 4;
      lVar8 = lVar8 + 1;
    }
    lVar5 = lVar5 + 1;
    if (lVar5 == 4) break;
    fVar9 = *(float *)(this + 0x20);
    puVar4 = puVar4 + 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


