// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 0099d620
// Size: 144 bytes
// Signature: undefined __thiscall push_back(SimpleArray<Bt2PhysicsJointObject*,false,1u> * this, Bt2PhysicsJointObject * * param_1)


/* Bt2ScenegraphPhysicsContext::SimpleArray<Bt2PhysicsJointObject*, false,
   1u>::push_back(Bt2PhysicsJointObject* const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::SimpleArray<Bt2PhysicsJointObject*,false,1u>::push_back
          (SimpleArray<Bt2PhysicsJointObject*,false,1u> *this,Bt2PhysicsJointObject **param_1)

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
    __dest = operator_new__((ulong)(uVar1 + 1) << 3);
    __src = *(void **)this;
    if (*(uint *)(this + 8) != 0) {
      memcpy(__dest,__src,(ulong)*(uint *)(this + 8) << 3);
    }
    operator_delete__(__src);
    uVar1 = *(uint *)(this + 8);
    *(void **)this = __dest;
  }
  *(Bt2PhysicsJointObject **)((long)__dest + (ulong)uVar1 * 8) = *param_1;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}


