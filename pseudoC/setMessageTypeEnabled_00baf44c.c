// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMessageTypeEnabled
// Entry Point: 00baf44c
// Size: 44 bytes
// Signature: undefined __thiscall setMessageTypeEnabled(Bt2PhysicsErrorStream * this, MESSAGE_TYPE param_1, bool param_2)


/* Bt2PhysicsErrorStream::setMessageTypeEnabled(Bt2PhysicsErrorStream::MESSAGE_TYPE, bool) */

void __thiscall
Bt2PhysicsErrorStream::setMessageTypeEnabled
          (Bt2PhysicsErrorStream *this,MESSAGE_TYPE param_1,bool param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (ulong)(param_1 & 0x1f);
  if (param_2) {
    *(uint *)this = *(uint *)this | uVar1;
    return;
  }
  *(uint *)this = *(uint *)this & (uVar1 ^ 0xffffffff);
  return;
}


