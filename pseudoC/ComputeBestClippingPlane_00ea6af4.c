// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeBestClippingPlane
// Entry Point: 00ea6af4
// Size: 1496 bytes
// Signature: undefined __thiscall ComputeBestClippingPlane(VHACD * this, PrimitiveSet * param_1, double param_2, SArray * param_3, Vec3 * param_4, double param_5, double param_6, double param_7, int param_8, Plane * param_9, double * param_10, Parameters * param_11)


/* VHACD::VHACD::ComputeBestClippingPlane(VHACD::PrimitiveSet const*, double,
   VHACD::SArray<VHACD::Plane, 64ul> const&, VHACD::Vec3<double> const&, double, double, double,
   int, VHACD::Plane&, double&, VHACD::IVHACD::Parameters const&) */

void __thiscall
VHACD::VHACD::ComputeBestClippingPlane
          (VHACD *this,PrimitiveSet *param_1,double param_2,SArray *param_3,Vec3 *param_4,
          double param_5,double param_6,double param_7,int param_8,Plane *param_9,double *param_10,
          Parameters *param_11)

{
  double *this_00;
  long *plVar1;
  SArray *pSVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  double *this_01;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  double extraout_d0;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  long **local_230;
  ulong local_1c8;
  double local_1c0;
  double dStack_1b8;
  undefined8 local_1b0;
  double dStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  plVar13 = *(long **)(param_11 + 0x30);
  if ((plVar13 != (long *)0x0) && (DAT_02123380 == 0)) {
    DAT_02123380 = (**(code **)(*plVar13 + 0x10))(plVar13,"VHACD::ComputeBestClippingPlane");
    plVar13 = *(long **)(param_11 + 0x30);
    param_2 = extraout_d0;
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(param_2,plVar13,DAT_02123380);
  }
  uVar14 = *(ulong *)(param_3 + 0xa08);
  *param_10 = 1.79769e+308;
  plVar6 = (long *)operator_new__(0xc38);
  *plVar6 = 2;
  plVar6[0xc3] = 0x40;
  plVar6[0x185] = 0;
  plVar6[0x184] = 0;
  plVar6[0x186] = 0x40;
  plVar6[0xc2] = 0;
  plVar6[0xc1] = 0;
  plVar7 = (long *)operator_new__(0x1308);
  this_01 = (double *)(plVar7 + 1);
  *plVar7 = 2;
  Mesh::Mesh((Mesh *)this_01);
  this_00 = (double *)(plVar7 + 0x131);
  Mesh::Mesh((Mesh *)this_00);
  plVar8 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
  (**(code **)(*(long *)param_1 + 0x68))(param_1);
  if (*(int *)(param_11 + 0x50) == 0) {
    local_230 = (long **)operator_new__(0x10);
    plVar9 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
    lVar12 = *(long *)param_1;
    *local_230 = plVar9;
    plVar9 = (long *)(**(code **)(lVar12 + 0x10))(param_1);
    local_230[1] = plVar9;
  }
  else {
    local_230 = (long **)0x0;
  }
  if ((int)uVar14 < 1) {
    dVar22 = 1.79769e+308;
    dVar23 = dVar22;
    dVar24 = dVar22;
  }
  else {
    dVar22 = 1.79769e+308;
    uVar15 = 0;
    plVar9 = plVar6 + 1;
    plVar1 = plVar6 + 0xc4;
    local_1c8 = 0xffffffff;
    dVar23 = dVar22;
    dVar24 = dVar22;
    do {
      pSVar2 = param_3;
      if (*(long *)(param_3 + 0xa10) != 0x40) {
        pSVar2 = *(SArray **)(param_3 + 0xa00);
      }
      puVar10 = (undefined8 *)(pSVar2 + uVar15 * 0x28);
      local_190 = puVar10[4];
      dStack_1a8 = (double)puVar10[1];
      local_1b0 = *puVar10;
      uStack_198 = puVar10[3];
      local_1a0 = puVar10[2];
      plVar7[0x1f2] = 0;
      plVar7[0xc2] = 0;
      plVar7[0x255] = 0;
      plVar7[0x125] = 0;
      if (*(int *)(param_11 + 0x50) == 0) {
        plVar3 = *local_230;
        plVar4 = local_230[1];
        (**(code **)(*plVar8 + 0x48))(plVar8,&local_1b0,plVar3,plVar4);
        (**(code **)(*plVar3 + 0x70))(plVar3,this_00,(long)param_8);
        (**(code **)(*plVar4 + 0x70))(plVar4,this_01,(long)param_8);
      }
      else {
        plVar6[0x185] = 0;
        plVar6[0xc2] = 0;
        (**(code **)(*plVar8 + 0x50))(plVar8,&local_1b0,plVar1,plVar9,(long)(param_8 << 5));
        Mesh::Clip((Mesh *)(param_1 + 0x10),(Plane *)&local_1b0,(SArray *)plVar1,(SArray *)plVar9);
        plVar3 = plVar1;
        if (plVar6[0x186] != 0x40) {
          plVar3 = (long *)plVar6[0x184];
        }
        Mesh::ComputeConvexHull(this_00,(ulong)plVar3);
        plVar3 = plVar9;
        if (plVar6[0xc3] != 0x40) {
          plVar3 = (long *)plVar6[0xc1];
        }
        Mesh::ComputeConvexHull(this_01,(ulong)plVar3);
      }
      dVar16 = (double)Mesh::ComputeVolume();
      dVar17 = (double)Mesh::ComputeVolume();
      local_1c0 = 0.0;
      dStack_1b8 = 0.0;
      (**(code **)(*(long *)param_1 + 0x60))(param_1,&local_1b0,&local_1c0,&dStack_1b8);
      dVar19 = *(double *)(this + 0x270);
      dVar18 = (ABS(dStack_1b8 - local_1c0) * param_6) / dVar19;
      uVar20 = NEON_fmadd(*(undefined8 *)param_4,local_1b0,*(double *)(param_4 + 8) * dStack_1a8);
      dVar21 = (double)NEON_fmadd(*(undefined8 *)(param_4 + 0x10),local_1a0,uVar20);
      dVar19 = ABS(dVar16 - dStack_1b8) / dVar19 + ABS(dVar17 - local_1c0) / dVar19;
      dVar16 = dVar21 * param_5 * param_7;
      dVar17 = dVar19 + dVar18 + dVar16;
      if ((dVar17 < dVar22) || ((dVar17 == dVar22 && ((long)uVar15 < (long)(int)local_1c8)))) {
        local_1c8 = uVar15 & 0xffffffff;
        *param_10 = dVar19;
        *(double *)(param_9 + 8) = dStack_1a8;
        *(undefined8 *)param_9 = local_1b0;
        *(undefined8 *)(param_9 + 0x18) = uStack_198;
        *(undefined8 *)(param_9 + 0x10) = local_1a0;
        *(undefined8 *)(param_9 + 0x20) = local_190;
        dVar22 = dVar17;
        dVar23 = dVar16;
        dVar24 = dVar18;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != (uVar14 & 0xffffffff));
  }
  if (local_230 != (long **)0x0) {
    if (*local_230 != (long *)0x0) {
      (**(code **)(**local_230 + 8))();
    }
    if (local_230[1] != (long *)0x0) {
      (**(code **)(*local_230[1] + 8))();
    }
    operator_delete__(local_230);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if (*plVar6 * 0x618 != 0) {
    lVar12 = *plVar6 * 0x618;
    do {
      lVar11 = *(long *)((long)plVar6 + lVar12 + -0x10);
      if (lVar11 != 0) {
        operator_delete__((void *)(lVar11 + -8));
      }
      lVar12 = lVar12 + -0x618;
    } while (lVar12 != 0);
  }
  operator_delete__(plVar6);
  if (*plVar7 * 0x980 != 0) {
    lVar12 = *plVar7 * 0x980;
    do {
      Mesh::~Mesh((Mesh *)((long)plVar7 + lVar12 + -0x978));
      lVar12 = lVar12 + -0x980;
    } while (lVar12 != 0);
  }
  operator_delete__(plVar7);
  if ((*(long *)(param_11 + 0x28) != 0) && (((byte)this[0x2b8] & 1) == 0)) {
    FUN_00ea70cc(dVar22,*param_10,dVar24,dVar23,*(undefined8 *)param_9,*(undefined8 *)(param_9 + 8),
                 *(undefined8 *)(param_9 + 0x10),*(undefined8 *)(param_9 + 0x18),&local_1b0);
    (**(code **)(**(long **)(param_11 + 0x28) + 0x10))(*(long **)(param_11 + 0x28),&local_1b0);
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  if (*(long *)(lVar5 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


