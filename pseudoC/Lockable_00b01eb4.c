// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Lockable
// Entry Point: 00b01eb4
// Size: 48 bytes
// Signature: undefined __thiscall ~Lockable(Lockable<std::__ndk1::vector<StreamableCallback*,std::__ndk1::allocator<StreamableCallback*>>> * this)


/* Lockable<std::__ndk1::vector<StreamableCallback*, std::__ndk1::allocator<StreamableCallback*> >
   >::~Lockable() */

void __thiscall
Lockable<std::__ndk1::vector<StreamableCallback*,std::__ndk1::allocator<StreamableCallback*>>>::
~Lockable(Lockable<std::__ndk1::vector<StreamableCallback*,std::__ndk1::allocator<StreamableCallback*>>>
          *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  Mutex::~Mutex((Mutex *)this);
  return;
}


