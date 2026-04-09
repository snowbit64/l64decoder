// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBindBones
// Entry Point: 00a51f34
// Size: 888 bytes
// Signature: undefined __thiscall setBindBones(GsShape * this, RawTransformGroup * * param_1, uint param_2, bool param_3)


/* GsShape::setBindBones(RawTransformGroup**, unsigned int, bool) */

void __thiscall
GsShape::setBindBones(GsShape *this,RawTransformGroup **param_1,uint param_2,bool param_3)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  RawTransformGroup *pRVar5;
  void **ppvVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  float local_98;
  float local_94;
  float fStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  float local_78;
  float local_74;
  float fStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(undefined8 **)(this + 0x1f8) == (undefined8 *)0x0) {
    ppvVar6 = (void **)0x0;
  }
  else {
    ScenegraphNode::removeWorldTransformationDirtyListener
              (*(ScenegraphNode **)**(undefined8 **)(this + 0x1f8),
               (WorldTransformationDirtyListener *)(this + 0x160));
    ppvVar6 = *(void ***)(this + 0x1f8);
    if (*(uint *)(ppvVar6 + 4) != param_2) {
      if (*ppvVar6 != (void *)0x0) {
        operator_delete__(*ppvVar6);
      }
      *ppvVar6 = (void *)0x0;
      if (ppvVar6[1] != (void *)0x0) {
        operator_delete__(ppvVar6[1]);
      }
      ppvVar6[1] = (void *)0x0;
      if (ppvVar6[2] != (void *)0x0) {
        operator_delete__(ppvVar6[2]);
      }
      ppvVar6[2] = (void *)0x0;
      if (ppvVar6[3] != (void *)0x0) {
        operator_delete__(ppvVar6[3]);
      }
      operator_delete(ppvVar6);
      ppvVar6 = (void **)0x0;
      *(undefined8 *)(this + 0x1f8) = 0;
    }
  }
  if (param_2 != 0) {
    if (0x3c < param_2) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00a52270 to 00a5227b has its CatchHandler @ 00a522ac */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning (performance): \'%s\' uses many bones (%u). Reduce to %u to avoid warning.\n"
                        ,*(undefined8 *)(this + 8),(ulong)param_2,0x3c);
      ppvVar6 = *(void ***)(this + 0x1f8);
    }
    if (ppvVar6 == (void **)0x0) {
      ppvVar6 = (void **)operator_new(0x28);
                    /* try { // try from 00a52048 to 00a5207b has its CatchHandler @ 00a522c4 */
      pvVar3 = operator_new__((ulong)param_2 << 3);
      *ppvVar6 = pvVar3;
      pvVar3 = operator_new__((ulong)param_2 << 6);
      ppvVar6[1] = pvVar3;
      uVar4 = (ulong)(param_2 << 3) << 2;
      pvVar3 = operator_new__(uVar4);
      ppvVar6[2] = pvVar3;
      pvVar3 = operator_new__(uVar4);
      param_3 = false;
      ppvVar6[3] = pvVar3;
      *(uint *)(ppvVar6 + 4) = param_2;
      *(void ***)(this + 0x1f8) = ppvVar6;
    }
    RawTransformGroup::updateWorldTransformation();
    Matrix4x4::invert3x4((Matrix4x4 *)&local_a8,(Matrix4x4 *)(this + 0xb8));
    lVar7 = 0;
    uVar4 = 0;
    do {
      pRVar5 = param_1[uVar4];
      if (pRVar5 == (RawTransformGroup *)0x0) {
        setShapeFlags(this,*(uint *)(this + 400) & 0xfffffffc);
        break;
      }
      *(RawTransformGroup **)(**(long **)(this + 0x1f8) + uVar4 * 8) = pRVar5;
      if ((param_3 & 1U) == 0) {
        RawTransformGroup::updateWorldTransformation();
        uVar8 = *(undefined4 *)(pRVar5 + 0xb8);
        fVar10 = *(float *)(pRVar5 + 0xbc);
        uVar11 = *(undefined4 *)(pRVar5 + 200);
        fVar12 = *(float *)(pRVar5 + 0xcc);
        uVar16 = *(undefined4 *)(pRVar5 + 0xd8);
        fVar18 = *(float *)(pRVar5 + 0xdc);
        local_dc = 0;
        uVar13 = NEON_fmadd(uVar8,uStack_a0,fVar10 * fStack_90);
        uVar9 = *(undefined4 *)(pRVar5 + 0xc0);
        uVar21 = *(undefined4 *)(pRVar5 + 0xd0);
        uVar14 = NEON_fmadd(uVar11,local_a8,local_98 * fVar12);
        uVar15 = NEON_fmadd(uVar11,local_a4,local_94 * fVar12);
        local_e0 = NEON_fmadd(uVar9,uStack_80,uVar13);
        uVar11 = NEON_fmadd(uVar11,uStack_a0,fStack_90 * fVar12);
        local_cc = 0;
        uVar19 = *(undefined4 *)(pRVar5 + 0xe8);
        fVar12 = *(float *)(pRVar5 + 0xec);
        local_d0 = NEON_fmadd(uVar21,uStack_80,uVar11);
        uVar11 = NEON_fmadd(uVar8,local_a8,fVar10 * local_98);
        uVar8 = NEON_fmadd(uVar8,local_a4,fVar10 * local_94);
        local_bc = 0;
        local_ac = 0x3f800000;
        local_d8 = NEON_fmadd(uVar21,local_88,uVar14);
        uStack_d4 = NEON_fmadd(uVar21,local_84,uVar15);
        uVar21 = NEON_fmadd(uVar16,local_a8,local_98 * fVar18);
        uVar20 = NEON_fmadd(uVar16,local_a4,local_94 * fVar18);
        uVar17 = NEON_fmadd(uVar16,uStack_a0,fStack_90 * fVar18);
        uVar13 = NEON_fmadd(uVar19,uStack_a0,fStack_90 * fVar12);
        uVar16 = *(undefined4 *)(pRVar5 + 0xe0);
        uVar15 = NEON_fmadd(uVar19,local_a8,local_98 * fVar12);
        uVar14 = NEON_fmadd(uVar19,local_a4,local_94 * fVar12);
        uVar19 = *(undefined4 *)(pRVar5 + 0xf0);
        local_c8 = NEON_fmadd(uVar16,local_88,uVar21);
        uStack_c4 = NEON_fmadd(uVar16,local_84,uVar20);
        local_c0 = NEON_fmadd(uVar16,uStack_80,uVar17);
        local_b8 = (float)NEON_fmadd(uVar19,local_88,uVar15);
        local_b0 = (float)NEON_fmadd(uVar19,uStack_80,uVar13);
        fStack_b4 = (float)NEON_fmadd(uVar19,local_84,uVar14);
        local_e8 = NEON_fmadd(uVar9,local_88,uVar11);
        uStack_e4 = NEON_fmadd(uVar9,local_84,uVar8);
        local_b8 = local_78 + local_b8;
        fStack_b4 = fStack_b4 + local_74;
        local_b0 = local_b0 + fStack_70;
        Matrix4x4::invert3x4
                  ((Matrix4x4 *)(*(long *)(*(long *)(this + 0x1f8) + 8) + lVar7),
                   (Matrix4x4 *)&local_e8);
      }
      uVar4 = uVar4 + 1;
      lVar7 = lVar7 + 0x40;
    } while (param_2 != uVar4);
    if (*(undefined8 **)(this + 0x1f8) != (undefined8 *)0x0) {
      ScenegraphNode::addWorldTransformationDirtyListener
                (*(ScenegraphNode **)**(undefined8 **)(this + 0x1f8),
                 (WorldTransformationDirtyListener *)(this + 0x160));
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


