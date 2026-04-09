// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startIndexedTriangleSetAttachment
// Entry Point: 00902694
// Size: 1360 bytes
// Signature: undefined __cdecl startIndexedTriangleSetAttachment(void * param_1, char * param_2, char * * param_3)


/* I3DIndexedMeshSetFactory::startIndexedTriangleSetAttachment(void*, char const*, char const**) */

void I3DIndexedMeshSetFactory::startIndexedTriangleSetAttachment
               (void *param_1,char *param_2,char **param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 extraout_x1;
  float *pfVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined auVar31 [16];
  float local_100;
  float local_ec;
  float local_e8;
  float local_e4;
  float fStack_e0;
  float local_dc;
  float fStack_d8;
  float local_d4;
  float fStack_d0;
  undefined2 local_cc;
  undefined8 local_c8;
  float local_c0 [2];
  float local_b8;
  float local_b4;
  float local_b0 [2];
  undefined8 local_a8;
  float local_a0 [2];
  long local_98;
  
  auVar31._8_8_ = param_2;
  auVar31._0_8_ = param_1;
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  lVar11 = *(long *)((long)param_1 + 0x278);
  if (*(long *)(lVar11 + 8) != 0) {
    lVar6 = *(long *)(lVar11 + 0x10);
    uVar12 = (ulong)*(uint *)(lVar11 + 0x4c);
    if (uVar12 < (ulong)(*(long *)(lVar11 + 0x18) - lVar6 >> 2)) {
      *(short *)(lVar6 + uVar12 * 4 + 2) = (short)*(uint *)(lVar11 + 0x4c);
      lVar13 = *(long *)(lVar11 + 0x28);
      uVar4 = ExpatUtil::getUIntAttr("faceIndex",(uint *)&local_cc,param_3);
      if ((uVar4 & 1) != 0) {
        local_c8 = NEON_fmov(0x3f800000,4);
        *(undefined2 *)(lVar6 + uVar12 * 4) = local_cc;
        local_c0[0] = 1.0;
        pcVar5 = (char *)ExpatUtil::getAttr("translation",param_3);
        if (pcVar5 != (char *)0x0) {
          lVar6 = StringUtil::atof(pcVar5,(float *)&local_a8);
          lVar6 = StringUtil::atof((char *)(lVar6 + 1),(float *)((ulong)&local_a8 | 4));
          StringUtil::atof((char *)(lVar6 + 1),local_a0);
        }
        pcVar5 = (char *)ExpatUtil::getAttr("rotation",param_3);
        if (pcVar5 != (char *)0x0) {
          lVar6 = StringUtil::atof(pcVar5,&local_b8);
          local_b8 = (float)MathUtil::degreeToRadian(local_b8);
          lVar6 = StringUtil::atof((char *)(lVar6 + 1),(float *)((ulong)&local_b8 | 4));
          local_b4 = (float)MathUtil::degreeToRadian(local_b4);
          StringUtil::atof((char *)(lVar6 + 1),local_b0);
          local_b0[0] = (float)MathUtil::degreeToRadian(local_b0[0]);
        }
        pcVar5 = (char *)ExpatUtil::getAttr("scale",param_3);
        if (pcVar5 == (char *)0x0) {
          local_ec = 1.0;
          local_e8 = 1.0;
          local_100 = 1.0;
        }
        else {
          lVar6 = StringUtil::atof(pcVar5,(float *)&local_c8);
          lVar6 = StringUtil::atof((char *)(lVar6 + 1),(float *)((ulong)&local_c8 | 4));
          StringUtil::atof((char *)(lVar6 + 1),local_c0);
          local_100 = (float)local_c8;
          local_ec = local_c8._4_4_;
          local_e8 = local_c0[0];
        }
        sincosf(local_b0[0],&fStack_d8,&local_dc);
        fVar24 = fStack_d8 * -0.0;
        uVar21 = NEON_fmadd(fStack_d8,0,local_dc);
        fVar16 = (float)NEON_fnmsub(local_dc,0,fStack_d8);
        fVar22 = fStack_d8 + local_dc * 0.0;
        uVar26 = NEON_fmadd(fStack_d8,0,local_dc * 0.0);
        fVar14 = (float)NEON_fmadd(local_dc,0,fVar24);
        sincosf(local_b4,&fStack_e0,&local_e4);
        fVar17 = fStack_e0 * -0.0;
        fVar15 = local_e4 * 0.0;
        fVar19 = (float)NEON_fnmsub(uVar26,local_e4,fStack_e0);
        uVar28 = NEON_fmadd(uVar26,fStack_e0,local_e4);
        fVar18 = (float)NEON_fmadd(uVar21,local_e4,fVar17);
        uVar25 = NEON_fmadd(uVar21,fStack_e0,fVar15);
        uVar21 = NEON_fmadd(fVar22,fStack_e0,fVar15);
        fVar22 = (float)NEON_fmadd(fVar22,local_e4,fVar17);
        uVar23 = NEON_fmadd(uVar26,fStack_e0,fVar15);
        fVar27 = (float)NEON_fmadd(uVar26,local_e4,fVar17);
        sincosf(local_b8,&fStack_d0,&local_d4);
        fVar17 = (float)NEON_fnmadd(local_dc,0,-fVar24);
        fVar15 = (float)NEON_fnmadd(local_dc,0,--fStack_d8);
        pfVar9 = (float *)(lVar13 + uVar12 * 0x50);
        fVar29 = (float)NEON_fmadd(uVar21,fStack_d0,(local_dc + fVar24) * local_d4);
        fVar30 = (float)NEON_fmadd(uVar28,fStack_d0,fVar14 * local_d4);
        fVar20 = (float)NEON_fmadd(uVar25,fStack_d0,fVar16 * local_d4);
        *pfVar9 = local_100 * fVar18;
        pfVar9[1] = local_100 * fVar22;
        fVar14 = (float)NEON_fmadd(uVar23,fStack_d0,fVar14 * local_d4);
        fVar16 = (float)NEON_fmadd(uVar25,local_d4,fStack_d0 * fVar15);
        fVar18 = (float)NEON_fmadd(uVar21,local_d4,fStack_d0 * -(local_dc + fVar24));
        fVar22 = (float)NEON_fmadd(uVar28,local_d4,fStack_d0 * fVar17);
        fVar15 = (float)NEON_fmadd(uVar23,local_d4,fStack_d0 * fVar17);
        pfVar9[6] = local_ec * fVar30;
        pfVar9[7] = fVar14;
        pfVar9[4] = local_ec * fVar20;
        pfVar9[5] = local_ec * fVar29;
        *(undefined8 *)(pfVar9 + 0xc) = local_a8;
        pfVar9[2] = local_100 * fVar19;
        pfVar9[3] = fVar27;
        pfVar9[8] = fVar16 * local_e8;
        pfVar9[9] = fVar18 * local_e8;
        pfVar9[10] = fVar22 * local_e8;
        pfVar9[0xb] = fVar15;
        pfVar9[0xe] = local_a0[0];
        pfVar9[0xf] = 1.0;
        pcVar5 = (char *)ExpatUtil::getAttr("bvCenter",param_3);
        if (((pcVar5 == (char *)0x0) || (I3DLoad::s_optimizeScene != '\0')) ||
           (uVar4 = ExpatUtil::getFloatAttr
                              ("bvRadius",(float *)(lVar13 + uVar12 * 0x50 + 0x4c),param_3),
           (uVar4 & 1) == 0)) {
          piVar7 = (int *)IndexedTriangleSet::getSubset
                                    (*(IndexedTriangleSet **)(lVar11 + 8),*(uint *)(lVar11 + 0x4c));
          lVar6 = TriangleSet::getPositions();
          plVar8 = (long *)BoundingVolumeFactory::createBoundingVolume
                                     ((float *)(lVar6 + (ulong)(uint)(*piVar7 * 3) * 4),piVar7[1],0)
          ;
          uVar10 = *(undefined8 *)((long)plVar8 + 0xc);
          lVar13 = lVar13 + uVar12 * 0x50;
          *(undefined4 *)(lVar13 + 0x48) = *(undefined4 *)((long)plVar8 + 0x14);
          *(undefined8 *)(lVar13 + 0x40) = uVar10;
          *(undefined4 *)(lVar13 + 0x4c) = *(undefined4 *)(plVar8 + 3);
          auVar31 = (**(code **)(*plVar8 + 8))();
        }
        else {
          lVar13 = lVar13 + uVar12 * 0x50;
          lVar6 = StringUtil::atof(pcVar5,(float *)(lVar13 + 0x40));
          lVar6 = StringUtil::atof((char *)(lVar6 + 1),(float *)(lVar13 + 0x44));
          auVar31 = StringUtil::atof((char *)(lVar6 + 1),(float *)(lVar13 + 0x48));
        }
        *(int *)(lVar11 + 0x4c) = *(int *)(lVar11 + 0x4c) + 1;
        goto LAB_00902b14;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00902ba8 to 00902bb3 has its CatchHandler @ 00902be4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar1 = *(uint *)(lVar11 + 0x7c);
      lVar6 = lVar11 + 0x51;
      if ((*(byte *)(lVar11 + 0x50) & 1) != 0) {
        lVar6 = *(long *)(lVar11 + 0x60);
      }
      pcVar5 = "Error: Missing faceIndex in attachment in triangle set \'%s\' (%u).\n";
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00902b60 to 00902b6b has its CatchHandler @ 00902be8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar1 = *(uint *)(lVar11 + 0x7c);
      lVar6 = lVar11 + 0x51;
      if ((*(byte *)(lVar11 + 0x50) & 1) != 0) {
        lVar6 = *(long *)(lVar11 + 0x60);
      }
      pcVar5 = "Error: Too many attachments in triangle set \'%s\' (%u).\n";
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar5,lVar6,
                       (ulong)uVar1);
    plVar8 = *(long **)(lVar11 + 8);
    auVar31._8_8_ = extraout_x1;
    auVar31._0_8_ = plVar8;
    if (plVar8 != (long *)0x0) {
      auVar31 = (**(code **)(*plVar8 + 8))();
    }
    *(undefined8 *)(lVar11 + 8) = 0;
  }
LAB_00902b14:
  if (*(long *)(lVar2 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar31._0_8_,auVar31._8_8_);
}


