// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createLoadedShapes
// Entry Point: 0097c264
// Size: 1748 bytes
// Signature: undefined __thiscall createLoadedShapes(MeshSplitManager * this, MeshSplitShape * param_1, LoadedFileId * param_2, int param_3, uint param_4, uint param_5, bool param_6, STREAM_QUEUE param_7)


/* WARNING: Removing unreachable block (ram,0x0097c388) */
/* MeshSplitManager::createLoadedShapes(MeshSplitShape*, MeshSplitManager::LoadedFileId&, int,
   unsigned int, unsigned int, bool, StreamManager::STREAM_QUEUE) */

void __thiscall
MeshSplitManager::createLoadedShapes
          (MeshSplitManager *this,MeshSplitShape *param_1,LoadedFileId *param_2,int param_3,
          uint param_4,uint param_5,bool param_6,STREAM_QUEUE param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  Bt2ScenegraphPhysicsContext *pBVar6;
  RawTransformGroup *this_00;
  undefined8 uVar7;
  Logger *this_01;
  undefined8 *puVar8;
  long *this_02;
  long lVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  Node *pNVar19;
  GsShape *pGVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  float local_140;
  float fStack_13c;
  float local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  float local_120;
  float local_11c;
  float fStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  long local_b8;
  
  lVar3 = tpidr_el0;
  local_b8 = *(long *)(lVar3 + 0x28);
  this_02 = (long *)(param_2 + 0x10);
  lVar9 = *this_02;
  uVar14 = (int)(*(long *)(param_2 + 0x18) - lVar9 >> 3) * -0x45d1745d;
  if ((((int)((ulong)(*(long *)(param_1 + 0x30) - (long)*(GsShape ***)(param_1 + 0x28)) >> 3) == 0)
      || (pGVar20 = **(GsShape ***)(param_1 + 0x28), ((byte)pGVar20[0x11] >> 3 & 1) == 0)) ||
     ((*(byte *)(*(long *)(pGVar20 + 0x170) + 0x31) >> 1 & 1) == 0)) {
    pGVar20 = (GsShape *)0x0;
  }
  lVar10 = (long)(int)uVar14;
  if (param_6) {
    lVar18 = (long)param_3;
    do {
      lVar12 = lVar9 + lVar18 * 0x58;
      if (pGVar20 == (GsShape *)0x0) {
        bVar4 = *(long *)(lVar12 + 0x40) == *(long *)(lVar12 + 0x48);
        if (bVar4) goto LAB_0097c3a0;
LAB_0097c444:
        uVar13 = lVar18 + 1;
        if (!bVar4) {
LAB_0097c3c4:
          uVar17 = (uint)uVar13;
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 0097c8f4 to 0097c8fb has its CatchHandler @ 0097c948 */
            this_01 = (Logger *)operator_new(0x38);
                    /* try { // try from 0097c900 to 0097c903 has its CatchHandler @ 0097c938 */
            Logger::Logger(this_01);
            LogManager::getInstance()::singletonLogManager = this_01;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: Loaded split shape does not match the split shape in the i3d. Ignoring loaded split shape.\n"
                           );
          if ((int)uVar14 <= (int)uVar17) goto LAB_0097c424;
          puVar11 = (uint *)(*this_02 + (long)(int)uVar17 * 0x58 + 4);
          goto LAB_0097c404;
        }
        break;
      }
      lVar2 = *(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40);
      if (lVar2 != 0) {
        uVar13 = 0;
        do {
          if ((uint)((int)((ulong)(*(long *)(*(long *)(*(long *)(pGVar20 + 0x170) + 0x68) + 0x18) -
                                  *(long *)(*(long *)(*(long *)(pGVar20 + 0x170) + 0x68) + 0x10)) >>
                          4) * -0x33333333) <=
              (uint)*(ushort *)(*(long *)(lVar12 + 0x40) + uVar13 * 4 + 2)) {
            uVar13 = (ulong)((int)lVar18 + 1);
            goto LAB_0097c3c4;
          }
          uVar13 = (ulong)((int)uVar13 + 1);
        } while (uVar13 < (ulong)(lVar2 >> 2));
      }
      bVar4 = true;
LAB_0097c3a0:
      lVar12 = lVar18 + 1;
      if (lVar10 <= lVar12) goto LAB_0097c444;
      lVar18 = lVar12;
    } while (*(uint *)(lVar9 + lVar12 * 0x58 + 4) == param_5);
  }
  lVar9 = RawTransformGroup::getPhysicsObject();
  uVar17 = *(uint *)(lVar9 + 8) & 3;
  if (uVar17 != 0) {
    ScenegraphPhysicsContextManager::getInstance();
    pBVar6 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    Bt2ScenegraphPhysicsContext::enqueueRemoveTransformGroup(pBVar6,(TransformGroup *)param_1,true);
  }
  pNVar19 = *(Node **)(param_1 + 0x20);
  if (((byte)pNVar19[0x10] >> 6 & 1) != 0) {
    pNVar19 = *(Node **)(pNVar19 + 0x20);
  }
  lVar9 = (long)param_3;
  local_c0 = 0x35a00000;
  if ((int)uVar14 < param_3 + 1) {
    uVar14 = param_3 + 1;
  }
  lVar18 = (long)param_3 * 0x58 + 0x30;
  lVar12 = *this_02;
  uStack_c8 = 0x8000000000000000;
  local_d0 = 0x3f80000000000000;
  uVar15 = param_3;
  do {
    lVar9 = lVar9 + 1;
    plVar1 = (long *)(lVar12 + lVar18);
    iVar5 = Brep::classify((Brep *)plVar1[-2],(BrepPlane *)&local_d0);
    this_00 = (RawTransformGroup *)
              createNewShape(this,pNVar19,param_1,*(uint *)(plVar1 + -6),param_4,param_5,iVar5 != 3,
                             (Brep *)plVar1[-2],
                             (uint)((ulong)(*plVar1 - (long)(Brep **)plVar1[-1]) >> 3),
                             (Brep **)plVar1[-1],pGVar20,(vector *)(plVar1 + 2),true,false,param_7);
    if (this_00 != (RawTransformGroup *)0x0) {
      uStack_108 = 0;
      local_110 = 0x3f800000;
      local_f8 = 0;
      local_100 = 0x3f80000000000000;
      uStack_e8 = 0x3f800000;
      local_f0 = 0;
      local_e0 = plVar1[-5];
      local_d8 = CONCAT44(0x3f800000,*(undefined4 *)(plVar1 + -4));
      sincosf(*(float *)((long)plVar1 + -0x14),&fStack_194,&local_198);
      fVar29 = local_198;
      uVar35 = NEON_fmadd(fStack_194,0,local_198);
      fVar22 = fStack_194 * -0.0;
      fVar27 = (float)NEON_fnmsub(local_198,0,fStack_194);
      fVar37 = fStack_194 + local_198 * 0.0;
      uVar33 = NEON_fmadd(fStack_194,0,local_198 * 0.0);
      fVar25 = local_198 + fVar22;
      fVar32 = (float)NEON_fmadd(local_198,0,fVar22);
      fVar21 = -fStack_194;
      local_110 = CONCAT44(fVar37,uVar35);
      local_100 = CONCAT44(fVar25,fVar27);
      uStack_108 = CONCAT44(uVar33,uVar33);
      local_f8 = CONCAT44(fVar32,fVar32);
      sincosf(*(float *)(plVar1 + -3),&fStack_19c,&local_1a0);
      fVar23 = local_1a0 * 0.0;
      fVar26 = fStack_19c * -0.0;
      uVar39 = NEON_fmadd(uVar35,fStack_19c,fVar23);
      uVar34 = NEON_fmadd(fVar37,fStack_19c,fVar23);
      uVar28 = NEON_fmadd(uVar35,local_1a0,fVar26);
      uVar30 = NEON_fmadd(fVar37,local_1a0,fVar26);
      uVar36 = NEON_fmadd(uVar33,fStack_19c,local_1a0);
      uVar38 = NEON_fmadd(uVar33,fStack_19c,fVar23);
      uVar35 = NEON_fnmsub(uVar33,local_1a0,fStack_19c);
      uStack_108._4_4_ = NEON_fmadd(uVar33,local_1a0,fVar26);
      local_f0 = CONCAT44(uVar34,uVar39);
      local_110 = CONCAT44(uVar30,uVar28);
      uStack_e8 = CONCAT44(uVar38,uVar36);
      uStack_108._0_4_ = uVar35;
      sincosf(*(float *)((long)plVar1 + -0x1c),&fStack_1a4,&local_1a8);
      fVar22 = (float)NEON_fnmadd(fVar29,0,-fVar22);
      fVar29 = (float)NEON_fnmadd(fVar29,0,-fVar21);
      uVar40 = NEON_fmadd(uVar36,fStack_1a4,fVar32 * local_1a8);
      uVar33 = NEON_fmadd(uVar39,fStack_1a4,fVar27 * local_1a8);
      uVar31 = NEON_fmadd(uVar34,fStack_1a4,fVar25 * local_1a8);
      uVar24 = NEON_fmadd(uVar38,fStack_1a4,fVar32 * local_1a8);
      uVar38 = NEON_fmadd(uVar38,local_1a8,fStack_1a4 * fVar22);
      local_100 = CONCAT44(uVar31,uVar33);
      uVar31 = NEON_fmadd(uVar39,local_1a8,fStack_1a4 * fVar29);
      uVar34 = NEON_fmadd(uVar34,local_1a8,fStack_1a4 * -fVar25);
      uVar33 = NEON_fmadd(uVar36,local_1a8,fStack_1a4 * fVar22);
      local_f8 = CONCAT44(uVar24,uVar40);
      uStack_e8 = CONCAT44(uVar38,uVar33);
      local_f0 = CONCAT44(uVar34,uVar31);
      local_110 = CONCAT44(uVar30,uVar28);
      uStack_108 = CONCAT44(uStack_108._4_4_,uVar35);
      if (((byte)pNVar19[0x10] >> 5 & 1) == 0) {
        puVar8 = &local_110;
      }
      else {
        RawTransformGroup::updateWorldTransformation();
        Matrix4x4::invert3x4((Matrix4x4 *)&local_150,(Matrix4x4 *)(pNVar19 + 0xb8));
        uVar35 = NEON_fmadd((undefined4)local_110,local_150,local_110._4_4_ * local_140);
        uVar24 = NEON_fmadd((undefined4)local_110,local_14c,local_110._4_4_ * fStack_13c);
        uVar33 = NEON_fmadd((undefined4)local_110,uStack_148,local_110._4_4_ * local_138);
        local_184 = 0;
        local_190 = NEON_fmadd((undefined4)uStack_108,local_130,uVar35);
        local_18c = NEON_fmadd((undefined4)uStack_108,uStack_12c,uVar24);
        local_174 = 0;
        local_188 = NEON_fmadd((undefined4)uStack_108,local_128,uVar33);
        uVar33 = NEON_fmadd((undefined4)local_100,local_150,local_140 * local_100._4_4_);
        uVar35 = NEON_fmadd((undefined4)local_100,local_14c,fStack_13c * local_100._4_4_);
        puVar8 = (undefined8 *)&local_190;
        local_180 = NEON_fmadd((undefined4)local_f8,local_130,uVar33);
        local_17c = NEON_fmadd((undefined4)local_f8,uStack_12c,uVar35);
        uVar33 = NEON_fmadd((undefined4)local_100,uStack_148,local_138 * local_100._4_4_);
        local_178 = NEON_fmadd((undefined4)local_f8,local_128,uVar33);
        uVar34 = NEON_fmadd((undefined4)local_f0,local_150,local_140 * local_f0._4_4_);
        uVar31 = NEON_fmadd((undefined4)local_f0,uStack_148,local_138 * local_f0._4_4_);
        local_164 = 0;
        uVar33 = NEON_fmadd((undefined4)local_e0,local_150,local_140 * local_e0._4_4_);
        uVar28 = NEON_fmadd((undefined4)local_f0,local_14c,fStack_13c * local_f0._4_4_);
        uVar24 = NEON_fmadd((undefined4)local_e0,local_14c,fStack_13c * local_e0._4_4_);
        uVar35 = NEON_fmadd((undefined4)local_e0,uStack_148,local_138 * local_e0._4_4_);
        local_170 = NEON_fmadd((undefined4)uStack_e8,local_130,uVar34);
        local_168 = NEON_fmadd((undefined4)uStack_e8,local_128,uVar31);
        local_154 = 0x3f800000;
        local_16c = NEON_fmadd((undefined4)uStack_e8,uStack_12c,uVar28);
        local_160 = (float)NEON_fmadd((undefined4)local_d8,local_130,uVar33);
        local_15c = (float)NEON_fmadd((undefined4)local_d8,uStack_12c,uVar24);
        local_158 = (float)NEON_fmadd((undefined4)local_d8,local_128,uVar35);
        local_160 = local_120 + local_160;
        local_15c = local_15c + local_11c;
        local_158 = local_158 + fStack_118;
      }
      RawTransformGroup::setTransformation(this_00,(Matrix4x4 *)puVar8,0);
      if (uVar17 != 0) {
        ScenegraphPhysicsContextManager::getInstance();
        pBVar6 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
        Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup(pBVar6,(TransformGroup *)this_00);
      }
    }
    lVar12 = *this_02;
    uVar16 = uVar14;
    if (lVar10 <= lVar9) break;
    lVar2 = lVar12 + lVar18;
    lVar18 = lVar18 + 0x58;
    uVar16 = uVar15 + 1;
    uVar15 = uVar16;
  } while (*(uint *)(lVar2 + 0x2c) == param_5);
  std::__ndk1::
  vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
  ::erase((vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
           *)this_02,(int)lVar12 + param_3 * 0x58,(int)lVar12 + uVar16 * 0x58);
  uVar7 = 1;
LAB_0097c8a4:
  if (*(long *)(lVar3 + 0x28) == local_b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
  while( true ) {
    uVar15 = (uint)uVar13 + 1;
    uVar13 = (ulong)uVar15;
    puVar11 = puVar11 + 0x16;
    uVar17 = uVar14;
    if (uVar14 == uVar15) break;
LAB_0097c404:
    uVar17 = (uint)uVar13;
    if (*puVar11 != param_5) break;
  }
LAB_0097c424:
  iVar5 = (int)*this_02;
  std::__ndk1::
  vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
  ::erase((vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
           *)this_02,iVar5 + param_3 * 0x58,iVar5 + uVar17 * 0x58);
  uVar7 = 0;
  goto LAB_0097c8a4;
}


