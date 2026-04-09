// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateClassStorageSlots
// Entry Point: 00bba4b4
// Size: 176 bytes
// Signature: undefined updateClassStorageSlots(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::updateClassStorageSlots() */

void LuauScriptSystem::updateClassStorageSlots(void)

{
  bool bVar1;
  LuauScriptSystem *in_x0;
  LuauScriptSystem **ppLVar2;
  LuauScriptSystem *pLVar3;
  LuauScriptSystem **ppLVar4;
  
  checkYieldState();
  ppLVar4 = *(LuauScriptSystem ***)(in_x0 + 0x130);
  while (ppLVar4 != (LuauScriptSystem **)(in_x0 + 0x138)) {
    updateClassStorageSlot(in_x0,(ClassTypeObject *)ppLVar4[4],(ClassTypeObject *)(ppLVar4 + 5));
    ppLVar2 = (LuauScriptSystem **)ppLVar4[1];
    if ((LuauScriptSystem **)ppLVar4[1] == (LuauScriptSystem **)0x0) {
      ppLVar2 = ppLVar4 + 2;
      bVar1 = *(LuauScriptSystem ***)*ppLVar2 != ppLVar4;
      ppLVar4 = (LuauScriptSystem **)*ppLVar2;
      if (bVar1) {
        do {
          pLVar3 = *ppLVar2;
          ppLVar2 = (LuauScriptSystem **)(pLVar3 + 0x10);
          ppLVar4 = (LuauScriptSystem **)*ppLVar2;
        } while (*ppLVar4 != pLVar3);
      }
    }
    else {
      do {
        ppLVar4 = ppLVar2;
        ppLVar2 = (LuauScriptSystem **)*ppLVar4;
      } while ((LuauScriptSystem **)*ppLVar4 != (LuauScriptSystem **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>,std::__ndk1::__map_value_compare<Value::ClassTypeObject*,std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>,std::__ndk1::less<Value::ClassTypeObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>>>
  ::destroy((__tree<std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>,std::__ndk1::__map_value_compare<Value::ClassTypeObject*,std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>,std::__ndk1::less<Value::ClassTypeObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>>>
             *)(in_x0 + 0x130),*(__tree_node **)(in_x0 + 0x138));
  *(undefined8 *)(in_x0 + 0x138) = 0;
  *(undefined8 *)(in_x0 + 0x140) = 0;
  *(LuauScriptSystem **)(in_x0 + 0x130) = in_x0 + 0x138;
  return;
}


