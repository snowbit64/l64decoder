// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LuauScriptSystem
// Entry Point: 00bb67c4
// Size: 144 bytes
// Signature: undefined __thiscall ~LuauScriptSystem(LuauScriptSystem * this)


/* LuauScriptSystem::~LuauScriptSystem() */

void __thiscall LuauScriptSystem::~LuauScriptSystem(LuauScriptSystem *this)

{
  LuaScriptProfiler *this_00;
  
                    /* try { // try from 00bb67dc to 00bb6823 has its CatchHandler @ 00bb6854 */
  Thread::cancel();
  Event::post();
  Thread::join();
  this_00 = *(LuaScriptProfiler **)(this + 0x110);
  if (this_00 != (LuaScriptProfiler *)0x0) {
    LuaScriptProfiler::~LuaScriptProfiler(this_00);
    operator_delete(this_00);
  }
  m_errFuncRef = 0;
  lua_close(*(lua_State **)(this + 8));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>,std::__ndk1::__map_value_compare<Value::ClassTypeObject*,std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>,std::__ndk1::less<Value::ClassTypeObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>>>
  ::destroy((__tree<std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>,std::__ndk1::__map_value_compare<Value::ClassTypeObject*,std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>,std::__ndk1::less<Value::ClassTypeObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>>>
             *)(this + 0x130),*(__tree_node **)(this + 0x138));
  Event::~Event((Event *)(this + 0xb4));
  Event::~Event((Event *)(this + 0x58));
  Thread::~Thread((Thread *)(this + 0x10));
  return;
}


