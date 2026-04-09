// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00af8b90
// Size: 16 bytes
// Signature: undefined __thiscall init(NavigationMeshNode * this, uint param_1, ushort * param_2, ushort * param_3, float param_4)


/* NavigationMeshNode::init(unsigned int, unsigned short*, unsigned short*, float) */

void __thiscall
NavigationMeshNode::init
          (NavigationMeshNode *this,uint param_1,ushort *param_2,ushort *param_3,float param_4)

{
  *(uint *)(this + 0x10) = param_1;
  *(ushort **)this = param_2;
  *(ushort **)(this + 8) = param_3;
  *(float *)(this + 0x14) = param_4;
  return;
}


