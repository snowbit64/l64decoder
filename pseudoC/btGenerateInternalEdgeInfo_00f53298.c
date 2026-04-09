// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btGenerateInternalEdgeInfo
// Entry Point: 00f53298
// Size: 1372 bytes
// Signature: undefined __cdecl btGenerateInternalEdgeInfo(btBvhTriangleMeshShape * param_1, btTriangleInfoMap * param_2)


/* WARNING: Type propagation algorithm not settling */
/* btGenerateInternalEdgeInfo(btBvhTriangleMeshShape*, btTriangleInfoMap*) */

void btGenerateInternalEdgeInfo(btBvhTriangleMeshShape *param_1,btTriangleInfoMap *param_2)

{
  double *pdVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  float *pfVar10;
  uint uVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined **local_120;
  int local_118;
  int iStack_114;
  float *local_110;
  btTriangleInfoMap *pbStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  ulong local_e8;
  int local_d4;
  undefined8 local_d0;
  long local_c8;
  int local_bc;
  int local_b8;
  undefined4 uStack_b4;
  long local_b0;
  float local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  float local_98;
  undefined8 local_94;
  undefined4 local_8c;
  float local_88;
  undefined8 local_84;
  undefined4 local_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x50) == 0) {
    plVar12 = *(long **)(param_1 + 0x40);
    *(btTriangleInfoMap **)(param_1 + 0x50) = param_2;
    iVar5 = (**(code **)(*plVar12 + 0x38))(plVar12);
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        local_b0 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_b8 = 2;
        uStack_b4 = 0;
        local_bc = 0;
        local_d4 = 2;
        (**(code **)(*plVar12 + 0x20))
                  (plVar12,&local_b0,&uStack_b4,&local_b8,&local_bc,&local_c8,(long)&local_d0 + 4,
                   &local_d0,&local_d4,iVar5);
        if (0 < (int)local_d0) {
          iVar6 = 0;
          do {
            puVar8 = (uint *)(local_c8 + (long)local_d0._4_4_ * (long)iVar6);
            lVar7 = (long)local_bc;
            if (local_b8 == 0) {
              if (local_d4 == 3) {
                pfVar10 = (float *)(local_b0 + lVar7 * (ulong)*(ushort *)(puVar8 + 1));
                uVar15 = *(undefined8 *)(pfVar10 + 1);
                local_88 = *(float *)(plVar12 + 1) * *pfVar10;
                local_84 = CONCAT44((float)((ulong)*(undefined8 *)((long)plVar12 + 0xc) >> 0x20) *
                                    (float)((ulong)uVar15 >> 0x20),
                                    (float)*(undefined8 *)((long)plVar12 + 0xc) * (float)uVar15);
                pfVar10 = (float *)(local_b0 + lVar7 * (ulong)*(ushort *)((long)puVar8 + 2));
                uVar15 = *(undefined8 *)(pfVar10 + 1);
                local_98 = *(float *)(plVar12 + 1) * *pfVar10;
                fVar13 = (float)*(undefined8 *)((long)plVar12 + 0xc) * (float)uVar15;
                fVar14 = (float)((ulong)*(undefined8 *)((long)plVar12 + 0xc) >> 0x20) *
                         (float)((ulong)uVar15 >> 0x20);
                local_94 = CONCAT44(fVar14,fVar13);
                uVar9 = (ulong)*(ushort *)puVar8;
              }
              else {
                pfVar10 = (float *)(local_b0 + lVar7 * (int)puVar8[2]);
                uVar15 = *(undefined8 *)(pfVar10 + 1);
                local_88 = *(float *)(plVar12 + 1) * *pfVar10;
                local_84 = CONCAT44((float)((ulong)*(undefined8 *)((long)plVar12 + 0xc) >> 0x20) *
                                    (float)((ulong)uVar15 >> 0x20),
                                    (float)*(undefined8 *)((long)plVar12 + 0xc) * (float)uVar15);
                pfVar10 = (float *)(local_b0 + lVar7 * (int)puVar8[1]);
                uVar15 = *(undefined8 *)(pfVar10 + 1);
                local_98 = *(float *)(plVar12 + 1) * *pfVar10;
                fVar13 = (float)*(undefined8 *)((long)plVar12 + 0xc) * (float)uVar15;
                fVar14 = (float)((ulong)*(undefined8 *)((long)plVar12 + 0xc) >> 0x20) *
                         (float)((ulong)uVar15 >> 0x20);
                local_94 = CONCAT44(fVar14,fVar13);
                uVar9 = (ulong)(int)*puVar8;
              }
              pfVar10 = (float *)(local_b0 + lVar7 * uVar9);
              uVar15 = *(undefined8 *)(pfVar10 + 1);
              local_a8 = *(float *)(plVar12 + 1) * *pfVar10;
              fVar19 = (float)*(undefined8 *)((long)plVar12 + 0xc) * (float)uVar15;
              fVar20 = (float)((ulong)*(undefined8 *)((long)plVar12 + 0xc) >> 0x20) *
                       (float)((ulong)uVar15 >> 0x20);
            }
            else {
              if (local_d4 == 3) {
                uVar11 = (uint)*(ushort *)(puVar8 + 1);
              }
              else {
                uVar11 = puVar8[2];
              }
              pdVar1 = (double *)(local_b0 + (int)(local_bc * uVar11));
              local_88 = (float)(*pdVar1 * (double)*(float *)(plVar12 + 1));
              local_84 = CONCAT44((float)(pdVar1[2] *
                                         (double)(float)((ulong)*(undefined8 *)((long)plVar12 + 0xc)
                                                        >> 0x20)),
                                  (float)(pdVar1[1] *
                                         (double)(float)*(undefined8 *)((long)plVar12 + 0xc)));
              if (local_d4 == 3) {
                uVar11 = (uint)*(ushort *)((long)puVar8 + 2);
              }
              else {
                uVar11 = puVar8[1];
              }
              pdVar1 = (double *)(local_b0 + (int)(local_bc * uVar11));
              local_98 = (float)(*pdVar1 * (double)*(float *)(plVar12 + 1));
              fVar13 = (float)(pdVar1[1] * (double)(float)*(undefined8 *)((long)plVar12 + 0xc));
              fVar14 = (float)(pdVar1[2] *
                              (double)(float)((ulong)*(undefined8 *)((long)plVar12 + 0xc) >> 0x20));
              local_94 = CONCAT44(fVar14,fVar13);
              if (local_d4 == 3) {
                uVar11 = (uint)*(ushort *)puVar8;
              }
              else {
                uVar11 = *puVar8;
              }
              pdVar1 = (double *)(local_b0 + (int)(local_bc * uVar11));
              local_a8 = (float)(*pdVar1 * (double)*(float *)(plVar12 + 1));
              fVar19 = (float)(pdVar1[1] * (double)(float)*(undefined8 *)((long)plVar12 + 0xc));
              fVar20 = (float)(pdVar1[2] *
                              (double)(float)((ulong)*(undefined8 *)((long)plVar12 + 0xc) >> 0x20));
            }
            local_7c = 0;
            local_8c = 0;
            local_a4 = CONCAT44(fVar20,fVar19);
            local_9c = 0;
            uStack_f8 = 0xdd5e0b6b;
            local_100 = 0xdd5e0b6bdd5e0b6b;
            local_e8 = 0x5d5e0b6b;
            local_f0 = 0x5d5e0b6b5d5e0b6b;
            fVar16 = 1e+18;
            if (local_a8 < 1e+18) {
              local_f0 = CONCAT44(0x5d5e0b6b,local_a8);
              fVar16 = local_a8;
            }
            fVar17 = 1e+18;
            if (fVar19 < 1e+18) {
              local_f0 = CONCAT44(fVar19,(undefined4)local_f0);
              fVar17 = fVar19;
            }
            fVar3 = 1e+18;
            if (fVar20 < 1e+18) {
              local_e8 = (ulong)(uint)fVar20;
              fVar3 = fVar20;
            }
            fVar4 = -1e+18;
            if (-1e+18 < local_a8) {
              local_100 = CONCAT44(0xdd5e0b6b,local_a8);
              fVar4 = local_a8;
            }
            fVar18 = -1e+18;
            if (-1e+18 < fVar19) {
              local_100 = CONCAT44(fVar19,(undefined4)local_100);
              fVar18 = fVar19;
            }
            fVar19 = -1e+18;
            if (-1e+18 < fVar20) {
              uStack_f8 = (ulong)(uint)fVar20;
              fVar19 = fVar20;
            }
            if (local_98 < fVar16) {
              local_f0 = CONCAT44(local_f0._4_4_,local_98);
              fVar16 = local_98;
            }
            if (fVar13 < fVar17) {
              local_f0 = CONCAT44(fVar13,(undefined4)local_f0);
              fVar17 = fVar13;
            }
            fVar20 = (float)local_84;
            if (fVar14 < fVar3) {
              local_e8 = (ulong)(uint)fVar14;
              fVar3 = fVar14;
            }
            if (fVar4 < local_98) {
              local_100 = CONCAT44(local_100._4_4_,local_98);
              fVar4 = local_98;
            }
            if (fVar18 < fVar13) {
              local_100 = CONCAT44(fVar13,(undefined4)local_100);
              fVar18 = fVar13;
            }
            if (fVar19 < fVar14) {
              uStack_f8 = (ulong)(uint)fVar14;
              fVar19 = fVar14;
            }
            if (local_88 < fVar16) {
              local_f0 = CONCAT44(local_f0._4_4_,local_88);
            }
            if (fVar20 < fVar17) {
              local_f0 = CONCAT44(fVar20,(undefined4)local_f0);
            }
            fVar13 = (float)((ulong)local_84 >> 0x20);
            if (fVar13 < fVar3) {
              local_e8 = (ulong)(uint)fVar13;
            }
            if (fVar4 < local_88) {
              local_100._4_4_ = (undefined4)((ulong)local_100 >> 0x20);
              local_100 = CONCAT44(local_100._4_4_,local_88);
            }
            if (fVar18 < fVar20) {
              local_100 = CONCAT44(fVar20,(undefined4)local_100);
            }
            if (fVar19 < fVar13) {
              uStack_f8 = (ulong)(uint)fVar13;
            }
            local_120 = &PTR__btTriangleCallback_01019cf0;
            local_118 = iVar5;
            iStack_114 = iVar6;
            local_110 = &local_a8;
            pbStack_108 = param_2;
            (**(code **)(*(long *)param_1 + 0x80))(param_1,&local_120,&local_f0,&local_100);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)local_d0);
        }
        iVar5 = iVar5 + 1;
        iVar6 = (**(code **)(*plVar12 + 0x38))(plVar12);
      } while (iVar5 < iVar6);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


