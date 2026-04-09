// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LuauScriptSystem
// Entry Point: 00bb5ff8
// Size: 972 bytes
// Signature: undefined __thiscall LuauScriptSystem(LuauScriptSystem * this, uint param_1)


/* LuauScriptSystem::LuauScriptSystem(unsigned int) */

void __thiscall LuauScriptSystem::LuauScriptSystem(LuauScriptSystem *this,uint param_1)

{
  long lVar1;
  lua_State *plVar2;
  LuaScriptProfiler *this_00;
  long lVar3;
  code *pcVar4;
  char **ppcVar5;
  char *local_c0;
  code *pcStack_b8;
  char *pcStack_b0;
  _func_int_lua_State_ptr *local_a8;
  char *local_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  char *local_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  ppcVar5 = &local_c0;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Thread::Thread((Thread *)(this + 0x10));
                    /* try { // try from 00bb6038 to 00bb6047 has its CatchHandler @ 00bb63e0 */
  Event::Event((Event *)(this + 0x58),false,false);
                    /* try { // try from 00bb604c to 00bb605b has its CatchHandler @ 00bb63d8 */
  Event::Event((Event *)(this + 0xb4),false,false);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(uint *)(this + 0x128) = param_1;
  *(LuauScriptSystem **)(this + 0x130) = this + 0x138;
                    /* try { // try from 00bb606c to 00bb606f has its CatchHandler @ 00bb63d4 */
  plVar2 = (lua_State *)luaL_newstate();
  pcStack_98 = luaopen_string;
  local_a0 = "string";
  pcStack_88 = luaopen_math;
  puStack_90 = &DAT_0050e3df;
  pcStack_78 = luaopen_debug;
  local_80 = "debug";
  uStack_68 = 0;
  uStack_70 = 0;
  pcVar4 = luaopen_base;
  *(lua_State **)(this + 8) = plVar2;
  pcStack_b8 = luaopen_base;
  local_c0 = "";
  local_a8 = luaopen_table;
  pcStack_b0 = "table";
  while( true ) {
                    /* try { // try from 00bb60a4 to 00bb60cb has its CatchHandler @ 00bb63ec */
    lua_pushcclosurek(plVar2,pcVar4,*ppcVar5,0,(_func_int_lua_State_ptr_int *)0x0);
    lua_pushstring(*(lua_State **)(this + 8),*ppcVar5);
    lua_call(*(lua_State **)(this + 8),1,0);
    pcVar4 = (code *)ppcVar5[3];
    if (pcVar4 == (_func_int_lua_State_ptr *)0x0) break;
    plVar2 = *(lua_State **)(this + 8);
    ppcVar5 = ppcVar5 + 2;
  }
                    /* try { // try from 00bb60e4 to 00bb6113 has its CatchHandler @ 00bb63e8 */
  lua_pushvalue(*(lua_State **)(this + 8),-0x2712);
  luaL_register(*(lua_State **)(this + 8),(char *)0x0,(luaL_Reg *)&PTR_s_loadstring_00feb5d0);
  lua_settop(*(lua_State **)(this + 8),-2);
  this_00 = (LuaScriptProfiler *)operator_new(0xf0);
                    /* try { // try from 00bb611c to 00bb611f has its CatchHandler @ 00bb63c4 */
  LuaScriptProfiler::LuaScriptProfiler(this_00,*(lua_State **)(this + 8));
  plVar2 = *(lua_State **)(this + 8);
  *(LuaScriptProfiler **)(this + 0x110) = this_00;
                    /* try { // try from 00bb6128 to 00bb637b has its CatchHandler @ 00bb63e8 */
  lua_createtable(plVar2,0,0);
  lua_pushcclosurek(plVar2,FUN_00bbb614,"ZoneBegin",0,(_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(plVar2,-2,"ZoneBegin");
  lua_pushcclosurek(plVar2,FUN_00bbb614,"ZoneBeginN",0,(_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(plVar2,-2,"ZoneBeginN");
  lua_pushcclosurek(plVar2,FUN_00bbb614,"ZoneBeginS",0,(_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(plVar2,-2,"ZoneBeginS");
  lua_pushcclosurek(plVar2,FUN_00bbb614,"ZoneBeginNS",0,(_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(plVar2,-2,"ZoneBeginNS");
  lua_pushcclosurek(plVar2,FUN_00bbb614,"ZoneEnd",0,(_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(plVar2,-2,"ZoneEnd");
  lua_pushcclosurek(plVar2,FUN_00bbb614,"ZoneText",0,(_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(plVar2,-2,"ZoneText");
  lua_pushcclosurek(plVar2,FUN_00bbb614,"ZoneName",0,(_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(plVar2,-2,"ZoneName");
  lua_pushcclosurek(plVar2,FUN_00bbb614,"Message",0,(_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(plVar2,-2,"Message");
  lua_setfield(plVar2,-0x2712,"g_remoteProfiler");
  *(undefined2 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  DAT_0211dd6c = DAT_0211dd6c + 1;
  *(int *)this = DAT_0211dd6c;
  Thread::start((Thread *)(this + 0x10),gcThreadFunc,this,0xffffffff,"GIANTS Lua GC Thread",2,
                0x80000);
  m_errFuncRef = 0;
  lua_pushcclosurek(*(lua_State **)(this + 8),setLuaErrorHandler,"setLuaErrorHandler",0,
                    (_func_int_lua_State_ptr_int *)0x0);
  lua_setfield(*(lua_State **)(this + 8),-0x2712,"setLuaErrorHandler");
  lVar3 = lua_callbacks(*(lua_State **)(this + 8));
  *(code **)(lVar3 + 0x48) = staticHandleDivideByZero;
  s_pCallbackScriptSystem = this;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


