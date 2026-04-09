// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_49
// Entry Point: 00babf80
// Size: 348 bytes
// Signature: undefined _INIT_49(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_49(void)

{
  _DAT_0211dc78 = 0;
  _DAT_0211dc80 = 0;
  _DAT_0211dc88 = 0;
  DAT_0211dcc5 = 0;
                    /* try { // try from 00babfa8 to 00babfb3 has its CatchHandler @ 00bac0dc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(&DAT_0211dc78);
  _DAT_0211dc90 = 0x1531;
  _DAT_0211dcb4 = 0x453b8000;
  DAT_0211dcc6 = 1;
  uRam000000000211dc9c = 0xc53b800000000000;
  _DAT_0211dc94 = 0xc11cf5c300000000;
  _DAT_0211dcc0 = 3;
  DAT_0211dcc4 = 0;
  _DAT_0211dcb8 = 0x3c88872300000001;
  uRam000000000211dcac = 0x453b8000453b8000;
  _DAT_0211dca4 = 0xc53b8000c2480000;
  _DAT_0211dcc7 = 0x101;
  DAT_0211dcc9 = 0;
  _DAT_0211dcd0 = 0;
  Bt2PhysicsContextManager::s_physicsContextManager = 0;
  __cxa_atexit(Bt2PhysicsContextManager::~Bt2PhysicsContextManager,
               &Bt2PhysicsContextManager::s_physicsContextManager,&PTR_LOOP_00fd8de0);
  DAT_0211dcf0 = 0;
  DAT_0211dce8 = 0;
  Bt2PhysicsContextManager::s_collisionTimeMap_Bg = &DAT_0211dce8;
  __cxa_atexit(FUN_00baaae4,&Bt2PhysicsContextManager::s_collisionTimeMap_Bg,&PTR_LOOP_00fd8de0);
  Mutex::Mutex((Mutex *)Bt2PhysicsContextManager::s_collisionTimeMap_Fg_Mutex,true);
  __cxa_atexit(Mutex::~Mutex,Bt2PhysicsContextManager::s_collisionTimeMap_Fg_Mutex,
               &PTR_LOOP_00fd8de0);
  DAT_0211dd30 = 0;
  DAT_0211dd28 = 0;
  Bt2PhysicsContextManager::s_collisionTimeMap_Fg = &DAT_0211dd28;
  __cxa_atexit(FUN_00baaae4,&Bt2PhysicsContextManager::s_collisionTimeMap_Fg,&PTR_LOOP_00fd8de0);
  _DAT_0211dd50 = 0;
  DAT_0211dd48 = 0;
  Bt2PhysicsContextManager::s_collisionTimeMap_Readable = &DAT_0211dd48;
  __cxa_atexit(FUN_00baaae4,&Bt2PhysicsContextManager::s_collisionTimeMap_Readable,
               &PTR_LOOP_00fd8de0);
  return;
}


