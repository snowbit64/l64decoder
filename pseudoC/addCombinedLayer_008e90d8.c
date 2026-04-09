// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addCombinedLayer
// Entry Point: 008e90d8
// Size: 364 bytes
// Signature: undefined __thiscall addCombinedLayer(BaseTerrain * this, char * param_1, uint param_2, uint * param_3, float param_4)


/* BaseTerrain::addCombinedLayer(char const*, unsigned int, unsigned int const*, float) */

void __thiscall
BaseTerrain::addCombinedLayer
          (BaseTerrain *this,char *param_1,uint param_2,uint *param_3,float param_4)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  undefined4 local_88 [2];
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2 < 5) {
    CombinedLayer::CombinedLayer
              ((CombinedLayer *)local_88,
               (uint)((ulong)(*(long *)(this + 0x40) - *(long *)(this + 0x38)) >> 6),param_1,param_2
               ,param_3,param_4);
    puVar1 = *(undefined4 **)(this + 0x40);
    if (puVar1 < *(undefined4 **)(this + 0x48)) {
      *puVar1 = local_88[0];
      *(void **)(puVar1 + 6) = local_70;
      *(undefined8 *)(puVar1 + 4) = uStack_78;
      *(ulong *)(puVar1 + 2) = local_80;
      uStack_78 = 0;
      local_70 = (void *)0x0;
      local_80 = 0;
      *(ulong *)(puVar1 + 10) = CONCAT44(uStack_5c,uStack_60);
      *(undefined8 *)(puVar1 + 8) = local_68;
      *(undefined8 *)(puVar1 + 0xd) = uStack_54;
      *(ulong *)(puVar1 + 0xb) = CONCAT44(uStack_58,uStack_5c);
      *(undefined4 **)(this + 0x40) = puVar1 + 0x10;
    }
    else {
                    /* try { // try from 008e91ac to 008e91b7 has its CatchHandler @ 008e925c */
      std::__ndk1::
      vector<BaseTerrain::CombinedLayer,std::__ndk1::allocator<BaseTerrain::CombinedLayer>>::
      __push_back_slow_path<BaseTerrain::CombinedLayer>
                ((vector<BaseTerrain::CombinedLayer,std::__ndk1::allocator<BaseTerrain::CombinedLayer>>
                  *)(this + 0x38),(CombinedLayer *)local_88);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008e9208 to 008e9213 has its CatchHandler @ 008e9244 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Combined layer %s has too many layers. Maximum supported is %u.\n",
                       param_1,4);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2 < 5);
}


