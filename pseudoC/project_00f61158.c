// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: project
// Entry Point: 00f61158
// Size: 356 bytes
// Signature: undefined __thiscall project(btConvexHullShape * this, btTransform * param_1, btVector3 * param_2, float * param_3, float * param_4, btVector3 * param_5, btVector3 * param_6)


/* btConvexHullShape::project(btTransform const&, btVector3 const&, float&, float&, btVector3&,
   btVector3&) const */

void __thiscall
btConvexHullShape::project
          (btConvexHullShape *this,btTransform *param_1,btVector3 *param_2,float *param_3,
          float *param_4,btVector3 *param_5,btVector3 *param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  *param_3 = 3.402823e+38;
  fVar5 = -3.402823e+38;
  *param_4 = -3.402823e+38;
  uVar1 = *(uint *)(this + 0x7c);
  if (0 < (int)uVar1) {
    lVar3 = 0;
    do {
      uVar8 = *(undefined8 *)((float *)(*(long *)(this + 0x88) + lVar3) + 1);
      fVar5 = (float)*(undefined8 *)(this + 0x20) * (float)uVar8;
      fVar7 = (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) * (float)((ulong)uVar8 >> 0x20);
      fVar11 = *(float *)(this + 0x1c) * *(float *)(*(long *)(this + 0x88) + lVar3);
      fVar12 = (float)NEON_fmadd(*(undefined4 *)param_1,fVar11,
                                 (float)*(undefined8 *)(param_1 + 4) * fVar5);
      fVar6 = (float)*(undefined8 *)(param_1 + 0x14) * fVar5 +
              (float)*(undefined8 *)(param_1 + 0x10) * fVar11 +
              (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) * fVar7 +
              (float)*(undefined8 *)(param_1 + 0x34);
      fVar5 = (float)*(undefined8 *)(param_1 + 0x24) * fVar5 + *(float *)(param_1 + 0x20) * fVar11 +
              (float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20) * fVar7 +
              (float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
      uVar8 = CONCAT44(fVar5,fVar6);
      fVar7 = fVar12 + (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * fVar7 +
              *(float *)(param_1 + 0x30);
      fVar6 = (float)NEON_fmadd(*(undefined4 *)param_2,fVar7,
                                (float)*(undefined8 *)(param_2 + 4) * fVar6);
      fVar6 = fVar6 + (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * fVar5;
      if (fVar6 < *param_3) {
        *param_3 = fVar6;
        *(float *)param_5 = fVar7;
        *(undefined8 *)(param_5 + 4) = uVar8;
        *(undefined4 *)(param_5 + 0xc) = 0;
      }
      if (*param_4 < fVar6) {
        *param_4 = fVar6;
        *(float *)param_6 = fVar7;
        *(undefined8 *)(param_6 + 4) = uVar8;
        *(undefined4 *)(param_6 + 0xc) = 0;
      }
      lVar3 = lVar3 + 0x10;
    } while ((ulong)uVar1 * 0x10 - lVar3 != 0);
    fVar5 = *param_4;
  }
  fVar6 = *param_3;
  if (fVar5 < fVar6) {
    *param_3 = fVar5;
    *param_4 = fVar6;
    uVar8 = *(undefined8 *)param_6;
    uVar10 = *(undefined8 *)(param_5 + 8);
    uVar9 = *(undefined8 *)param_5;
    *(undefined8 *)(param_5 + 8) = *(undefined8 *)(param_6 + 8);
    *(undefined8 *)param_5 = uVar8;
    *(undefined8 *)(param_6 + 8) = uVar10;
    *(undefined8 *)param_6 = uVar9;
  }
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


