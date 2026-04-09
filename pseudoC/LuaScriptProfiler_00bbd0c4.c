// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LuaScriptProfiler
// Entry Point: 00bbd0c4
// Size: 148 bytes
// Signature: undefined __thiscall LuaScriptProfiler(LuaScriptProfiler * this, lua_State * param_1)


/* LuaScriptProfiler::LuaScriptProfiler(lua_State*) */

void __thiscall LuaScriptProfiler::LuaScriptProfiler(LuaScriptProfiler *this,lua_State *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(LuaScriptProfiler **)(this + 8) = this + 0x10;
  this[1] = (LuaScriptProfiler)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(lua_State **)(this + 0x20) = param_1;
                    /* try { // try from 00bbd0fc to 00bbd103 has its CatchHandler @ 00bbd178 */
  Thread::Thread((Thread *)(this + 0x28));
                    /* try { // try from 00bbd108 to 00bbd117 has its CatchHandler @ 00bbd168 */
  Event::Event((Event *)(this + 0x70),false,false);
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *this = (LuaScriptProfiler)0x0;
  *(undefined2 *)(this + 2) = 1;
  s_profilerInstance = this;
                    /* try { // try from 00bbd138 to 00bbd13f has its CatchHandler @ 00bbd158 */
  uVar1 = lua_callbacks(param_1);
  *(undefined8 *)(this + 0xe8) = uVar1;
  return;
}


