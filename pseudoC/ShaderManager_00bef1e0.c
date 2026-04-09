// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ShaderManager
// Entry Point: 00bef1e0
// Size: 176 bytes
// Signature: undefined __thiscall ~ShaderManager(ShaderManager * this)


/* ShaderManager::~ShaderManager() */

void __thiscall ShaderManager::~ShaderManager(ShaderManager *this)

{
  ShaderManager SVar1;
  void *pvVar2;
  
                    /* try { // try from 00bef1f0 to 00bef1f3 has its CatchHandler @ 00bef290 */
  destroy();
  std::__ndk1::
  __deque_base<ShaderManager::AsyncCompileRequest*,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest*>>
  ::~__deque_base((__deque_base<ShaderManager::AsyncCompileRequest*,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest*>>
                   *)(this + 0x140));
  pvVar2 = *(void **)(this + 0x128);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x130) = pvVar2;
    operator_delete(pvVar2);
  }
  Event::~Event((Event *)(this + 0xcc));
  Semaphore::~Semaphore((Semaphore *)(this + 0xbc));
  Mutex::~Mutex((Mutex *)(this + 0x94));
  if (((byte)this[0x70] & 1) == 0) {
    SVar1 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    SVar1 = this[0x58];
  }
  if (((byte)SVar1 & 1) == 0) {
    SVar1 = this[0x40];
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    SVar1 = this[0x40];
  }
  if (((byte)SVar1 & 1) == 0) {
    SVar1 = this[0x28];
  }
  else {
    operator_delete(*(void **)(this + 0x50));
    SVar1 = this[0x28];
  }
  if (((byte)SVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
    return;
  }
  return;
}


