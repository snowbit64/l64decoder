// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2PhysicsErrorStream
// Entry Point: 00baf42c
// Size: 32 bytes
// Signature: undefined __thiscall Bt2PhysicsErrorStream(Bt2PhysicsErrorStream * this, bool param_1, bool param_2)


/* Bt2PhysicsErrorStream::Bt2PhysicsErrorStream(bool, bool) */

void __thiscall
Bt2PhysicsErrorStream::Bt2PhysicsErrorStream(Bt2PhysicsErrorStream *this,bool param_1,bool param_2)

{
  uint uVar1;
  
  uVar1 = 0xfffffffb;
  if (param_1) {
    uVar1 = 0xffffffff;
  }
  if (!param_2) {
    uVar1 = uVar1 & 0xfffffffd;
  }
  *(uint *)this = uVar1;
  return;
}


