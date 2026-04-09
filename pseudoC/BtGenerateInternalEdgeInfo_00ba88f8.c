// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BtGenerateInternalEdgeInfo
// Entry Point: 00ba88f8
// Size: 1208 bytes
// Signature: undefined __cdecl BtGenerateInternalEdgeInfo(btBvhTriangleMeshShape * param_1, BtTriangleInfoMap * param_2)


/* WARNING: Type propagation algorithm not settling */
/* BtGenerateInternalEdgeInfo(btBvhTriangleMeshShape*, BtTriangleInfoMap*) */

void BtGenerateInternalEdgeInfo(btBvhTriangleMeshShape *param_1,BtTriangleInfoMap *param_2)

{
  double *pdVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined **local_110;
  int local_108;
  int iStack_104;
  undefined8 *local_100;
  BtTriangleInfoMap *pBStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  int local_cc;
  undefined8 local_c8;
  long local_c0;
  int local_b4;
  int local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined8 local_a0;
  float local_98;
  undefined4 local_94;
  undefined8 local_90;
  float local_88;
  undefined4 local_84;
  undefined8 local_80;
  float local_78;
  undefined4 local_74;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x50) == 0) {
    plVar10 = *(long **)(param_1 + 0x40);
    *(BtTriangleInfoMap **)(param_1 + 0x50) = param_2;
    iVar6 = (**(code **)(*plVar10 + 0x38))(plVar10);
    if (0 < iVar6) {
      iVar6 = 0;
      uVar20 = 0x5d5e0b6b;
      uVar19 = 0x5d5e0b6b5d5e0b6b;
      uVar18 = 0xdd5e0b6b;
      uVar17 = 0xdd5e0b6bdd5e0b6b;
      do {
        local_a8 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b0 = 2;
        uStack_ac = 0;
        local_b4 = 0;
        local_cc = 2;
        (**(code **)(*plVar10 + 0x20))
                  (plVar10,&local_a8,&uStack_ac,&local_b0,&local_b4,&local_c0,(long)&local_c8 + 4,
                   &local_c8,&local_cc,iVar6,uVar17,uVar18,uVar19,uVar20);
        BtTriangleInfoMap::addSubset(param_2,(int)local_c8);
        if (0 < (int)local_c8) {
          iVar7 = 0;
          do {
            puVar8 = (uint *)(local_c0 + (long)local_c8._4_4_ * (long)iVar7);
            if (local_cc == 3) {
              uVar9 = (uint)*(ushort *)(puVar8 + 1);
            }
            else {
              uVar9 = puVar8[2];
            }
            pdVar1 = (double *)(local_a8 + (int)(local_b4 * uVar9));
            if (local_b0 == 0) {
              local_80 = CONCAT44((float)((ulong)*pdVar1 >> 0x20) *
                                  (float)((ulong)plVar10[1] >> 0x20),
                                  SUB84(*pdVar1,0) * (float)plVar10[1]);
              local_78 = *(float *)(pdVar1 + 1) * *(float *)(plVar10 + 2);
            }
            else {
              local_80 = CONCAT44((float)(pdVar1[1] * (double)(float)((ulong)plVar10[1] >> 0x20)),
                                  (float)(*pdVar1 * (double)(float)plVar10[1]));
              local_78 = (float)(pdVar1[2] * (double)*(float *)(plVar10 + 2));
            }
            local_74 = 0;
            if (local_cc == 3) {
              uVar9 = (uint)*(ushort *)((long)puVar8 + 2);
            }
            else {
              uVar9 = puVar8[1];
            }
            pdVar1 = (double *)(local_a8 + (int)(local_b4 * uVar9));
            if (local_b0 == 0) {
              local_90 = CONCAT44((float)((ulong)*pdVar1 >> 0x20) *
                                  (float)((ulong)plVar10[1] >> 0x20),
                                  SUB84(*pdVar1,0) * (float)plVar10[1]);
              local_88 = *(float *)(pdVar1 + 1) * *(float *)(plVar10 + 2);
            }
            else {
              local_90 = CONCAT44((float)(pdVar1[1] * (double)(float)((ulong)plVar10[1] >> 0x20)),
                                  (float)(*pdVar1 * (double)(float)plVar10[1]));
              local_88 = (float)(pdVar1[2] * (double)*(float *)(plVar10 + 2));
            }
            local_84 = 0;
            if (local_cc == 3) {
              uVar9 = (uint)*(ushort *)puVar8;
            }
            else {
              uVar9 = *puVar8;
            }
            pdVar1 = (double *)(local_a8 + (int)(local_b4 * uVar9));
            if (local_b0 == 0) {
              fVar15 = SUB84(*pdVar1,0) * (float)plVar10[1];
              fVar16 = (float)((ulong)*pdVar1 >> 0x20) * (float)((ulong)plVar10[1] >> 0x20);
              local_98 = *(float *)(pdVar1 + 1) * *(float *)(plVar10 + 2);
            }
            else {
              fVar15 = (float)(*pdVar1 * (double)(float)plVar10[1]);
              fVar16 = (float)(pdVar1[1] * (double)(float)((ulong)plVar10[1] >> 0x20));
              local_98 = (float)(pdVar1[2] * (double)*(float *)(plVar10 + 2));
            }
            local_a0 = CONCAT44(fVar16,fVar15);
            local_94 = 0;
            fVar12 = 1e+18;
            local_e0 = uVar19;
            if (fVar15 < 1e+18) {
              local_e0._4_4_ = (undefined4)((ulong)uVar19 >> 0x20);
              local_e0 = CONCAT44(local_e0._4_4_,fVar15);
              fVar12 = fVar15;
            }
            fVar3 = 1e+18;
            if (fVar16 < 1e+18) {
              local_e0 = CONCAT44(fVar16,(undefined4)local_e0);
              fVar3 = fVar16;
            }
            fVar4 = 1e+18;
            local_d8 = uVar20;
            if (local_98 < 1e+18) {
              local_d8._4_4_ = (undefined4)((ulong)uVar20 >> 0x20);
              local_d8 = CONCAT44(local_d8._4_4_,local_98);
              fVar4 = local_98;
            }
            fVar5 = -1e+18;
            local_f0 = uVar17;
            if (-1e+18 < fVar15) {
              local_f0._4_4_ = (undefined4)((ulong)uVar17 >> 0x20);
              local_f0 = CONCAT44(local_f0._4_4_,fVar15);
              fVar5 = fVar15;
            }
            fVar15 = -1e+18;
            if (-1e+18 < fVar16) {
              local_f0 = CONCAT44(fVar16,(undefined4)local_f0);
              fVar15 = fVar16;
            }
            fVar16 = -1e+18;
            uStack_e8 = uVar18;
            if (-1e+18 < local_98) {
              uStack_e8._4_4_ = (undefined4)((ulong)uVar18 >> 0x20);
              uStack_e8 = CONCAT44(uStack_e8._4_4_,local_98);
              fVar16 = local_98;
            }
            fVar13 = (float)local_90;
            if (fVar13 < fVar12) {
              local_e0 = CONCAT44(local_e0._4_4_,fVar13);
              fVar12 = fVar13;
            }
            fVar14 = (float)((ulong)local_90 >> 0x20);
            fVar11 = (float)local_80;
            if (fVar14 < fVar3) {
              local_e0 = CONCAT44(fVar14,(undefined4)local_e0);
              fVar3 = fVar14;
            }
            if (local_88 < fVar4) {
              local_d8 = CONCAT44(local_d8._4_4_,local_88);
              fVar4 = local_88;
            }
            if (fVar5 < fVar13) {
              local_f0 = CONCAT44(local_f0._4_4_,fVar13);
              fVar5 = fVar13;
            }
            if (fVar15 < fVar14) {
              local_f0 = CONCAT44(fVar14,(undefined4)local_f0);
              fVar15 = fVar14;
            }
            if (fVar16 < local_88) {
              uStack_e8 = CONCAT44(uStack_e8._4_4_,local_88);
              fVar16 = local_88;
            }
            if (fVar11 < fVar12) {
              local_e0._4_4_ = (undefined4)((ulong)local_e0 >> 0x20);
              local_e0 = CONCAT44(local_e0._4_4_,fVar11);
            }
            fVar12 = (float)((ulong)local_80 >> 0x20);
            if (fVar12 < fVar3) {
              local_e0 = CONCAT44(fVar12,(undefined4)local_e0);
            }
            if (local_78 < fVar4) {
              local_d8._4_4_ = (undefined4)((ulong)local_d8 >> 0x20);
              local_d8 = CONCAT44(local_d8._4_4_,local_78);
            }
            if (fVar5 < fVar11) {
              local_f0._4_4_ = (undefined4)((ulong)local_f0 >> 0x20);
              local_f0 = CONCAT44(local_f0._4_4_,fVar11);
            }
            if (fVar15 < fVar12) {
              local_f0 = CONCAT44(fVar12,(undefined4)local_f0);
            }
            if (fVar16 < local_78) {
              uStack_e8._4_4_ = (undefined4)((ulong)uStack_e8 >> 0x20);
              uStack_e8 = CONCAT44(uStack_e8._4_4_,local_78);
            }
                    /* try { // try from 00ba8cf4 to 00ba8d07 has its CatchHandler @ 00ba8db0 */
            local_110 = &PTR__btTriangleCallback_00feae98;
            local_108 = iVar6;
            iStack_104 = iVar7;
            local_100 = &local_a0;
            pBStack_f8 = param_2;
            (**(code **)(*(long *)param_1 + 0x80))(param_1,&local_110,&local_e0,&local_f0);
            btTriangleCallback::~btTriangleCallback((btTriangleCallback *)&local_110);
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)local_c8);
        }
        iVar6 = iVar6 + 1;
        iVar7 = (**(code **)(*plVar10 + 0x38))(plVar10);
      } while (iVar6 < iVar7);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


