// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShadowFocusBox
// Entry Point: 00a15fb4
// Size: 168 bytes
// Signature: undefined __thiscall setShadowFocusBox(Renderer * this, GsShape * param_1)


/* Renderer::setShadowFocusBox(GsShape*) */

void __thiscall Renderer::setShadowFocusBox(Renderer *this,GsShape *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(GsShape **)(this + 0x20) != param_1) &&
     (*(GsShape **)(this + 0x20) = param_1, param_1 != (GsShape *)0x0)) {
    Geometry::getCollisionProxyMesh();
    lVar2 = TriangleSet::getPositions();
    if (lVar2 == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00a16024 to 00a1602f has its CatchHandler @ 00a1605c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "WARNING: shadow focus box for current vehicle is not marked as a CPU mesh\n"
                        );
    }
  }
  return;
}


