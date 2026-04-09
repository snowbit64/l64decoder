// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: defaultCollisionHandler
// Entry Point: 00f8a318
// Size: 504 bytes
// Signature: undefined __thiscall defaultCollisionHandler(btSoftBody * this, btCollisionObjectWrapper * param_1)


/* btSoftBody::defaultCollisionHandler(btCollisionObjectWrapper const*) */

void __thiscall
btSoftBody::defaultCollisionHandler(btSoftBody *this,btCollisionObjectWrapper *param_1)

{
  ulong uVar1;
  long lVar2;
  btSoftBody *this_00;
  btDbvtNode *pbVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined **local_110;
  btSoftBody *local_108;
  btCollisionObjectWrapper *local_100;
  ulong local_f8;
  btSoftBody *local_f0;
  btCollisionObjectWrapper *pbStack_e8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(this + 0x1dc) & 0xf) == 2) {
    local_f8 = local_f8 & 0xffffffff00000000;
    local_110 = &PTR__ICollide_0101ba30;
    local_108 = (btSoftBody *)CONCAT44(*(undefined4 *)(this + 0x244),0x3f800000);
    local_f0 = this;
    pbStack_e8 = param_1;
    fVar4 = (float)(**(code **)(**(long **)(param_1 + 8) + 0x60))();
    fVar5 = (float)(**(code **)(**(long **)(this + 200) + 0x60))();
    fVar5 = fVar5 + fVar4;
    uVar6 = NEON_fminnm(*(undefined4 *)(this + 0x194),
                        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0xf4));
    local_100 = (btCollisionObjectWrapper *)CONCAT44(uVar6,fVar5);
    (**(code **)(**(long **)(param_1 + 8) + 0x10))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),&uStack_68,&local_78);
    this_00 = this + 0x578;
    uStack_98._0_4_ = (float)uStack_60;
    local_88._0_4_ = (float)uStack_70;
    pbVar3 = *(btDbvtNode **)(this + 0x578);
    local_a0 = CONCAT44((float)((ulong)uStack_68 >> 0x20) - fVar5,(float)uStack_68 - fVar5);
    uStack_98._4_4_ = (undefined4)((ulong)uStack_60 >> 0x20);
    uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98 - fVar5);
    local_90 = CONCAT44((float)((ulong)local_78 >> 0x20) + fVar5,(float)local_78 + fVar5);
    local_88._4_4_ = (undefined4)((ulong)uStack_70 >> 0x20);
    local_88 = CONCAT44(local_88._4_4_,(float)local_88 + fVar5);
  }
  else {
    if ((*(uint *)(this + 0x1dc) & 0xf) != 1) goto LAB_00f8a4e0;
    local_110 = &PTR__ICollide_0101b9d0;
    uVar1 = 0;
    if ((*(uint *)(*(ulong *)(param_1 + 0x10) + 0x100) & 2) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x10);
    }
    fVar4 = (float)(**(code **)(**(long **)(this + 200) + 0x60))();
    (**(code **)(**(long **)(param_1 + 8) + 0x10))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),&uStack_68,&local_78);
    this_00 = this + 0x4b8;
    uStack_98._0_4_ = (float)uStack_60;
    local_88._0_4_ = (float)uStack_70;
    pbVar3 = *(btDbvtNode **)(this + 0x4b8);
    local_f0 = (btSoftBody *)CONCAT44(fVar4,fVar4);
    local_a0 = CONCAT44((float)((ulong)uStack_68 >> 0x20) - fVar4,(float)uStack_68 - fVar4);
    uStack_98._4_4_ = (undefined4)((ulong)uStack_60 >> 0x20);
    uStack_98 = CONCAT44(uStack_98._4_4_,(float)uStack_98 - fVar4);
    local_90 = CONCAT44((float)((ulong)local_78 >> 0x20) + fVar4,(float)local_78 + fVar4);
    local_88._4_4_ = (undefined4)((ulong)uStack_70 >> 0x20);
    local_88 = CONCAT44(local_88._4_4_,(float)local_88 + fVar4);
    local_108 = this;
    local_100 = param_1;
    local_f8 = uVar1;
  }
  btDbvt::collideTV((btDbvt *)this_00,pbVar3,(btDbvtAabbMm *)&local_a0,(ICollide *)&local_110);
LAB_00f8a4e0:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


