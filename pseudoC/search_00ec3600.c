// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: search
// Entry Point: 00ec3600
// Size: 804 bytes
// Signature: undefined __thiscall search(KdTreeNode * this, Axes param_1, double * param_2, double param_3, uint * param_4, uint param_5, KdTreeFindNode * param_6, KdTreeInterface * param_7)


/* FLOAT_MATH::VERTEX_INDEX::KdTreeNode::search(FLOAT_MATH::VERTEX_INDEX::Axes, double const*,
   double, unsigned int&, unsigned int, FLOAT_MATH::VERTEX_INDEX::KdTreeFindNode*,
   FLOAT_MATH::VERTEX_INDEX::KdTreeInterface const*) */

void __thiscall
FLOAT_MATH::VERTEX_INDEX::KdTreeNode::search
          (KdTreeNode *this,Axes param_1,double *param_2,double param_3,uint *param_4,uint param_5,
          KdTreeFindNode *param_6,KdTreeInterface *param_7)

{
  double *pdVar1;
  uint uVar2;
  double *pdVar3;
  KdTreeNode *this_00;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  
  pdVar1 = (double *)(param_6 + 8);
LAB_00ec3668:
  pdVar3 = (double *)(***(code ***)param_7)(param_7,*(undefined4 *)this);
  dVar9 = *param_2 - *pdVar3;
  dVar11 = param_2[1] - pdVar3[1];
  dVar8 = param_2[2] - pdVar3[2];
  if (param_1 == 2) {
    if (dVar8 <= 0.0) {
      this_00 = *(KdTreeNode **)((long)this + 8);
      if (param_3 <= -dVar8) goto LAB_00ec37b4;
      param_1 = 0;
      puVar4 = (undefined8 *)((long)this + 0x10);
    }
    else {
      this_00 = *(KdTreeNode **)((long)this + 0x10);
      if (param_3 <= dVar8) {
LAB_00ec37b4:
        param_1 = 0;
        uVar10 = NEON_fmadd(dVar9,dVar9,dVar11 * dVar11);
        dVar8 = (double)NEON_fmadd(dVar8,dVar8,uVar10);
        goto joined_r0x00ec37cc;
      }
      param_1 = 0;
      puVar4 = (undefined8 *)((long)this + 8);
    }
LAB_00ec3778:
    puVar7 = (undefined4 *)*puVar4;
    uVar10 = NEON_fmadd(dVar9,dVar9,dVar11 * dVar11);
    dVar8 = (double)NEON_fmadd(dVar8,dVar8,uVar10);
joined_r0x00ec3720:
    if (param_3 * param_3 <= dVar8) goto LAB_00ec38d8;
LAB_00ec37f0:
    uVar2 = *param_4;
    pdVar3 = pdVar1;
    if (uVar2 == 0) {
LAB_00ec3814:
      *(KdTreeNode **)param_6 = this;
      goto LAB_00ec38c0;
    }
    if (uVar2 != 1) {
      uVar6 = 0;
LAB_00ec3828:
      if (*pdVar3 <= dVar8) goto code_r0x00ec3834;
      if (param_5 <= uVar2) {
        uVar2 = param_5 - 1;
      }
      uVar5 = (ulong)uVar2;
      if ((uint)uVar6 < uVar2) {
        puVar4 = (undefined8 *)(param_6 + uVar5 * 0x10);
        do {
          uVar5 = uVar5 - 1;
          puVar4[1] = puVar4[-1];
          *puVar4 = puVar4[-2];
          puVar4 = puVar4 + -2;
        } while ((uVar6 & 0xffffffff) < uVar5);
      }
      *(KdTreeNode **)(param_6 + (uVar6 & 0xffffffff) * 0x10) = this;
      goto LAB_00ec38c0;
    }
    if (dVar8 < *pdVar1) {
      if (param_5 == 1) goto LAB_00ec3814;
      uVar10 = *(undefined8 *)param_6;
      *(KdTreeNode **)param_6 = this;
      *(undefined8 *)(param_6 + 0x18) = *(undefined8 *)(param_6 + 8);
      *(undefined8 *)(param_6 + 0x10) = uVar10;
      goto LAB_00ec38c0;
    }
    if (1 < param_5) {
      *(KdTreeNode **)(param_6 + 0x10) = this;
      pdVar3 = (double *)(param_6 + 0x18);
      goto LAB_00ec38c0;
    }
    goto LAB_00ec38c4;
  }
  if (param_1 != 1) {
    if (param_1 == 0) {
      if (dVar9 <= 0.0) {
        this_00 = *(KdTreeNode **)((long)this + 8);
        if (param_3 <= -dVar9) goto LAB_00ec3794;
        puVar4 = (undefined8 *)((long)this + 0x10);
        param_1 = 1;
      }
      else {
        this_00 = *(KdTreeNode **)((long)this + 0x10);
        if (param_3 <= dVar9) {
LAB_00ec3794:
          param_1 = 1;
          uVar10 = NEON_fmadd(dVar9,dVar9,dVar11 * dVar11);
          dVar8 = (double)NEON_fmadd(dVar8,dVar8,uVar10);
          goto joined_r0x00ec37cc;
        }
        puVar4 = (undefined8 *)((long)this + 8);
        param_1 = 1;
      }
      goto LAB_00ec3778;
    }
    puVar7 = (undefined4 *)0x0;
    this_00 = (KdTreeNode *)0x0;
    uVar10 = NEON_fmadd(dVar9,dVar9,dVar11 * dVar11);
    dVar8 = (double)NEON_fmadd(dVar8,dVar8,uVar10);
    goto joined_r0x00ec3720;
  }
  if (dVar11 <= 0.0) {
    this_00 = *(KdTreeNode **)((long)this + 8);
    if (-dVar11 < param_3) {
      puVar4 = (undefined8 *)((long)this + 0x10);
      goto LAB_00ec3774;
    }
  }
  else {
    this_00 = *(KdTreeNode **)((long)this + 0x10);
    if (dVar11 < param_3) {
      puVar4 = (undefined8 *)((long)this + 8);
LAB_00ec3774:
      param_1 = 2;
      goto LAB_00ec3778;
    }
  }
  param_1 = 2;
  uVar10 = NEON_fmadd(dVar9,dVar9,dVar11 * dVar11);
  dVar8 = (double)NEON_fmadd(dVar8,dVar8,uVar10);
joined_r0x00ec37cc:
  puVar7 = (undefined4 *)0x0;
  if (dVar8 < param_3 * param_3) goto LAB_00ec37f0;
  goto LAB_00ec38d8;
code_r0x00ec3834:
  uVar6 = uVar6 + 1;
  pdVar3 = pdVar3 + 2;
  if (uVar2 == uVar6) goto code_r0x00ec3844;
  goto LAB_00ec3828;
code_r0x00ec3844:
  if (uVar2 < param_5) {
    pdVar3 = (double *)((long)(param_6 + (ulong)uVar2 * 0x10) + 8);
    *(KdTreeNode **)(param_6 + (ulong)uVar2 * 0x10) = this;
LAB_00ec38c0:
    *pdVar3 = dVar8;
  }
LAB_00ec38c4:
  uVar2 = param_5;
  if (*param_4 + 1 <= param_5) {
    uVar2 = *param_4 + 1;
  }
  *param_4 = uVar2;
LAB_00ec38d8:
  this = (KdTreeNode *)puVar7;
  if (this_00 != (KdTreeNode *)0x0) {
    search(this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  if ((undefined4 *)this == (undefined4 *)0x0) {
    return;
  }
  goto LAB_00ec3668;
}


