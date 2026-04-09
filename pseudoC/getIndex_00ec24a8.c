// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIndex
// Entry Point: 00ec24a8
// Size: 384 bytes
// Signature: undefined __thiscall getIndex(MyVertexIndex * this, double * param_1, bool * param_2)


/* FLOAT_MATH::MyVertexIndex::getIndex(double const*, bool&) */

void __thiscall
FLOAT_MATH::MyVertexIndex::getIndex(MyVertexIndex *this,double *param_1,bool *param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  ulong uVar4;
  KdTreeNode *this_00;
  double __x;
  double __y;
  double __x_00;
  double __x_01;
  uint local_84;
  double local_80;
  undefined8 local_78;
  double local_70;
  uint *local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((byte)this[8] & 1) == 0) {
    local_80 = (double)CONCAT44((float)param_1[1],(float)*param_1);
    local_78 = (double)CONCAT44(local_78._4_4_,(float)param_1[2]);
    uVar4 = (***(code ***)this)(this,&local_80,param_2);
  }
  else {
    *param_2 = false;
    __x = *param_1;
    if (((byte)this[8] >> 1 & 1) == 0) {
      local_78 = param_1[1];
      local_70 = param_1[2];
      __y = *(double *)(this + 0x10);
      this_00 = *(KdTreeNode **)(this + 0x30);
      local_80 = __x;
    }
    else {
      __y = *(double *)(this + 0x10);
      dVar2 = fmod(__x,__y);
      __x_00 = param_1[1];
      dVar3 = fmod(__x_00,__y);
      __x_01 = param_1[2];
      local_70 = fmod(__x_01,__y);
      local_70 = __x_01 - local_70;
      this_00 = *(KdTreeNode **)(this + 0x30);
      local_80 = __x - dVar2;
      local_78 = __x_00 - dVar3;
    }
    uStack_60 = 0;
    local_68 = (uint *)0x0;
    if (this_00 != (KdTreeNode *)0x0) {
      uStack_60 = 0;
      local_68 = (uint *)0x0;
      local_84 = 0;
      VERTEX_INDEX::KdTreeNode::search
                (this_00,0,&local_80,__y,&local_84,1,(KdTreeFindNode *)&local_68,
                 (KdTreeInterface *)(this + 0x20));
      if (local_84 != 0) {
        uVar4 = (ulong)*local_68;
        goto LAB_00ec25f8;
      }
    }
    *param_2 = true;
    uVar4 = VERTEX_INDEX::KdTree::add((KdTree *)(this + 0x20),local_80,local_78,local_70);
  }
LAB_00ec25f8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


