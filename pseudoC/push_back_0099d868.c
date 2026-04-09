// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 0099d868
// Size: 144 bytes
// Signature: undefined __thiscall push_back(SimpleArray<TransformGroup*,true,32u> * this, TransformGroup * * param_1)


/* Bt2ScenegraphPhysicsContext::SimpleArray<TransformGroup*, true, 32u>::push_back(TransformGroup*
   const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::SimpleArray<TransformGroup*,true,32u>::push_back
          (SimpleArray<TransformGroup*,true,32u> *this,TransformGroup **param_1)

{
  uint uVar1;
  void *__dest;
  void *__src;
  
  uVar1 = *(uint *)(this + 8);
  if (uVar1 < *(uint *)(this + 0xc)) {
    __dest = *(void **)this;
  }
  else {
    *(uint *)(this + 0xc) = uVar1 + 0x20;
    __dest = operator_new__((ulong)(uVar1 + 0x20) << 3);
    __src = *(void **)this;
    if (*(uint *)(this + 8) != 0) {
      memcpy(__dest,__src,(ulong)*(uint *)(this + 8) << 3);
    }
    operator_delete__(__src);
    uVar1 = *(uint *)(this + 8);
    *(void **)this = __dest;
  }
  *(TransformGroup **)((long)__dest + (ulong)uVar1 * 8) = *param_1;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}


