// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createWheelShape
// Entry Point: 009a3418
// Size: 1392 bytes
// Signature: undefined __thiscall createWheelShape(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, CreateWheel * param_2)


/* Bt2ScenegraphPhysicsContext::createWheelShape(TransformGroup*,
   Bt2ScenegraphPhysicsContext::CreateWheel const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::createWheelShape
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,CreateWheel *param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long *this_00;
  void *__dest;
  undefined8 *puVar5;
  long **pplVar6;
  long **pplVar7;
  long *plVar8;
  long **pplVar9;
  int *piVar10;
  long *this_01;
  ulong uVar11;
  void *__src;
  ulong uVar12;
  Bt2WheelInfo *this_02;
  long lVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  
  lVar4 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar4 + 8) >> 3 & 1) == 0) {
    return;
  }
  lVar4 = RawTransformGroup::getPhysicsObject();
  this_01 = *(long **)(lVar4 + 0x30);
  if (this_01 == (long *)0x0) {
    return;
  }
  if ((*(byte *)(this_01 + 0x1c) & 3) != 0) {
    return;
  }
  pplVar9 = *(long ***)(this + 400);
  pplVar7 = (long **)(this + 400);
  pplVar6 = pplVar7;
  if (pplVar9 == (long **)0x0) {
LAB_009a34ec:
    this_00 = (long *)btAlignedAllocInternal(0x140,0x10);
                    /* try { // try from 009a3504 to 009a350b has its CatchHandler @ 009a3988 */
    Bt2RaycastVehicle::Bt2RaycastVehicle
              ((Bt2RaycastVehicle *)this_00,(btRigidBody *)this_01,*(Bt2World **)(this + 0x30));
    pplVar6 = *(long ***)(this + 0x1a8);
    if (pplVar6 == *(long ***)(this + 0x1b0)) {
      __src = *(void **)(this + 0x1a0);
      uVar11 = (long)pplVar6 - (long)__src;
      uVar12 = ((long)uVar11 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar12 <= (ulong)((long)uVar11 >> 2)) {
        uVar12 = (long)uVar11 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar11) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar12 << 3);
      }
      pplVar6 = (long **)((long)__dest + ((long)uVar11 >> 3) * 8);
      *pplVar6 = this_00;
      if (0 < (long)uVar11) {
        memcpy(__dest,__src,uVar11);
      }
      *(void **)(this + 0x1a0) = __dest;
      *(long ***)(this + 0x1a8) = pplVar6 + 1;
      *(void **)(this + 0x1b0) = (void *)((long)__dest + uVar12 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *pplVar6 = this_00;
      *(long ***)(this + 0x1a8) = pplVar6 + 1;
    }
    if (*pplVar7 == (long *)0x0) {
      plVar8 = *pplVar7;
      pplVar6 = pplVar7;
    }
    else {
      pplVar9 = (long **)*pplVar7;
      pplVar6 = (long **)(this + 400);
LAB_009a35f0:
      do {
        pplVar7 = pplVar9;
        if (pplVar7[4] <= this_01) {
          if (pplVar7[4] < this_01) {
            pplVar6 = pplVar7 + 1;
            pplVar9 = (long **)*pplVar6;
            if ((long **)*pplVar6 != (long **)0x0) goto LAB_009a35f0;
          }
          plVar8 = *pplVar6;
          goto joined_r0x009a3618;
        }
        pplVar9 = (long **)*pplVar7;
        pplVar6 = pplVar7;
      } while ((long **)*pplVar7 != (long **)0x0);
      plVar8 = *pplVar7;
    }
joined_r0x009a3618:
    if (plVar8 == (long *)0x0) {
      puVar5 = (undefined8 *)operator_new(0x30);
      puVar5[4] = this_01;
      puVar5[5] = this_00;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = pplVar7;
      *pplVar6 = puVar5;
      if (**(long **)(this + 0x188) != 0) {
        *(long *)(this + 0x188) = **(long **)(this + 0x188);
        puVar5 = *pplVar6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 400),(__tree_node_base *)puVar5);
      *(long *)(this + 0x198) = *(long *)(this + 0x198) + 1;
    }
LAB_009a3688:
    Bt2RaycastVehicle::addToWorld((Bt2RaycastVehicle *)this_00,*(Bt2World **)(this + 0x30));
  }
  else {
    do {
      if (pplVar9[4] >= this_01) {
        pplVar6 = pplVar9;
      }
      pplVar9 = (long **)pplVar9[pplVar9[4] < this_01];
    } while (pplVar9 != (long **)0x0);
    if ((pplVar6 == pplVar7) || (this_01 < pplVar6[4])) goto LAB_009a34ec;
    this_00 = pplVar6[5];
    if (*(int *)((long)this_00 + 0x3c) == 0) goto LAB_009a3688;
  }
  uVar1 = *(uint *)((long)this_00 + 0x3c);
  if ((int)uVar1 < 1) {
LAB_009a36f8:
    uVar12 = Bt2RaycastVehicle::addWheel((Bt2RaycastVehicle *)this_00,(btRigidBody *)this_01);
    uVar12 = uVar12 & 0xffffffff;
    bVar3 = false;
LAB_009a370c:
    if ((int)uVar12 < 0) goto LAB_009a3940;
  }
  else {
    if (*(int *)(this_00[9] + 0x184) != *(int *)(param_2 + 0x38)) {
      uVar12 = 0;
      piVar10 = (int *)(this_00[9] + 0x324);
      do {
        if ((ulong)uVar1 - 1 == uVar12) goto LAB_009a36f8;
        iVar2 = *piVar10;
        piVar10 = piVar10 + 0x68;
        uVar12 = uVar12 + 1;
      } while (iVar2 != *(int *)(param_2 + 0x38));
      if (uVar1 <= uVar12) goto LAB_009a36f8;
      bVar3 = true;
      goto LAB_009a370c;
    }
    uVar12 = 0;
    bVar3 = true;
  }
  lVar4 = this_01[0x45];
  uVar14 = *(undefined4 *)param_2;
  fVar16 = *(float *)(param_2 + 4);
  lVar13 = this_00[9];
  fVar26 = *(float *)(lVar4 + 0x58);
  fVar17 = *(float *)(lVar4 + 0x5c);
  fVar30 = *(float *)(lVar4 + 0x68);
  fVar20 = *(float *)(lVar4 + 0x6c);
  fVar31 = *(float *)(lVar4 + 0x78);
  fVar23 = *(float *)(lVar4 + 0x7c);
  uVar32 = *(undefined4 *)(lVar4 + 0x60);
  uVar29 = *(undefined4 *)(lVar4 + 0x70);
  uVar24 = *(undefined4 *)(param_2 + 8);
  uVar33 = *(undefined4 *)(lVar4 + 0x80);
  uVar1 = (uint)uVar12;
  uVar18 = NEON_fmadd(uVar14,fVar26,fVar16 * fVar17);
  uVar21 = NEON_fmadd(uVar14,fVar30,fVar16 * fVar20);
  uVar14 = NEON_fmadd(uVar14,fVar31,fVar16 * fVar23);
  uVar11 = uVar12 & 0xffffffff;
  fVar19 = (float)NEON_fmadd(uVar24,uVar32,uVar18);
  fVar22 = (float)NEON_fmadd(uVar24,uVar29,uVar21);
  fVar25 = (float)NEON_fmadd(uVar24,uVar33,uVar14);
  fVar16 = *(float *)(param_2 + 0x10);
  this_02 = (Bt2WheelInfo *)(lVar13 + (uVar12 & 0xffffffff) * 0x1a0);
  fVar19 = fVar19 + *(float *)(lVar4 + 0x88);
  fVar22 = fVar22 + *(float *)(lVar4 + 0x8c);
  fVar25 = fVar25 + *(float *)(lVar4 + 0x90);
  Bt2RaycastVehicle::setWheelSuspensionLength
            ((Bt2RaycastVehicle *)this_00,uVar1,fVar16,fVar16,fVar16 * 0.05);
  fVar16 = *(float *)(param_2 + 0xc);
  *(undefined4 *)(this_02 + 0x16c) = *(undefined4 *)(param_2 + 0x30);
  Bt2RaycastVehicle::setWheelRadius((Bt2RaycastVehicle *)this_00,uVar1,fVar16);
  Bt2RaycastVehicle::setWheelCollisionMask
            ((Bt2RaycastVehicle *)this_00,uVar1,*(uint *)(param_2 + 0x34));
  uVar15 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(this_02 + 0xec) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(this_02 + 0xe4) = uVar15;
  *(undefined8 *)(this_02 + 0xf4) = *(undefined8 *)(param_2 + 0x24);
  fVar16 = *(float *)(param_2 + 0x2c);
  *(float *)(this_02 + 0x84) = fVar19;
  *(float *)(this_02 + 0x88) = fVar22;
  *(float *)(this_02 + 0x8c) = fVar25;
  *(undefined4 *)(this_02 + 0x90) = 0;
  *(float *)(this_02 + 0xfc) = -fVar16;
  if (bVar3) {
    lVar4 = lVar13 + uVar11 * 0x1a0;
    fVar19 = *(float *)(lVar4 + 0x18c);
    fVar16 = *(float *)(lVar4 + 0xd4) + *(float *)(lVar4 + 0xdc);
    fVar17 = *(float *)(lVar4 + 0xd4) - *(float *)(lVar4 + 0xd8);
    if (fVar19 <= fVar16) {
      fVar16 = fVar19;
    }
    if (fVar17 <= fVar19) {
      fVar17 = fVar16;
    }
    *(float *)(lVar4 + 0x18c) = fVar17;
  }
  else {
    lVar4 = lVar13 + uVar11 * 0x1a0;
    uVar21 = NEON_fnmsub(fVar31,0,fVar23);
    uVar14 = NEON_fnmsub(fVar26,0,fVar17);
    uVar18 = NEON_fnmsub(fVar30,0,fVar20);
    *(float *)(lVar4 + 0xc4) = fVar19;
    uVar28 = NEON_fmadd(uVar33,0,uVar21);
    uVar24 = NEON_fmadd(uVar32,0,uVar14);
    uVar27 = NEON_fmadd(uVar29,0,uVar18);
    *(float *)(lVar4 + 200) = fVar22;
    *(undefined8 *)(lVar4 + 0x9c) = 0;
    uVar18 = NEON_fmadd(uVar32,0,fVar26 + fVar17 * 0.0);
    uVar21 = NEON_fmadd(uVar29,0,fVar30 + fVar20 * 0.0);
    uVar14 = NEON_fmadd(uVar33,0,fVar31 + fVar23 * 0.0);
    *(undefined8 *)(lVar4 + 0x94) = 0;
    *(float *)(lVar4 + 0xcc) = fVar25;
    *(undefined4 *)(lVar4 + 0xd0) = 0;
    *(undefined4 *)(lVar4 + 0xb0) = 0;
    *(undefined4 *)(lVar4 + 0xa4) = uVar24;
    *(undefined4 *)(lVar4 + 0xa8) = uVar27;
    *(undefined4 *)(lVar4 + 0xac) = uVar28;
    *(undefined4 *)(lVar4 + 0xb4) = uVar18;
    *(undefined4 *)(lVar4 + 0xb8) = uVar21;
    *(undefined4 *)(lVar4 + 0xbc) = uVar14;
    *(undefined4 *)(lVar4 + 0xc0) = 0;
    uVar14 = *(undefined4 *)(param_2 + 0x38);
    *(undefined8 *)(lVar4 + 0x148) = 0x4719480048ac7100;
    *(undefined4 *)(lVar4 + 0x150) = 0x46194800;
    *(undefined8 *)(lVar4 + 0x178) = 0x4120000000000000;
    *(undefined4 *)(lVar4 + 0x184) = uVar14;
    *(undefined4 *)(lVar4 + 0x18c) = *(undefined4 *)(lVar4 + 0xd4);
  }
  lVar13 = lVar13 + uVar11 * 0x1a0;
  fVar16 = *(float *)(lVar13 + 0xe0);
  *(float *)(lVar13 + 0x170) = 2.0 / (fVar16 * *(float *)(this_02 + 0x16c) * fVar16);
  Bt2WheelInfo::updateSteering();
  Bt2WheelInfo::updateQueryInfo(this_02,(Bt2RaycastVehicle *)this_00);
  Bt2RaycastVehicle::updateWheelCollisionShape((Bt2RaycastVehicle *)this_00,uVar1,true);
LAB_009a3940:
  btCollisionObject::activate((btCollisionObject *)this_01,false);
  return;
}


