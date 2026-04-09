// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPlaneConvexMultipointIterations
// Entry Point: 00f933d4
// Size: 16 bytes
// Signature: undefined __thiscall setPlaneConvexMultipointIterations(btDefaultCollisionConfiguration * this, int param_1, int param_2)


/* btDefaultCollisionConfiguration::setPlaneConvexMultipointIterations(int, int) */

void __thiscall
btDefaultCollisionConfiguration::setPlaneConvexMultipointIterations
          (btDefaultCollisionConfiguration *this,int param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0xa8);
  lVar2 = *(long *)(this + 0xb0);
  *(int *)(lVar2 + 0xc) = param_1;
  *(int *)(lVar2 + 0x10) = param_2;
  *(int *)(lVar1 + 0xc) = param_1;
  *(int *)(lVar1 + 0x10) = param_2;
  return;
}


