// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawCapsule
// Entry Point: 009ae6b8
// Size: 1064 bytes
// Signature: undefined __thiscall drawCapsule(btIDebugDraw * this, float param_1, float param_2, int param_3, btTransform * param_4, btVector3 * param_5)


/* btIDebugDraw::drawCapsule(float, float, int, btTransform const&, btVector3 const&) */

void __thiscall
btIDebugDraw::drawCapsule
          (btIDebugDraw *this,float param_1,float param_2,int param_3,btTransform *param_4,
          btVector3 *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float local_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  
  lVar2 = tpidr_el0;
  uVar8 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_3 << 2;
  local_90 = *(long *)(lVar2 + 0x28);
  local_a0 = 0;
  local_98 = 0;
  fVar14 = *(float *)(param_4 + 0x24);
  *(float *)((long)&local_a0 + uVar8) = -param_2;
  uStack_b4 = 0;
  uVar1 = (param_3 + 1) % 3;
  uVar10 = NEON_fmadd((undefined4)local_a0,*(undefined4 *)param_4,
                      local_a0._4_4_ * *(float *)(param_4 + 4));
  uVar12 = NEON_fmadd((undefined4)local_a0,*(undefined4 *)(param_4 + 0x10),
                      local_a0._4_4_ * *(float *)(param_4 + 0x14));
  uVar9 = NEON_fmadd((undefined4)local_a0,*(undefined4 *)(param_4 + 0x20),local_a0._4_4_ * fVar14);
  fVar18 = *(float *)(param_4 + 0x38);
  uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  fVar11 = (float)NEON_fmadd((undefined4)local_98,*(undefined4 *)(param_4 + 8),uVar10);
  fVar13 = (float)NEON_fmadd((undefined4)local_98,*(undefined4 *)(param_4 + 0x18),uVar12);
  lVar5 = *(long *)this;
  fVar14 = (float)NEON_fmadd((undefined4)local_98,*(undefined4 *)(param_4 + 0x28),uVar9);
  local_b0 = 0;
  local_a8 = 0;
  fVar15 = *(float *)(param_4 + 0x30);
  fVar17 = *(float *)(param_4 + 0x34);
  *(float *)((long)&local_b0 + uVar8) = param_2;
  fStack_b8 = fVar14 + fVar18;
  local_c0 = fVar11 + fVar15;
  fStack_bc = fVar13 + fVar17;
  uStack_e8 = *(undefined8 *)(param_4 + 8);
  local_f0 = *(undefined8 *)param_4;
  uStack_d8 = *(undefined8 *)(param_4 + 0x18);
  uStack_e0 = *(undefined8 *)(param_4 + 0x10);
  uStack_f8 = (ulong)(uint)(fVar14 + fVar18);
  local_100 = CONCAT44(fVar13 + fVar17,fVar11 + fVar15);
  local_110 = *(undefined4 *)((long)&local_f0 + uVar7);
  uStack_c8 = *(undefined8 *)(param_4 + 0x28);
  local_d0 = *(undefined8 *)(param_4 + 0x20);
  uStack_10c = *(undefined4 *)((long)&uStack_e0 + uVar7);
  local_108 = *(undefined4 *)((long)&local_d0 + uVar7);
  local_120 = -*(float *)((long)&local_f0 + uVar8);
  fStack_11c = -*(float *)((long)&uStack_e0 + uVar8);
  local_118 = -*(float *)((long)&local_d0 + uVar8);
  local_104 = 0;
  local_114 = 0;
  (**(code **)(lVar5 + 0x90))
            (param_1,0xbfc90fdb,0x3fc90fdb,0xbfc90fdb,0x3fc90fdb,0x41f00000,this,&local_100,
             &local_110,&local_120,param_5,0);
  uStack_b4 = 0;
  uVar10 = NEON_fmadd((undefined4)local_b0,*(undefined4 *)param_4,
                      local_b0._4_4_ * *(float *)(param_4 + 4));
  uVar12 = NEON_fmadd((undefined4)local_b0,*(undefined4 *)(param_4 + 0x10),
                      local_b0._4_4_ * *(float *)(param_4 + 0x14));
  uVar9 = NEON_fmadd((undefined4)local_b0,*(undefined4 *)(param_4 + 0x20),
                     local_b0._4_4_ * *(float *)(param_4 + 0x24));
  local_104 = 0;
  fVar11 = (float)NEON_fmadd((undefined4)local_a8,*(undefined4 *)(param_4 + 8),uVar10);
  local_114 = 0;
  fVar13 = (float)NEON_fmadd((undefined4)local_a8,*(undefined4 *)(param_4 + 0x18),uVar12);
  fVar14 = (float)NEON_fmadd((undefined4)local_a8,*(undefined4 *)(param_4 + 0x28),uVar9);
  fStack_b8 = fVar14 + *(float *)(param_4 + 0x38);
  local_c0 = fVar11 + *(float *)(param_4 + 0x30);
  fStack_bc = fVar13 + *(float *)(param_4 + 0x34);
  uStack_e8 = *(ulong *)(param_4 + 8);
  local_f0 = *(undefined8 *)param_4;
  uStack_d8 = *(undefined8 *)(param_4 + 0x18);
  uStack_e0 = *(undefined8 *)(param_4 + 0x10);
  local_110 = *(undefined4 *)((long)&local_f0 + uVar7);
  uStack_10c = *(undefined4 *)((long)&uStack_e0 + uVar7);
  uStack_f8 = (ulong)(uint)(fVar14 + *(float *)(param_4 + 0x38));
  local_100 = CONCAT44(fVar13 + *(float *)(param_4 + 0x34),fVar11 + *(float *)(param_4 + 0x30));
  uStack_c8 = *(undefined8 *)(param_4 + 0x28);
  local_d0 = *(undefined8 *)(param_4 + 0x20);
  local_108 = *(undefined4 *)((long)&local_d0 + uVar7);
  local_120 = *(float *)((long)&local_f0 + uVar8);
  fStack_11c = *(float *)((long)&uStack_e0 + uVar8);
  local_118 = *(float *)((long)&local_d0 + uVar8);
  (**(code **)(*(long *)this + 0x90))
            (param_1,0xbfc90fdb,0x3fc90fdb,0xbfc90fdb,0x3fc90fdb,0x41f00000,this,&local_100,
             &local_110,&local_120,param_5,0);
  fVar14 = *(float *)(param_4 + 0x30);
  fVar11 = *(float *)(param_4 + 0x34);
  fVar13 = *(float *)(param_4 + 0x38);
  uVar6 = 0xffffffe2;
  lVar5 = (long)((param_3 + 2) % 3) * 4;
  do {
    uVar6 = uVar6 + 0x1e;
    sincosf((float)uVar6 * 0.01745329,&fStack_124,&local_128);
    uVar9 = *(undefined4 *)param_4;
    fVar15 = *(float *)(param_4 + 4);
    uVar12 = *(undefined4 *)(param_4 + 0x10);
    fVar17 = *(float *)(param_4 + 0x14);
    uVar24 = *(undefined4 *)(param_4 + 8);
    lVar3 = *(long *)this;
    *(float *)((long)&local_a0 + (long)(int)uVar1 * 4) = fStack_124 * param_1;
    *(float *)((long)&local_a0 + lVar5) = local_128 * param_1;
    pcVar4 = *(code **)(lVar3 + 0x20);
    *(float *)((long)&local_b0 + (long)(int)uVar1 * 4) = fStack_124 * param_1;
    *(float *)((long)&local_b0 + lVar5) = local_128 * param_1;
    uVar21 = NEON_fmadd(uVar9,(undefined4)local_a0,fVar15 * local_a0._4_4_);
    uVar23 = NEON_fmadd(uVar12,(undefined4)local_a0,local_a0._4_4_ * fVar17);
    uVar19 = NEON_fmadd(*(undefined4 *)(param_4 + 0x20),(undefined4)local_a0,
                        local_a0._4_4_ * *(float *)(param_4 + 0x24));
    uVar10 = NEON_fmadd(uVar9,(undefined4)local_b0,fVar15 * local_b0._4_4_);
    uVar12 = NEON_fmadd(uVar12,(undefined4)local_b0,fVar17 * local_b0._4_4_);
    uVar9 = NEON_fmadd(*(undefined4 *)(param_4 + 0x20),(undefined4)local_b0,
                       *(float *)(param_4 + 0x24) * local_b0._4_4_);
    fVar22 = (float)NEON_fmadd(uVar24,(undefined4)local_98,uVar21);
    fVar17 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x18),(undefined4)local_98,uVar23);
    fVar20 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x28),(undefined4)local_98,uVar19);
    fVar18 = (float)NEON_fmadd(uVar24,(undefined4)local_a8,uVar10);
    fVar16 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x18),(undefined4)local_a8,uVar12);
    fVar15 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x28),(undefined4)local_a8,uVar9);
    local_f0 = CONCAT44(fVar11 + fVar17,fVar14 + fVar22);
    uStack_e8 = (ulong)(uint)(fVar13 + fVar20);
    local_100 = CONCAT44(fVar11 + fVar16,fVar14 + fVar18);
    uStack_f8 = (ulong)(uint)(fVar13 + fVar15);
    (*pcVar4)(this,&local_f0,&local_100,param_5);
  } while (uVar6 < 0x14a);
  if (*(long *)(lVar2 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


