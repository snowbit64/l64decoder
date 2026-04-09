// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveCookedTriangleMesh
// Entry Point: 00baf8e4
// Size: 1320 bytes
// Signature: undefined __cdecl saveCookedTriangleMesh(btBvhTriangleMeshShape * param_1, Bt2PhysicsMeshInterface * param_2, uchar * * param_3, uint * param_4)


/* Bt2PhysicsSerialization::saveCookedTriangleMesh(btBvhTriangleMeshShape*,
   Bt2PhysicsMeshInterface*, unsigned char*&, unsigned int&) */

undefined8
Bt2PhysicsSerialization::saveCookedTriangleMesh
          (btBvhTriangleMeshShape *param_1,Bt2PhysicsMeshInterface *param_2,uchar **param_3,
          uint *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  void *__dest;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined4 *puVar14;
  undefined8 ****ppppuVar15;
  undefined8 *****pppppuVar16;
  ulong uVar17;
  undefined8 *****pppppuVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 ***pppuVar22;
  uint uVar23;
  uint uVar24;
  undefined8 ***__src;
  undefined8 ***local_1f8;
  undefined8 ***local_1e0;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined8 ****local_190;
  undefined8 ****local_188;
  undefined **local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 *****local_160;
  undefined8 *****local_158;
  undefined8 uStack_150;
  void *local_148;
  undefined auStack_140 [4];
  undefined auStack_13c [4];
  int local_138;
  undefined auStack_134 [4];
  undefined auStack_130 [4];
  int local_12c;
  void *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 ****local_98;
  undefined8 ****local_90;
  undefined8 ****local_88;
  undefined8 local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  (**(code **)(*(long *)param_2 + 0x20))
            (param_2,&local_128,&local_12c,auStack_13c,auStack_130,&local_148,auStack_134,&local_138
             ,auStack_140,0);
  local_170 = 0;
  uStack_168 = 0;
  local_158 = (undefined8 *****)0x0;
  uStack_150 = 0;
  local_180 = &PTR__BtSerializerWrapper_00feb0f8;
  uStack_178 = 0;
  uVar23 = local_12c * 0xc + local_138 * 6;
  iVar6 = local_138 % 2;
  uVar5 = uVar23 + 2;
  if (iVar6 != 1) {
    uVar5 = uVar23;
  }
                    /* try { // try from 00baf9c0 to 00baf9cb has its CatchHandler @ 00bafe14 */
  local_160 = &local_158;
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))(*(long **)(param_1 + 0x48),&local_d8,&local_180)
  ;
  local_e0 = local_80;
  uStack_118 = uStack_d0;
  local_120 = local_d8;
  uStack_108 = uStack_c0;
  uStack_110 = uStack_c8;
  uStack_f8 = uStack_b0;
  local_100 = local_b8;
  uStack_e8 = uStack_a0;
  uStack_f0 = uStack_a8;
  pppppuVar16 = &local_158;
  pppppuVar18 = local_158;
  if (local_158 == (undefined8 *****)0x0) {
    uVar23 = 0;
    __src = (undefined8 ***)0x0;
LAB_00bafba0:
    local_1e0 = (undefined8 ***)0x0;
    uVar20 = 0;
  }
  else {
    do {
      pppppuVar13 = pppppuVar18;
      pppppuVar12 = pppppuVar16;
      ppppuVar15 = pppppuVar13[4];
      pppppuVar16 = pppppuVar12;
      if (ppppuVar15 >= local_98) {
        pppppuVar16 = pppppuVar13;
      }
      pppppuVar18 = (undefined8 *****)pppppuVar13[ppppuVar15 < local_98];
    } while ((undefined8 *****)pppppuVar13[ppppuVar15 < local_98] != (undefined8 *****)0x0);
    pppppuVar18 = &local_158;
    pppppuVar9 = local_158;
    pppppuVar8 = local_158;
    if ((undefined8 ******)pppppuVar16 == &local_158) {
LAB_00bafa48:
      do {
        pppppuVar12 = pppppuVar9;
        pppppuVar16 = pppppuVar18;
        ppppuVar15 = pppppuVar12[4];
        pppppuVar18 = pppppuVar16;
        if (ppppuVar15 >= local_90) {
          pppppuVar18 = pppppuVar12;
        }
        pppppuVar9 = (undefined8 *****)pppppuVar12[ppppuVar15 < local_90];
      } while ((undefined8 *****)pppppuVar12[ppppuVar15 < local_90] != (undefined8 *****)0x0);
      if ((undefined8 ******)pppppuVar18 != &local_158) {
        pppppuVar18 = pppppuVar16;
        if (local_90 <= ppppuVar15) {
          pppppuVar18 = pppppuVar12;
        }
        if (pppppuVar18[4] <= local_90) {
          if (local_90 <= ppppuVar15) {
            pppppuVar16 = pppppuVar12;
          }
          __src = pppppuVar16[5][1];
          uVar23 = *(uint *)((long)pppppuVar16[5] + 4);
          goto joined_r0x00bafb9c;
        }
      }
      __src = (undefined8 ***)0x0;
      uVar23 = 0;
      pppppuVar16 = &local_158;
      if (local_158 != (undefined8 *****)0x0) goto LAB_00bafb28;
      goto LAB_00bafba0;
    }
    pppppuVar16 = pppppuVar12;
    if (local_98 <= ppppuVar15) {
      pppppuVar16 = pppppuVar13;
    }
    if (local_98 < pppppuVar16[4]) goto LAB_00bafa48;
    if (local_98 <= ppppuVar15) {
      pppppuVar12 = pppppuVar13;
    }
    uVar23 = *(uint *)((long)pppppuVar12[5] + 4);
    __src = pppppuVar12[5][1];
    if (0x2f < uVar23) {
      uVar20 = uVar23 / 0x30 - 1;
      uVar19 = (ulong)uVar20;
      pppuVar22 = __src;
      if (uVar20 != 0) {
        uVar4 = uVar19 + 1;
        uVar19 = uVar4 & 0x1fffffffe;
        puVar14 = (undefined4 *)((long)__src + 0x5c);
        uVar17 = uVar19;
        do {
          uVar17 = uVar17 - 2;
          puVar14[-0xc] = 0;
          *puVar14 = 0;
          puVar14 = puVar14 + 0x18;
        } while (uVar17 != 0);
        pppuVar22 = __src + uVar19 * 6;
        if (uVar4 == uVar19) goto joined_r0x00bafb9c;
      }
      iVar11 = uVar23 / 0x30 - (int)uVar19;
      puVar14 = (undefined4 *)((long)pppuVar22 + 0x2c);
      do {
        iVar11 = iVar11 + -1;
        *puVar14 = 0;
        puVar14 = puVar14 + 0xc;
      } while (iVar11 != 0);
    }
joined_r0x00bafb9c:
    pppppuVar16 = &local_158;
    if (local_158 == (undefined8 *****)0x0) goto LAB_00bafba0;
LAB_00bafb28:
    do {
      pppppuVar18 = pppppuVar16;
      pppppuVar12 = pppppuVar8;
      ppppuVar15 = pppppuVar12[4];
      pppppuVar16 = pppppuVar18;
      if (ppppuVar15 >= local_88) {
        pppppuVar16 = pppppuVar12;
      }
      pppppuVar8 = (undefined8 *****)pppppuVar12[ppppuVar15 < local_88];
    } while ((undefined8 *****)pppppuVar12[ppppuVar15 < local_88] != (undefined8 *****)0x0);
    if ((undefined8 ******)pppppuVar16 == &local_158) goto LAB_00bafba0;
    pppppuVar16 = pppppuVar18;
    if (local_88 <= ppppuVar15) {
      pppppuVar16 = pppppuVar12;
    }
    if (local_88 < pppppuVar16[4]) goto LAB_00bafba0;
    if (local_88 <= ppppuVar15) {
      pppppuVar18 = pppppuVar12;
    }
    local_1e0 = pppppuVar18[5][1];
    uVar20 = *(uint *)((long)pppppuVar18[5] + 4);
  }
                    /* try { // try from 00bafbb4 to 00bafbbf has its CatchHandler @ 00bafe10 */
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))
            (*(long **)(param_1 + 0x50),&local_1b0,&local_180);
  uVar2 = uVar23 + uVar20 + 0x48;
  pppppuVar16 = &local_158;
  pppppuVar18 = local_158;
  if (local_158 == (undefined8 *****)0x0) {
    uVar24 = 0;
    local_1f8 = (undefined8 ***)0x0;
  }
  else {
    do {
      pppppuVar13 = pppppuVar18;
      pppppuVar12 = pppppuVar16;
      ppppuVar15 = pppppuVar13[4];
      pppppuVar16 = pppppuVar12;
      if (ppppuVar15 >= local_190) {
        pppppuVar16 = pppppuVar13;
      }
      pppppuVar18 = (undefined8 *****)pppppuVar13[ppppuVar15 < local_190];
    } while ((undefined8 *****)pppppuVar13[ppppuVar15 < local_190] != (undefined8 *****)0x0);
    pppppuVar18 = local_158;
    if ((undefined8 ******)pppppuVar16 == &local_158) {
LAB_00bafc30:
      local_1f8 = (undefined8 ***)0x0;
      uVar24 = 0;
      pppppuVar16 = &local_158;
    }
    else {
      pppppuVar16 = pppppuVar12;
      if (local_190 <= ppppuVar15) {
        pppppuVar16 = pppppuVar13;
      }
      if (local_190 < pppppuVar16[4]) goto LAB_00bafc30;
      if (local_190 <= ppppuVar15) {
        pppppuVar12 = pppppuVar13;
      }
      local_1f8 = pppppuVar12[5][1];
      uVar24 = *(uint *)((long)pppppuVar12[5] + 4);
      pppppuVar16 = &local_158;
    }
    do {
      pppppuVar12 = pppppuVar16;
      pppppuVar13 = pppppuVar18;
      ppppuVar15 = pppppuVar13[4];
      pppppuVar16 = pppppuVar12;
      if (ppppuVar15 >= local_188) {
        pppppuVar16 = pppppuVar13;
      }
      pppppuVar18 = (undefined8 *****)pppppuVar13[ppppuVar15 < local_188];
    } while ((undefined8 *****)pppppuVar13[ppppuVar15 < local_188] != (undefined8 *****)0x0);
    if ((undefined8 ******)pppppuVar16 != &local_158) {
      pppppuVar16 = pppppuVar12;
      if (local_188 <= ppppuVar15) {
        pppppuVar16 = pppppuVar13;
      }
      if (pppppuVar16[4] <= local_188) {
        if (local_188 <= ppppuVar15) {
          pppppuVar12 = pppppuVar13;
        }
        pppuVar22 = pppppuVar12[5][1];
        uVar21 = *(uint *)((long)pppppuVar12[5] + 4);
        goto LAB_00bafcb0;
      }
    }
  }
  pppuVar22 = (undefined8 ***)0x0;
  uVar21 = 0;
LAB_00bafcb0:
  uVar3 = uVar5 + uVar2 + uVar24 + uVar21 + 0x2c;
  *param_4 = uVar3;
                    /* try { // try from 00bafcc8 to 00bafccf has its CatchHandler @ 00bafe0c */
  puVar10 = (undefined4 *)operator_new__((ulong)uVar3);
  *param_3 = (uchar *)puVar10;
  puVar14 = puVar10 + 4;
  *puVar10 = 0x36d74;
  puVar10[1] = uVar3;
  uVar19 = -(ulong)((uint)(local_12c * 3) >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(uint)(local_12c * 3) << 2;
  puVar10[2] = local_12c;
  puVar10[3] = local_138 * 3;
  memcpy(puVar14,local_128,uVar19);
  __dest = (void *)((long)puVar14 + uVar19);
  memcpy(__dest,local_148,(long)local_138 * 6);
  if (iVar6 == 1) {
    *(undefined2 *)((long)__dest + (long)local_138 * 6) = 0;
  }
  puVar1 = (undefined8 *)((long)puVar14 + (ulong)uVar5);
  puVar1[5] = uStack_f8;
  puVar1[4] = local_100;
  puVar1[7] = uStack_e8;
  puVar1[6] = uStack_f0;
  puVar1[8] = local_e0;
  puVar1[1] = uStack_118;
  *puVar1 = local_120;
  puVar1[3] = uStack_108;
  puVar1[2] = uStack_110;
  memcpy(puVar1 + 9,__src,(ulong)uVar23);
  memcpy((void *)((long)(puVar1 + 9) + (ulong)uVar23),local_1e0,(ulong)uVar20);
  puVar1 = (undefined8 *)((long)puVar1 + (ulong)uVar2);
  puVar1[1] = CONCAT44(uStack_1a4,uStack_1a8);
  *puVar1 = local_1b0;
  *(undefined8 *)((long)puVar1 + 0x14) = uStack_19c;
  *(ulong *)((long)puVar1 + 0xc) = CONCAT44(uStack_1a0,uStack_1a4);
  memcpy((void *)((long)puVar1 + 0x1c),local_1f8,(ulong)uVar24);
  memcpy((void *)((long)(void *)((long)puVar1 + 0x1c) + (ulong)uVar24),pppuVar22,(ulong)uVar21);
  BtSerializerWrapper::~BtSerializerWrapper((BtSerializerWrapper *)&local_180);
  if (*(long *)(lVar7 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


