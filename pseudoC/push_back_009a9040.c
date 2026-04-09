// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 009a9040
// Size: 144 bytes
// Signature: undefined __thiscall push_back(SimpleArray<unsigned_int,false,1u> * this, uint * param_1)


/* Bt2ScenegraphPhysicsContext::SimpleArray<unsigned int, false, 1u>::push_back(unsigned int const&)
    */

void __thiscall
Bt2ScenegraphPhysicsContext::SimpleArray<unsigned_int,false,1u>::push_back
          (SimpleArray<unsigned_int,false,1u> *this,uint *param_1)

{
  uint uVar1;
  void *__dest;
  void *__src;
  
  uVar1 = *(uint *)(this + 8);
  if (uVar1 < *(uint *)(this + 0xc)) {
    __dest = *(void **)this;
  }
  else {
    *(uint *)(this + 0xc) = uVar1 + 1;
    __dest = operator_new__((ulong)(uVar1 + 1) << 2);
    __src = *(void **)this;
    if (*(uint *)(this + 8) != 0) {
      memcpy(__dest,__src,(ulong)*(uint *)(this + 8) << 2);
    }
    operator_delete__(__src);
    uVar1 = *(uint *)(this + 8);
    *(void **)this = __dest;
  }
  *(uint *)((long)__dest + (ulong)uVar1 * 4) = *param_1;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}


