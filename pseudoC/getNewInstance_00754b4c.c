// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNewInstance
// Entry Point: 00754b4c
// Size: 76 bytes
// Signature: undefined __thiscall getNewInstance(GenericResourceDescLoader<Script,Script::ScriptDesc> * this, char * param_1, ResourceDesc * param_2)


/* GenericResourceDescLoader<Script, Script::ScriptDesc>::getNewInstance(char const*, ResourceDesc*)
    */

Script * __thiscall
GenericResourceDescLoader<Script,Script::ScriptDesc>::getNewInstance
          (GenericResourceDescLoader<Script,Script::ScriptDesc> *this,char *param_1,
          ResourceDesc *param_2)

{
  Script *this_00;
  
  this_00 = (Script *)operator_new(0x60);
                    /* try { // try from 00754b78 to 00754b83 has its CatchHandler @ 00754b98 */
  Script::Script(this_00,param_1,*(uint *)(this + 8),(ScriptDesc *)param_2);
  return this_00;
}


