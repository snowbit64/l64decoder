// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ScenegraphNode
// Entry Point: 00a5b4a4
// Size: 100 bytes
// Signature: undefined __thiscall ScenegraphNode(ScenegraphNode * this, char * param_1)


/* ScenegraphNode::ScenegraphNode(char const*) */

void __thiscall ScenegraphNode::ScenegraphNode(ScenegraphNode *this,char *param_1)

{
  Node::Node((Node *)this,param_1,true);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__ScenegraphNode_00fe39b0;
                    /* try { // try from 00a5b4e4 to 00a5b4e7 has its CatchHandler @ 00a5b508 */
  UserAttributes::UserAttributes((UserAttributes *)(this + 0x60));
  *(undefined4 *)(this + 0x40) = 1;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 8;
  return;
}


