// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CProfileNode
// Entry Point: 00fa7c34
// Size: 24 bytes
// Signature: undefined __thiscall CProfileNode(CProfileNode * this, char * param_1, CProfileNode * param_2)


/* CProfileNode::CProfileNode(char const*, CProfileNode*) */

void __thiscall CProfileNode::CProfileNode(CProfileNode *this,char *param_1,CProfileNode *param_2)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(char **)this = param_1;
  *(undefined4 *)(this + 0x18) = 0;
  *(CProfileNode **)(this + 0x20) = param_2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  Reset();
  return;
}


