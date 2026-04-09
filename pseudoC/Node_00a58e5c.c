// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Node
// Entry Point: 00a58e5c
// Size: 68 bytes
// Signature: undefined __thiscall Node(Node * this, char * param_1, bool param_2)


/* Node::Node(char const*, bool) */

void __thiscall Node::Node(Node *this,char *param_1,bool param_2)

{
  Entity::Entity((Entity *)this,param_1,param_2);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__Node_00fe38a8;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 4;
  return;
}


