// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDrawWorld
// Entry Point: 00f48b70
// Size: 1056 bytes
// Signature: undefined debugDrawWorld(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btCollisionWorld::debugDrawWorld() */

void btCollisionWorld::debugDrawWorld(void)

{
  long lVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  long *in_x0;
  long lVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 local_150;
  undefined8 uStack_148;
  float local_130;
  float fStack_12c;
  float local_128;
  float local_124;
  float local_120;
  float fStack_11c;
  float local_118;
  float local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined auStack_80 [16];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  lVar5 = (**(code **)(*in_x0 + 0x28))();
  if (lVar5 != 0) {
    plVar6 = (long *)(**(code **)(*in_x0 + 0x28))();
    (**(code **)(*plVar6 + 0x10))(&local_e0);
    plVar6 = (long *)(**(code **)(*in_x0 + 0x28))();
    uVar3 = (**(code **)(*plVar6 + 0x70))();
    if ((((uVar3 >> 3 & 1) != 0) && ((long *)in_x0[5] != (long *)0x0)) &&
       (iVar4 = (**(code **)(*(long *)in_x0[5] + 0x48))(), 0 < iVar4)) {
      iVar8 = 0;
      do {
        lVar5 = (**(code **)(*(long *)in_x0[5] + 0x50))((long *)in_x0[5],iVar8);
        uVar10 = (ulong)*(uint *)(lVar5 + 0x318);
        if (0 < (int)*(uint *)(lVar5 + 0x318)) {
          puVar11 = (undefined4 *)(lVar5 + 0xa0);
          do {
            plVar6 = (long *)(**(code **)(*in_x0 + 0x28))();
            (**(code **)(*plVar6 + 0x50))
                      (puVar11[-0x12],plVar6,puVar11 + -0x1e,puVar11 + -0x16,*puVar11,auStack_80);
            uVar10 = uVar10 - 1;
            puVar11 = puVar11 + 0x30;
          } while (uVar10 != 0);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != iVar4);
    }
    plVar6 = (long *)(**(code **)(*in_x0 + 0x28))();
    uVar10 = (**(code **)(*plVar6 + 0x70))();
    if (((uVar10 & 3) != 0) && (0 < *(int *)((long)in_x0 + 0xc))) {
      lVar5 = 0;
      uStack_148 = 0x3e99999a;
      local_150 = 0x3e99999a3e99999a;
      do {
        lVar9 = *(long *)(in_x0[3] + lVar5 * 8);
        if ((*(byte *)(lVar9 + 0xe0) >> 5 & 1) == 0) {
          lVar7 = (**(code **)(*in_x0 + 0x28))();
          if (lVar7 != 0) {
            plVar6 = (long *)(**(code **)(*in_x0 + 0x28))();
            uVar10 = (**(code **)(*plVar6 + 0x70))();
            if ((uVar10 & 1) != 0) {
              local_f0 = local_150;
              uStack_e8 = uStack_148;
              switch(*(undefined4 *)(lVar9 + 0xec)) {
              case 1:
                local_f0 = local_e0;
                uStack_e8 = uStack_d8;
                break;
              case 2:
                local_f0 = local_d0;
                uStack_e8 = uStack_c8;
                break;
              case 3:
                local_f0 = local_c0;
                uStack_e8 = uStack_b8;
                break;
              case 4:
                local_f0 = local_b0;
                uStack_e8 = uStack_a8;
                break;
              case 5:
                local_f0 = local_a0;
                uStack_e8 = uStack_98;
              }
              (**(code **)(*in_x0 + 0x38))();
            }
          }
          if (((long *)in_x0[0xd] != (long *)0x0) &&
             (uVar3 = (**(code **)(*(long *)in_x0[0xd] + 0x70))(), (uVar3 >> 1 & 1) != 0)) {
            uStack_108 = uStack_88;
            local_110 = local_90;
            (**(code **)(**(long **)(lVar9 + 200) + 0x10))
                      (*(long **)(lVar9 + 200),lVar9 + 8,&local_f0,&local_100);
            fVar2 = gContactBreakingThreshold;
            local_f0 = CONCAT44((float)((ulong)local_f0 >> 0x20) - gContactBreakingThreshold,
                                (float)local_f0 - gContactBreakingThreshold);
            local_f8 = local_f8 + gContactBreakingThreshold;
            uStack_e8 = CONCAT44(uStack_e8._4_4_,(float)uStack_e8 - gContactBreakingThreshold);
            local_100 = CONCAT44((float)((ulong)local_100 >> 0x20) + gContactBreakingThreshold,
                                 (float)local_100 + gContactBreakingThreshold);
            if ((*(char *)(in_x0 + 8) != '\0') &&
               ((*(int *)(lVar9 + 0x100) == 2 && ((*(byte *)(lVar9 + 0xe0) & 3) == 0)))) {
              (**(code **)(**(long **)(lVar9 + 200) + 0x10))
                        (*(long **)(lVar9 + 200),lVar9 + 0x48,&local_120,&local_130);
              local_120 = local_120 - fVar2;
              fStack_11c = fStack_11c - fVar2;
              local_118 = local_118 - fVar2;
              local_130 = local_130 + fVar2;
              fStack_12c = fStack_12c + fVar2;
              local_128 = local_128 + fVar2;
              if (local_120 < (float)local_f0) {
                local_f0 = CONCAT44(local_f0._4_4_,local_120);
              }
              if (fStack_11c < local_f0._4_4_) {
                local_f0 = CONCAT44(fStack_11c,(float)local_f0);
              }
              if (local_118 < (float)uStack_e8) {
                uStack_e8 = CONCAT44(uStack_e8._4_4_,local_118);
              }
              if (local_114 < uStack_e8._4_4_) {
                uStack_e8 = CONCAT44(local_114,(float)uStack_e8);
              }
              if ((float)local_100 < local_130) {
                local_100 = CONCAT44(local_100._4_4_,local_130);
              }
              if (local_100._4_4_ < fStack_12c) {
                local_100 = CONCAT44(fStack_12c,(float)local_100);
              }
              if (local_f8 < local_128) {
                local_f8 = local_128;
              }
              if (local_f4 < local_124) {
                local_f4 = local_124;
              }
            }
            (**(code **)(*(long *)in_x0[0xd] + 0x78))
                      ((long *)in_x0[0xd],&local_f0,&local_100,&local_110);
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)((long)in_x0 + 0xc));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


