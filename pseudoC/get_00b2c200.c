// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get
// Entry Point: 00b2c200
// Size: 188 bytes
// Signature: undefined __thiscall get(ResourceManager * this, char * param_1, uint param_2, ResourceDesc * param_3, STREAM_QUEUE param_4, bool param_5, bool param_6)


/* ResourceManager::get(char const*, unsigned int, ResourceDesc*, StreamManager::STREAM_QUEUE, bool,
   bool) */

undefined8 __thiscall
ResourceManager::get
          (ResourceManager *this,char *param_1,uint param_2,ResourceDesc *param_3,
          STREAM_QUEUE param_4,bool param_5,bool param_6)

{
  long lVar1;
  undefined8 uVar2;
  bool abStack_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  uVar2 = getInternal(this,param_1,param_2,param_3,param_4,param_5,param_6,abStack_6c);
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


