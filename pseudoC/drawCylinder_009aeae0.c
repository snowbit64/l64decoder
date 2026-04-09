// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawCylinder
// Entry Point: 009aeae0
// Size: 1128 bytes
// Signature: undefined __thiscall drawCylinder(btIDebugDraw * this, float param_1, float param_2, int param_3, btTransform * param_4, btVector3 * param_5)


/* btIDebugDraw::drawCylinder(float, float, int, btTransform const&, btVector3 const&) */

void __thiscall
btIDebugDraw::drawCylinder
          (btIDebugDraw *this,float param_1,float param_2,int param_3,btTransform *param_4,
          btVector3 *param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float local_138;
  float fStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined4 local_104;
  undefined8 local_100;
  ulong local_f8;
  undefined8 local_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  uVar2 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_3 << 2;
  local_c0 = 0;
  local_b8 = 0;
  *(float *)((long)&local_c0 + uVar2) = param_2;
  fVar22 = *(float *)(param_4 + 0x38);
  lVar7 = (long)((param_3 + 1) % 3);
  fVar20 = *(float *)(param_4 + 0x30);
  fVar21 = *(float *)(param_4 + 0x34);
  uVar8 = 0xffffffe2;
  lVar5 = lVar7 * 4;
  lVar6 = (long)((param_3 + 2) % 3) * 4;
  local_d0 = 0;
  local_c8 = 0;
  *(float *)((long)&local_d0 + uVar2) = -param_2;
  local_e0 = 0;
  local_d8 = 0;
  *(float *)((long)&local_e0 + uVar2) = param_2;
  do {
    uVar8 = uVar8 + 0x1e;
    sincosf((float)uVar8 * 0.01745329,&fStack_134,&local_138);
    uVar9 = *(undefined4 *)param_4;
    fVar13 = *(float *)(param_4 + 4);
    uVar14 = *(undefined4 *)(param_4 + 0x10);
    fVar16 = *(float *)(param_4 + 0x14);
    uVar30 = *(undefined4 *)(param_4 + 8);
    lVar3 = *(long *)this;
    *(float *)((long)&local_d0 + lVar5) = fStack_134 * param_1;
    *(float *)((long)&local_d0 + lVar6) = local_138 * param_1;
    pcVar4 = *(code **)(lVar3 + 0x20);
    *(float *)((long)&local_e0 + lVar5) = fStack_134 * param_1;
    *(float *)((long)&local_e0 + lVar6) = local_138 * param_1;
    uVar25 = NEON_fmadd(uVar9,(undefined4)local_d0,fVar13 * local_d0._4_4_);
    uVar28 = NEON_fmadd(uVar14,(undefined4)local_d0,local_d0._4_4_ * fVar16);
    uVar17 = NEON_fmadd(*(undefined4 *)(param_4 + 0x20),(undefined4)local_d0,
                        local_d0._4_4_ * *(float *)(param_4 + 0x24));
    uVar10 = NEON_fmadd(uVar9,(undefined4)local_e0,fVar13 * local_e0._4_4_);
    uVar14 = NEON_fmadd(uVar14,(undefined4)local_e0,fVar16 * local_e0._4_4_);
    uVar9 = NEON_fmadd(*(undefined4 *)(param_4 + 0x20),(undefined4)local_e0,
                       *(float *)(param_4 + 0x24) * local_e0._4_4_);
    fVar26 = (float)NEON_fmadd(uVar30,(undefined4)local_c8,uVar25);
    fVar16 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x18),(undefined4)local_c8,uVar28);
    fVar18 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x28),(undefined4)local_c8,uVar17);
    fVar11 = (float)NEON_fmadd(uVar30,(undefined4)local_d8,uVar10);
    fVar15 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x18),(undefined4)local_d8,uVar14);
    fVar13 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x28),(undefined4)local_d8,uVar9);
    local_f0 = CONCAT44(fVar21 + fVar16,fVar20 + fVar26);
    local_e8 = (ulong)(uint)(fVar22 + fVar18);
    local_100 = CONCAT44(fVar21 + fVar15,fVar20 + fVar11);
    local_f8 = (ulong)(uint)(fVar22 + fVar13);
    (*pcVar4)(this,&local_f0,&local_100,param_5);
  } while (uVar8 < 0x14a);
  uVar30 = *(undefined4 *)param_4;
  fVar15 = *(float *)(param_4 + 4);
  uVar25 = (undefined4)local_c0;
  fVar11 = local_c0._4_4_;
  uVar12 = *(undefined4 *)(param_4 + 0x10);
  fVar18 = *(float *)(param_4 + 0x14);
  uVar19 = *(undefined4 *)(param_4 + 0x20);
  fVar26 = *(float *)(param_4 + 0x24);
  fVar13 = local_c0._4_4_ * fVar26;
  uVar24 = *(undefined4 *)(param_4 + 8);
  uVar28 = (undefined4)local_b8;
  local_f0 = 0;
  local_e8 = 0;
  uVar9 = NEON_fmadd(uVar30,(undefined4)local_c0,fVar15 * local_c0._4_4_);
  uVar27 = *(undefined4 *)(param_4 + 0x18);
  uVar10 = NEON_fmadd(uVar12,(undefined4)local_c0,local_c0._4_4_ * fVar18);
  *(undefined4 *)((long)&local_f0 + (long)param_3 * 4) = 0x3f800000;
  uVar23 = NEON_fmadd(uVar19,uVar25,fVar13);
  uVar14 = (undefined4)local_f0;
  fVar16 = local_f0._4_4_;
  local_110 = (float)NEON_fmadd(uVar24,uVar28,uVar9);
  uVar29 = *(undefined4 *)(param_4 + 0x28);
  fStack_10c = (float)NEON_fmadd(uVar27,uVar28,uVar10);
  local_100 = 0;
  local_f8 = 0;
  *(undefined4 *)((long)&local_100 + lVar7 * 4) = 0x3f800000;
  uVar17 = (undefined4)local_e8;
  local_108 = (float)NEON_fmadd(uVar29,uVar28,uVar23);
  local_110 = fVar20 - local_110;
  fStack_10c = fVar21 - fStack_10c;
  uVar9 = (undefined4)local_100;
  fVar13 = local_100._4_4_;
  uVar10 = (undefined4)local_f8;
  uVar23 = NEON_fmadd(uVar30,uVar14,fVar15 * fVar16);
  uVar31 = NEON_fmadd(uVar12,uVar14,fVar18 * fVar16);
  uVar32 = NEON_fmadd(uVar19,uVar14,fVar26 * fVar16);
  uStack_11c = NEON_fmadd(uVar27,(undefined4)local_e8,uVar31);
  local_108 = fVar22 - local_108;
  uVar30 = NEON_fmadd(uVar30,(undefined4)local_100,fVar15 * local_100._4_4_);
  local_120 = NEON_fmadd(uVar24,(undefined4)local_e8,uVar23);
  uVar12 = NEON_fmadd(uVar12,(undefined4)local_100,fVar18 * local_100._4_4_);
  uVar19 = NEON_fmadd(uVar19,(undefined4)local_100,fVar26 * local_100._4_4_);
  local_118 = NEON_fmadd(uVar29,(undefined4)local_e8,uVar32);
  local_130 = NEON_fmadd(uVar24,(undefined4)local_f8,uVar30);
  uStack_12c = NEON_fmadd(uVar27,(undefined4)local_f8,uVar12);
  local_128 = NEON_fmadd(uVar29,(undefined4)local_f8,uVar19);
  local_104 = 0;
  local_114 = 0;
  local_124 = 0;
  (**(code **)(*(long *)this + 0x88))
            (param_1,param_1,0,0x40c90fdb,0x41200000,this,&local_110,&local_120,&local_130,param_5,0
            );
  uVar30 = *(undefined4 *)param_4;
  fVar15 = *(float *)(param_4 + 4);
  uVar19 = *(undefined4 *)(param_4 + 0x10);
  fVar18 = *(float *)(param_4 + 0x14);
  uVar24 = *(undefined4 *)(param_4 + 0x20);
  fVar26 = *(float *)(param_4 + 0x24);
  uVar27 = *(undefined4 *)(param_4 + 8);
  uVar29 = *(undefined4 *)(param_4 + 0x18);
  uVar31 = *(undefined4 *)(param_4 + 0x28);
  uVar12 = NEON_fmadd(uVar30,uVar25,fVar11 * fVar15);
  uVar23 = NEON_fmadd(uVar19,uVar25,fVar11 * fVar18);
  uVar25 = NEON_fmadd(uVar24,uVar25,fVar11 * fVar26);
  local_110 = (float)NEON_fmadd(uVar27,uVar28,uVar12);
  fStack_10c = (float)NEON_fmadd(uVar29,uVar28,uVar23);
  local_108 = (float)NEON_fmadd(uVar31,uVar28,uVar25);
  local_104 = 0;
  uVar28 = NEON_fmadd(uVar30,uVar14,fVar16 * fVar15);
  uVar12 = NEON_fmadd(uVar19,uVar14,fVar16 * fVar18);
  uVar23 = NEON_fmadd(uVar24,uVar14,fVar16 * fVar26);
  local_110 = fVar20 + local_110;
  fStack_10c = fVar21 + fStack_10c;
  local_114 = 0;
  uVar14 = NEON_fmadd(uVar30,uVar9,fVar13 * fVar15);
  uVar25 = NEON_fmadd(uVar19,uVar9,fVar13 * fVar18);
  uVar9 = NEON_fmadd(uVar24,uVar9,fVar13 * fVar26);
  local_108 = fVar22 + local_108;
  local_118 = NEON_fmadd(uVar31,uVar17,uVar23);
  local_120 = NEON_fmadd(uVar27,uVar17,uVar28);
  uStack_11c = NEON_fmadd(uVar29,uVar17,uVar12);
  local_130 = NEON_fmadd(uVar27,uVar10,uVar14);
  uStack_12c = NEON_fmadd(uVar29,uVar10,uVar25);
  local_128 = NEON_fmadd(uVar31,uVar10,uVar9);
  local_124 = 0;
  (**(code **)(*(long *)this + 0x88))
            (param_1,param_1,0,0x40c90fdb,0x41200000,this,&local_110,&local_120,&local_130,param_5,0
            );
  if (*(long *)(lVar1 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


