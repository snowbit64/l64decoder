// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: search
// Entry Point: 00ec2e90
// Size: 816 bytes
// Signature: undefined __thiscall search(KdTreeNode * this, Axes param_1, float * param_2, float param_3, uint * param_4, uint param_5, KdTreeFindNode * param_6, KdTreeInterface * param_7)


/* FLOAT_MATH::VERTEX_INDEX::KdTreeNode::search(FLOAT_MATH::VERTEX_INDEX::Axes, float const*, float,
   unsigned int&, unsigned int, FLOAT_MATH::VERTEX_INDEX::KdTreeFindNode*,
   FLOAT_MATH::VERTEX_INDEX::KdTreeInterface const*) */

void __thiscall
FLOAT_MATH::VERTEX_INDEX::KdTreeNode::search
          (KdTreeNode *this,Axes param_1,float *param_2,float param_3,uint *param_4,uint param_5,
          KdTreeFindNode *param_6,KdTreeInterface *param_7)

{
  uint uVar1;
  float *pfVar2;
  KdTreeNode *this_00;
  undefined8 *puVar3;
  double *pdVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  
LAB_00ec2ef4:
  pfVar2 = (float *)(**(code **)(*(long *)param_7 + 8))(param_7,*(undefined4 *)this);
  fVar10 = *param_2 - *pfVar2;
  fVar14 = param_2[1] - pfVar2[1];
  fVar8 = param_2[2] - pfVar2[2];
  if (param_1 == 2) {
    if (fVar8 <= 0.0) {
      this_00 = *(KdTreeNode **)((long)this + 8);
      if (param_3 <= -fVar8) goto LAB_00ec3040;
      param_1 = 0;
      puVar3 = (undefined8 *)((long)this + 0x10);
    }
    else {
      this_00 = *(KdTreeNode **)((long)this + 0x10);
      if (param_3 <= fVar8) {
LAB_00ec3040:
        param_1 = 0;
        uVar11 = NEON_fmadd(fVar10,fVar10,fVar14 * fVar14);
        fVar8 = (float)NEON_fmadd(fVar8,fVar8,uVar11);
        goto joined_r0x00ec3058;
      }
      param_1 = 0;
      puVar3 = (undefined8 *)((long)this + 8);
    }
LAB_00ec3004:
    puVar7 = (undefined4 *)*puVar3;
    uVar11 = NEON_fmadd(fVar10,fVar10,fVar14 * fVar14);
    fVar8 = (float)NEON_fmadd(fVar8,fVar8,uVar11);
joined_r0x00ec2fac:
    if (param_3 * param_3 <= fVar8) goto LAB_00ec3174;
LAB_00ec307c:
    uVar1 = *param_4;
    if (uVar1 == 0) {
LAB_00ec30c0:
      *(KdTreeNode **)param_6 = this;
      *(double *)(param_6 + 8) = (double)fVar8;
    }
    else {
      if (uVar1 != 1) {
        dVar9 = (double)fVar8;
        uVar6 = 0;
        pdVar4 = (double *)(param_6 + 8);
LAB_00ec30d8:
        if (*pdVar4 <= dVar9) goto code_r0x00ec30e4;
        if (param_5 <= uVar1) {
          uVar1 = param_5 - 1;
        }
        uVar5 = (ulong)uVar1;
        if ((uint)uVar6 < uVar1) {
          puVar3 = (undefined8 *)(param_6 + uVar5 * 0x10);
          do {
            uVar5 = uVar5 - 1;
            puVar3[1] = puVar3[-1];
            *puVar3 = puVar3[-2];
            puVar3 = puVar3 + -2;
          } while ((uVar6 & 0xffffffff) < uVar5);
        }
        *pdVar4 = dVar9;
        *(KdTreeNode **)(param_6 + (uVar6 & 0xffffffff) * 0x10) = this;
        goto LAB_00ec3160;
      }
      dVar9 = (double)fVar8;
      if (*(double *)(param_6 + 8) <= dVar9) {
        if (1 < param_5) {
          *(KdTreeNode **)(param_6 + 0x10) = this;
          *(double *)(param_6 + 0x18) = dVar9;
        }
      }
      else {
        if (param_5 == 1) goto LAB_00ec30c0;
        uVar13 = *(undefined8 *)(param_6 + 8);
        uVar12 = *(undefined8 *)param_6;
        *(KdTreeNode **)param_6 = this;
        *(double *)(param_6 + 8) = dVar9;
        *(undefined8 *)(param_6 + 0x18) = uVar13;
        *(undefined8 *)(param_6 + 0x10) = uVar12;
      }
    }
    goto LAB_00ec3160;
  }
  if (param_1 != 1) {
    if (param_1 == 0) {
      if (fVar10 <= 0.0) {
        this_00 = *(KdTreeNode **)((long)this + 8);
        if (param_3 <= -fVar10) goto LAB_00ec3020;
        puVar3 = (undefined8 *)((long)this + 0x10);
        param_1 = 1;
      }
      else {
        this_00 = *(KdTreeNode **)((long)this + 0x10);
        if (param_3 <= fVar10) {
LAB_00ec3020:
          param_1 = 1;
          uVar11 = NEON_fmadd(fVar10,fVar10,fVar14 * fVar14);
          fVar8 = (float)NEON_fmadd(fVar8,fVar8,uVar11);
          goto joined_r0x00ec3058;
        }
        puVar3 = (undefined8 *)((long)this + 8);
        param_1 = 1;
      }
      goto LAB_00ec3004;
    }
    puVar7 = (undefined4 *)0x0;
    this_00 = (KdTreeNode *)0x0;
    uVar11 = NEON_fmadd(fVar10,fVar10,fVar14 * fVar14);
    fVar8 = (float)NEON_fmadd(fVar8,fVar8,uVar11);
    goto joined_r0x00ec2fac;
  }
  if (fVar14 <= 0.0) {
    this_00 = *(KdTreeNode **)((long)this + 8);
    if (-fVar14 < param_3) {
      puVar3 = (undefined8 *)((long)this + 0x10);
      goto LAB_00ec3000;
    }
  }
  else {
    this_00 = *(KdTreeNode **)((long)this + 0x10);
    if (fVar14 < param_3) {
      puVar3 = (undefined8 *)((long)this + 8);
LAB_00ec3000:
      param_1 = 2;
      goto LAB_00ec3004;
    }
  }
  param_1 = 2;
  uVar11 = NEON_fmadd(fVar10,fVar10,fVar14 * fVar14);
  fVar8 = (float)NEON_fmadd(fVar8,fVar8,uVar11);
joined_r0x00ec3058:
  puVar7 = (undefined4 *)0x0;
  if (fVar8 < param_3 * param_3) goto LAB_00ec307c;
  goto LAB_00ec3174;
code_r0x00ec30e4:
  uVar6 = uVar6 + 1;
  pdVar4 = pdVar4 + 2;
  if (uVar1 == uVar6) goto code_r0x00ec30f4;
  goto LAB_00ec30d8;
code_r0x00ec30f4:
  if (uVar1 < param_5) {
    *(KdTreeNode **)(param_6 + (ulong)uVar1 * 0x10) = this;
    *(double *)((long)(param_6 + (ulong)uVar1 * 0x10) + 8) = dVar9;
  }
LAB_00ec3160:
  uVar1 = param_5;
  if (*param_4 + 1 <= param_5) {
    uVar1 = *param_4 + 1;
  }
  *param_4 = uVar1;
LAB_00ec3174:
  this = (KdTreeNode *)puVar7;
  if (this_00 != (KdTreeNode *)0x0) {
    search(this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  if ((undefined4 *)this == (undefined4 *)0x0) {
    return;
  }
  goto LAB_00ec2ef4;
}


