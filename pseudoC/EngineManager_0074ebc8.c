// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EngineManager
// Entry Point: 0074ebc8
// Size: 440 bytes
// Signature: undefined __thiscall ~EngineManager(EngineManager * this)


/* WARNING: Type propagation algorithm not settling */
/* EngineManager::~EngineManager() */

void __thiscall EngineManager::~EngineManager(EngineManager *this)

{
  EngineManager EVar1;
  void **ppvVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__EngineManager_00fdaad8;
  *(undefined ***)(this + 8) = &PTR__EngineManager_00fdab50;
  *(undefined ***)(this + 0x10) = &PTR__EngineManager_00fdab78;
  *(undefined ***)(this + 0x18) = &PTR__EngineManager_00fdaba0;
  *(undefined ***)(this + 0x20) = &PTR__EngineManager_00fdabc8;
  *(undefined ***)(this + 0x28) = &PTR__EngineManager_00fdac00;
  *(undefined **)(this + 0x30) = &DAT_00fdac28;
  *(undefined ***)(this + 0x38) = &PTR_notifyAppSuspended_00fdac40;
  if (((byte)this[800] & 1) == 0) {
    EVar1 = this[0x2f8];
  }
  else {
    operator_delete(*(void **)(this + 0x330));
    EVar1 = this[0x2f8];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x2b0];
  }
  else {
    operator_delete(*(void **)(this + 0x308));
    EVar1 = this[0x2b0];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x280];
  }
  else {
    operator_delete(*(void **)(this + 0x2c0));
    EVar1 = this[0x280];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x180];
  }
  else {
    operator_delete(*(void **)(this + 0x290));
    EVar1 = this[0x180];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x168];
  }
  else {
    operator_delete(*(void **)(this + 400));
    EVar1 = this[0x168];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x150];
  }
  else {
    operator_delete(*(void **)(this + 0x178));
    EVar1 = this[0x150];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x138];
  }
  else {
    operator_delete(*(void **)(this + 0x160));
    EVar1 = this[0x138];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x120];
  }
  else {
    operator_delete(*(void **)(this + 0x148));
    EVar1 = this[0x120];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x108];
  }
  else {
    operator_delete(*(void **)(this + 0x130));
    EVar1 = this[0x108];
  }
  if (((byte)EVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x118));
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>>>
             *)(this + 0xa0),*(__tree_node **)(this + 0xa8));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>>>
             *)(this + 0x88),*(__tree_node **)(this + 0x90));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,EngineManager::ScriptCallbackInfo>>>
             *)(this + 0x70),*(__tree_node **)(this + 0x78));
  ppvVar2 = (void **)*(void **)(this + 0x58);
  while (ppvVar2 != (void **)0x0) {
    pvVar3 = *ppvVar2;
    if ((*(byte *)(ppvVar2 + 4) & 1) != 0) {
      operator_delete(ppvVar2[6]);
    }
    operator_delete(ppvVar2);
    ppvVar2 = (void **)pvVar3;
  }
  pvVar3 = *(void **)(this + 0x48);
  *(undefined8 *)(this + 0x48) = 0;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


