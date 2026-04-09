// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLocalScaling
// Entry Point: 00f5f78c
// Size: 596 bytes
// Signature: undefined __thiscall setLocalScaling(btCompoundShape * this, btVector3 * param_1)


/* btCompoundShape::setLocalScaling(btVector3 const&) */

void __thiscall btCompoundShape::setLocalScaling(btCompoundShape *this,btVector3 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (0 < *(int *)(this + 0x24)) {
    lVar6 = 0;
    do {
      lVar5 = lVar6 * 0x58;
      puVar3 = (undefined8 *)(*(long *)(this + 0x30) + lVar5);
      uStack_e8 = puVar3[1];
      local_f0 = *puVar3;
      uStack_d8 = puVar3[3];
      local_e0 = puVar3[2];
      uStack_c8 = puVar3[5];
      local_d0 = puVar3[4];
      uStack_b8 = puVar3[7];
      local_c0 = puVar3[6];
      puVar3 = (undefined8 *)(**(code **)(*(long *)puVar3[8] + 0x38))();
      uStack_f8._0_4_ = (float)puVar3[1];
      local_100 = CONCAT44(((float)((ulong)*(undefined8 *)param_1 >> 0x20) *
                           (float)((ulong)*puVar3 >> 0x20)) /
                           (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20),
                           ((float)*(undefined8 *)param_1 * (float)*puVar3) /
                           (float)*(undefined8 *)(this + 0x70));
      uStack_f8 = (ulong)(uint)((*(float *)(param_1 + 8) * (float)uStack_f8) /
                               *(float *)(this + 0x78));
      plVar4 = *(long **)(*(long *)(this + 0x30) + lVar5 + 0x40);
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_100);
      puVar3 = (undefined8 *)(*(long *)(this + 0x30) + lVar5);
      local_c0 = CONCAT44(((float)((ulong)*(undefined8 *)param_1 >> 0x20) *
                          (float)((ulong)local_c0 >> 0x20)) /
                          (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20),
                          ((float)*(undefined8 *)param_1 * (float)local_c0) /
                          (float)*(undefined8 *)(this + 0x70));
      uStack_b8 = (ulong)(uint)((*(float *)(param_1 + 8) * (float)uStack_b8) /
                               *(float *)(this + 0x78));
      puVar3[1] = uStack_e8;
      *puVar3 = local_f0;
      puVar3[3] = uStack_d8;
      puVar3[2] = local_e0;
      puVar3[5] = uStack_c8;
      puVar3[4] = local_d0;
      puVar3[7] = uStack_b8;
      puVar3[6] = local_c0;
      if (*(long *)(this + 0x60) != 0) {
        plVar4 = *(long **)(*(long *)(this + 0x30) + lVar6 * 0x58 + 0x40);
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_f0,&uStack_80,&local_90);
        uStack_98 = uStack_88;
        local_a0 = local_90;
        plVar4 = *(long **)(this + 0x60);
        uStack_a8 = uStack_78;
        local_b0 = uStack_80;
        puVar3 = *(undefined8 **)(*(long *)(this + 0x30) + lVar6 * 0x58 + 0x50);
        lVar5 = FUN_00f424e4(plVar4,puVar3);
        if (lVar5 != 0) {
          iVar1 = *(int *)(plVar4 + 2);
          if (iVar1 < 0) {
            lVar5 = *plVar4;
          }
          else {
            while ((iVar1 != 0 && (*(long *)(lVar5 + 0x20) != 0))) {
              iVar1 = iVar1 + -1;
              lVar5 = *(long *)(lVar5 + 0x20);
            }
          }
        }
        puVar3[1] = uStack_a8;
        *puVar3 = local_b0;
        puVar3[3] = uStack_98;
        puVar3[2] = local_a0;
        FUN_00f42680(plVar4,lVar5,puVar3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(this + 0x24));
  }
  uVar7 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x70) = uVar7;
  (**(code **)(*(long *)this + 0x88))(this);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


