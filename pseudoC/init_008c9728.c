// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 008c9728
// Size: 368 bytes
// Signature: undefined __thiscall init(FillPlaneGeometry * this, GsShape * param_1)


/* FillPlaneGeometry::init(GsShape*) */

undefined8 __thiscall FillPlaneGeometry::init(FillPlaneGeometry *this,GsShape *param_1)

{
  int iVar1;
  long lVar2;
  IndexedTriangleSet *pIVar3;
  ulong uVar4;
  long *plVar5;
  BoundingVolume *pBVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x170);
  *(undefined8 *)(this + 0x30) = 0x1400000100;
  if ((lVar7 == 0) || (lVar2 = Geometry::getCollisionProxyMesh(), lVar2 == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008c9818 to 008c9823 has its CatchHandler @ 008c989c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Shape has no geometry data assigned\n");
  }
  else {
    lVar2 = Geometry::getCollisionProxyMesh();
    if ((*(byte *)(lVar2 + 0x8d) & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 008c9860 to 008c986b has its CatchHandler @ 008c9898 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Volume mesh \'%s\' needs to be flagged as CPU mesh.\n",
                         *(undefined8 *)(lVar7 + 0x18));
    }
    else {
      pIVar3 = (IndexedTriangleSet *)Geometry::getCollisionProxyMesh();
      uVar4 = precomputation(this,pIVar3);
      if ((uVar4 & 1) != 0) {
        plVar5 = (long *)Geometry::getBoundingVolume();
        pBVar6 = (BoundingVolume *)(**(code **)(*plVar5 + 0x58))();
        Geometry::setBoundingVolume((Geometry *)this,pBVar6);
        return 1;
      }
    }
  }
  return 0;
}


