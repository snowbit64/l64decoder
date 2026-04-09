// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onRenderWindowRecreated
// Entry Point: 0075019c
// Size: 28 bytes
// Signature: undefined __thiscall onRenderWindowRecreated(EngineManager * this, IRenderWindow * param_1)


/* EngineManager::onRenderWindowRecreated(IRenderWindow*) */

void __thiscall EngineManager::onRenderWindowRecreated(EngineManager *this,IRenderWindow *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  *(IRenderWindow **)(this + 200) = param_1;
                    /* WARNING: Could not recover jumptable at 0x007501b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0xa0))(param_1,this + 0x20);
  return;
}


