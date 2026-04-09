// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteInvocationArgValue
// Entry Point: 006ea740
// Size: 208 bytes
// Signature: undefined __cdecl deleteInvocationArgValue(Value * param_1)


/* ReflectionUtil::deleteInvocationArgValue(Value const&) */

void ReflectionUtil::deleteInvocationArgValue(Value *param_1)

{
  LuauScriptSystem *this;
  long lVar1;
  ulong uVar2;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 8:
    if (*(long *)param_1 != 0) {
      ScriptSystemManager::getInstance();
      this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::destroyObjectRef(this,*(void **)param_1);
      return;
    }
    break;
  case 9:
    if (1 < *(uint3 *)(param_1 + 0xc)) {
      lVar1 = 0;
      uVar2 = 0;
      do {
        deleteInvocationArgValue((Value *)(*(long *)param_1 + lVar1));
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar2 < *(uint3 *)(param_1 + 0xc) >> 1);
    }
  case 0xb:
  case 0xc:
    if (*(void **)param_1 != (void *)0x0) {
      operator_delete__(*(void **)param_1);
      return;
    }
  }
  return;
}


