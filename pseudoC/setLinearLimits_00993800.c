// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLinearLimits
// Entry Point: 00993800
// Size: 840 bytes
// Signature: undefined __thiscall setLinearLimits(Bt2D6Joint * this, btConstraintInfo2 * param_1, float param_2, int param_3, btTransform * param_4, btTransform * param_5, btVector3 * param_6, btVector3 * param_7, btVector3 * param_8, btVector3 * param_9)


/* Bt2D6Joint::setLinearLimits(btTypedConstraint::btConstraintInfo2*, float, int, btTransform
   const&, btTransform const&, btVector3 const&, btVector3 const&, btVector3 const&, btVector3
   const&) */

int __thiscall
Bt2D6Joint::setLinearLimits
          (Bt2D6Joint *this,btConstraintInfo2 *param_1,float param_2,int param_3,
          btTransform *param_4,btTransform *param_5,btVector3 *param_6,btVector3 *param_7,
          btVector3 *param_8,btVector3 *param_9)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  Bt2D6Joint BVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  Bt2D6Joint local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  Bt2D6Joint local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  long local_80;
  
  lVar4 = tpidr_el0;
  lVar12 = 0;
  uVar10 = 0;
  lVar11 = 0;
  local_80 = *(long *)(lVar4 + 0x28);
  uStack_c0 = 0x3f666666;
  local_c8 = 0x3e4ccccd;
  do {
    BVar5 = this[lVar11 + 0x14c];
    if (*(int *)(this + lVar11 * 4 + 0x1b4) == 0) {
      if (this[lVar11 + 0x14c] != (Bt2D6Joint)0x0) {
        BVar5 = (Bt2D6Joint)0x1;
        goto LAB_009938f0;
      }
    }
    else {
LAB_009938f0:
      local_b8 = BVar5;
      local_ac = this[lVar11 + 0x14f];
      local_84 = 0;
      uStack_9c = *(undefined4 *)(this + lVar12 + 0x1a4);
      local_a0 = *(undefined4 *)(this + lVar12 + 0x194);
      uVar1 = *(int *)(this + 0x36c) >> (uVar10 & 0x1f);
      uStack_a4 = *(undefined4 *)(this + lVar12 + 0x184);
      local_a8 = *(undefined4 *)(this + lVar12 + 0x154);
      uStack_d4 = *(undefined4 *)(this + lVar12 + 0xdc);
      local_d8 = *(undefined4 *)(this + lVar12 + 0xcc);
      local_d0 = *(undefined4 *)(this + lVar12 + 0xec);
      uStack_b0 = *(undefined4 *)(this + lVar12 + 0x174);
      uStack_cc = *(undefined4 *)(this + lVar12 + 0xfc);
      local_b4 = *(undefined4 *)(this + lVar12 + 0x164);
      local_90 = *(undefined4 *)(this + lVar12 + 0x290);
      uStack_8c = *(undefined4 *)(this + lVar12 + 0x2a0);
      local_88 = *(undefined4 *)(this + lVar12 + 0x2b0);
      fVar13 = param_2;
      if ((uVar1 & 1) != 0) {
        fVar13 = *(float *)(this + lVar12 + 0x11c);
      }
      iVar6 = (int)lVar11;
      uVar9 = (ulong)(iVar6 + 1U + ((iVar6 + 1U & 0xff) / 3) * -3) & 0xff;
      puVar2 = (undefined4 *)(param_1 + 4);
      if ((uVar1 & 2) != 0) {
        puVar2 = (undefined4 *)(this + lVar12 + 0x10c);
      }
      iVar3 = *(int *)(this + uVar9 * 0x44 + 0x200);
      local_c8 = CONCAT44(fVar13,*puVar2);
      uStack_c0 = CONCAT44(*(undefined4 *)(this + lVar12 + 0x13c),
                           *(undefined4 *)(this + lVar12 + 300));
      if (iVar3 - 1U < 2) {
LAB_00993a38:
        bVar7 = true;
      }
      else if (iVar3 == 4) {
        if (*(float *)(this + uVar9 * 0x44 + 500) < -0.001) goto LAB_00993a38;
        bVar7 = 0.001 < *(float *)(this + uVar9 * 0x44 + 0x1f8);
      }
      else if (iVar3 == 3) {
        bVar7 = *(float *)(this + uVar9 * 0x44 + 500) < -0.001 ||
                0.001 < *(float *)(this + uVar9 * 0x44 + 500);
      }
      else {
        bVar7 = false;
      }
      uVar9 = (ulong)(iVar6 + 2U + ((iVar6 + 2U & 0xff) / 3) * -3) & 0xff;
      iVar3 = *(int *)(this + uVar9 * 0x44 + 0x200);
      if (iVar3 - 1U < 2) {
LAB_0099387c:
        bVar8 = true;
      }
      else if (iVar3 == 4) {
        if (*(float *)(this + uVar9 * 0x44 + 500) < -0.001) goto LAB_0099387c;
        bVar8 = 0.001 < *(float *)(this + uVar9 * 0x44 + 0x1f8);
      }
      else if (iVar3 == 3) {
        bVar8 = *(float *)(this + uVar9 * 0x44 + 500) < -0.001 ||
                0.001 < *(float *)(this + uVar9 * 0x44 + 500);
      }
      else {
        bVar8 = false;
      }
      local_98 = *(int *)(this + lVar11 * 4 + 0x1b4);
      iVar6 = setLimitMotor(this,(RotationalLimitMotor *)&local_d8,iVar6,param_4,param_5,param_6,
                            param_7,param_8,param_9,param_1,param_3,(btVector3 *)&local_90,false,
                            (bool)(bVar7 & bVar8 ^ 1));
      param_3 = iVar6 + param_3;
    }
    lVar11 = lVar11 + 1;
    uVar10 = uVar10 + 2;
    lVar12 = lVar12 + 4;
    if (lVar11 == 3) {
      if (*(long *)(lVar4 + 0x28) == local_80) {
        return param_3;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


