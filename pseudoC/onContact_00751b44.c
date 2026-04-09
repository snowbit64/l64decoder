// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onContact
// Entry Point: 00751b44
// Size: 8 bytes
// Signature: undefined __thiscall onContact(EngineManager * this, TransformGroup * param_1, TransformGroup * param_2, uint param_3, Vector3 * param_4, Vector3 * param_5, Vector3 * param_6)


/* non-virtual thunk to EngineManager::onContact(TransformGroup*, TransformGroup*, unsigned int,
   Vector3&, Vector3&, Vector3&) */

void __thiscall
EngineManager::onContact
          (EngineManager *this,TransformGroup *param_1,TransformGroup *param_2,uint param_3,
          Vector3 *param_4,Vector3 *param_5,Vector3 *param_6)

{
  onContact(this + -0x10,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


