// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00bf10a4
// Size: 120 bytes
// Signature: undefined __thiscall push_back(deque<ShaderManager::AsyncCompileRequest*,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest*>> * this, AsyncCompileRequest * * param_1)


/* std::__ndk1::deque<ShaderManager::AsyncCompileRequest*,
   std::__ndk1::allocator<ShaderManager::AsyncCompileRequest*>
   >::push_back(ShaderManager::AsyncCompileRequest* const&) */

void __thiscall
std::__ndk1::
deque<ShaderManager::AsyncCompileRequest*,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest*>>
::push_back(deque<ShaderManager::AsyncCompileRequest*,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest*>>
            *this,AsyncCompileRequest **param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(this + 8);
  lVar3 = *(long *)(this + 0x28);
  uVar1 = 0;
  if (*(long *)(this + 0x10) - lVar2 != 0) {
    uVar1 = (*(long *)(this + 0x10) - lVar2) * 0x40 - 1;
  }
  uVar4 = lVar3 + *(long *)(this + 0x20);
  if (uVar1 == uVar4) {
    __add_back_capacity();
    lVar3 = *(long *)(this + 0x28);
    lVar2 = *(long *)(this + 8);
    uVar4 = *(long *)(this + 0x20) + lVar3;
  }
  *(long *)(this + 0x28) = lVar3 + 1;
  *(AsyncCompileRequest **)
   (*(long *)(lVar2 + (uVar4 >> 6 & 0x3fffffffffffff8)) + (uVar4 & 0x1ff) * 8) = *param_1;
  return;
}


