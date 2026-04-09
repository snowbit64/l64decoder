// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIndex
// Entry Point: 00ec2328
// Size: 384 bytes
// Signature: undefined __thiscall getIndex(MyVertexIndex * this, float * param_1, bool * param_2)


/* FLOAT_MATH::MyVertexIndex::getIndex(float const*, bool&) */

void __thiscall
FLOAT_MATH::MyVertexIndex::getIndex(MyVertexIndex *this,float *param_1,bool *param_2)

{
  long lVar1;
  KdTreeNode *this_00;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float __x;
  float __y;
  float __x_00;
  float __x_01;
  uint local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  uint *local_70;
  double dStack_68;
  double local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((byte)this[8] & 1) == 0) {
    *param_2 = false;
    __x = *param_1;
    if (((byte)this[8] >> 1 & 1) == 0) {
      fStack_78 = param_1[1];
      local_74 = param_1[2];
      __y = *(float *)(this + 0x18);
      this_00 = *(KdTreeNode **)(this + 0x30);
      local_7c = __x;
    }
    else {
      __y = *(float *)(this + 0x18);
      fVar3 = fmodf(__x,__y);
      __x_00 = param_1[1];
      fVar4 = fmodf(__x_00,__y);
      __x_01 = param_1[2];
      local_74 = fmodf(__x_01,__y);
      local_74 = __x_01 - local_74;
      this_00 = *(KdTreeNode **)(this + 0x30);
      local_7c = __x - fVar3;
      fStack_78 = __x_00 - fVar4;
    }
    dStack_68 = 0.0;
    local_70 = (uint *)0x0;
    if (this_00 != (KdTreeNode *)0x0) {
      dStack_68 = 0.0;
      local_70 = (uint *)0x0;
      local_80 = 0;
      VERTEX_INDEX::KdTreeNode::search
                (this_00,0,&local_7c,__y,&local_80,1,(KdTreeFindNode *)&local_70,
                 (KdTreeInterface *)(this + 0x20));
      if (local_80 != 0) {
        uVar2 = (ulong)*local_70;
        goto LAB_00ec2478;
      }
    }
    *param_2 = true;
    uVar2 = VERTEX_INDEX::KdTree::add((KdTree *)(this + 0x20),local_7c,fStack_78,local_74);
  }
  else {
    local_70 = (uint *)(double)(float)*(undefined8 *)param_1;
    dStack_68 = (double)(float)((ulong)*(undefined8 *)param_1 >> 0x20);
    local_60 = (double)param_1[2];
    uVar2 = (**(code **)(*(long *)this + 8))(this,&local_70,param_2);
  }
LAB_00ec2478:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


