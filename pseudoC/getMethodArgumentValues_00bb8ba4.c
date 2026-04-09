// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMethodArgumentValues
// Entry Point: 00bb8ba4
// Size: 208 bytes
// Signature: undefined __thiscall getMethodArgumentValues(LuauScriptSystem * this, void * param_1, char * param_2, Type param_3, Value * param_4, uint param_5, Type * param_6, Value * param_7)


/* LuauScriptSystem::getMethodArgumentValues(void*, char const*, Value::Type, Value&, unsigned int,
   Value::Type const*, Value*) */

void __thiscall
LuauScriptSystem::getMethodArgumentValues
          (LuauScriptSystem *this,void *param_1,char *param_2,Type param_3,Value *param_4,
          uint param_5,Type *param_6,Value *param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  Type local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_5c = param_3;
  uVar2 = getLuaValues(this,(lua_State *)param_1,1,param_2,1,&local_5c,param_4);
  if ((uVar2 & 1) != 0) {
    uVar2 = getLuaValues(this,(lua_State *)param_1,2,param_2,param_5,param_6,param_7);
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      goto LAB_00bb8c44;
    }
    deleteValue(this,param_4);
  }
  uVar3 = 0;
LAB_00bb8c44:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


