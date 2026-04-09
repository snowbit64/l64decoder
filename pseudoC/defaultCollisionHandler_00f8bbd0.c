// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: defaultCollisionHandler
// Entry Point: 00f8bbd0
// Size: 360 bytes
// Signature: undefined __thiscall defaultCollisionHandler(btSoftBody * this, btSoftBody * param_1)


/* btSoftBody::defaultCollisionHandler(btSoftBody*) */

void __thiscall btSoftBody::defaultCollisionHandler(btSoftBody *this,btSoftBody *param_1)

{
  uint uVar1;
  long lVar2;
  btSoftBody *this_00;
  btDbvtNode *pbVar3;
  btDbvtNode *pbVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined **local_68;
  btSoftBody *local_60;
  btSoftBody *local_58;
  float local_50;
  btSoftBody *local_48;
  btSoftBody *pbStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(this + 0x1dc) & *(uint *)(param_1 + 0x1dc) & 0x30;
  if (uVar1 == 0x10) {
    if (this == param_1) goto LAB_00f8bd0c;
    local_68 = &PTR__ICollide_0101bc08;
    fVar5 = (float)(**(code **)(**(long **)(this + 200) + 0x60))();
    local_50 = (float)(**(code **)(**(long **)(param_1 + 200) + 0x60))();
    local_50 = local_50 + fVar5;
    local_60 = this;
    local_58 = param_1;
    btDbvt::collideTT((btDbvt *)(this + 0x4b8),*(btDbvtNode **)(this + 0x4b8),
                      *(btDbvtNode **)(param_1 + 0x518),(ICollide *)&local_68);
    pbVar3 = *(btDbvtNode **)(param_1 + 0x4b8);
    this_00 = param_1 + 0x4b8;
    pbVar4 = *(btDbvtNode **)(this + 0x518);
    local_60 = param_1;
    local_58 = this;
  }
  else {
    if ((uVar1 != 0x20) || ((this == param_1 && ((*(uint *)(param_1 + 0x1dc) >> 6 & 1) == 0))))
    goto LAB_00f8bd0c;
    local_50 = 0.0;
    local_68 = &PTR__ICollide_0101bba8;
    local_60 = (btSoftBody *)CONCAT44(*(undefined4 *)(this + 0x244),0x3f800000);
    fVar5 = (float)(**(code **)(**(long **)(this + 200) + 0x60))();
    fVar6 = (float)(**(code **)(**(long **)(param_1 + 200) + 0x60))();
    this_00 = this + 0x578;
    pbVar3 = *(btDbvtNode **)(this + 0x578);
    pbVar4 = *(btDbvtNode **)(param_1 + 0x578);
    uVar7 = NEON_fminnm(*(undefined4 *)(this + 0x194),*(undefined4 *)(param_1 + 0x194));
    local_58 = (btSoftBody *)CONCAT44(uVar7,fVar6 + fVar5);
    local_48 = this;
    pbStack_40 = param_1;
  }
  btDbvt::collideTT((btDbvt *)this_00,pbVar3,pbVar4,(ICollide *)&local_68);
LAB_00f8bd0c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


