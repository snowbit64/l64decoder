// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: link
// Entry Point: 00a5b654
// Size: 72 bytes
// Signature: undefined __thiscall link(ScenegraphNode * this, Node * param_1, uint param_2)


/* ScenegraphNode::link(Node*, unsigned int) */

undefined4 __thiscall ScenegraphNode::link(ScenegraphNode *this,Node *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = Node::link((Node *)this,param_1,param_2);
  if (((byte)param_1[0x40] >> 4 & 1) != 0) {
    (**(code **)(*(long *)this + 0x20))(this,1);
  }
  return uVar1;
}


