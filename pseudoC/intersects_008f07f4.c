// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersects
// Entry Point: 008f07f4
// Size: 276 bytes
// Signature: undefined __thiscall intersects(QuadTreeNode * this, Frustum * param_1)


/* GeoQuadTree::QuadTreeNode::intersects(Frustum const&) */

void __thiscall GeoQuadTree::QuadTreeNode::intersects(QuadTreeNode *this,Frustum *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  float local_58;
  float fStack_54;
  float local_50;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = (*(float *)(this + 0x10) + *(float *)(this + 0x18)) * 0.5;
  fStack_44 = (*(float *)(this + 0x20) + *(float *)(this + 0x24)) * 0.5;
  local_40 = (*(float *)(this + 0x14) + *(float *)(this + 0x1c)) * 0.5;
  local_58 = (*(float *)(this + 0x18) - *(float *)(this + 0x10)) * 0.5;
  fStack_54 = (*(float *)(this + 0x24) - *(float *)(this + 0x20)) * 0.5;
  local_50 = (*(float *)(this + 0x1c) - *(float *)(this + 0x14)) * 0.5;
  uVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_48,&local_58);
  if (((uVar2 & 1) == 0) ||
     ((((this[0x38] != (QuadTreeNode)0x0 &&
        (uVar2 = intersects(*(QuadTreeNode **)(this + 0x40),param_1), (uVar2 & 1) == 0)) &&
       (uVar2 = intersects(*(QuadTreeNode **)(this + 0x48),param_1), (uVar2 & 1) == 0)) &&
      ((uVar2 = intersects(*(QuadTreeNode **)(this + 0x50),param_1), (uVar2 & 1) == 0 &&
       (uVar2 = intersects(*(QuadTreeNode **)(this + 0x58),param_1), (uVar2 & 1) == 0)))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


