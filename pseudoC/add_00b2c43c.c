// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: add
// Entry Point: 00b2c43c
// Size: 132 bytes
// Signature: undefined __thiscall add(ResourceManager * this, Resource * param_1, ResourceDesc * param_2, bool param_3)


/* ResourceManager::add(Resource*, ResourceDesc*, bool) */

void __thiscall
ResourceManager::add(ResourceManager *this,Resource *param_1,ResourceDesc *param_2,bool param_3)

{
  Resource *pRVar1;
  
  Mutex::enterCriticalSection();
  if (param_3) {
    pRVar1 = param_1 + 0x31;
    if (((byte)param_1[0x30] & 1) != 0) {
      pRVar1 = *(Resource **)(param_1 + 0x40);
    }
  }
  else {
    param_2 = (ResourceDesc *)0x0;
    pRVar1 = (Resource *)&DAT_0050a39f;
  }
  addInternal(this,(char *)pRVar1,param_2,param_1);
  Mutex::leaveCriticalSection();
  return;
}


