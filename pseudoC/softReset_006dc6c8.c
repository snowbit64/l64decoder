// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: softReset
// Entry Point: 006dc6c8
// Size: 776 bytes
// Signature: undefined softReset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::softReset() */

void EngineApplication::softReset(void)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  EngineApplication *in_x0;
  long lVar5;
  ulong uVar6;
  I3DStreamingManager *this;
  ResourceManager *pRVar7;
  ScriptSystemManager *this_00;
  long lVar8;
  TransformGroup *this_01;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  Renderer *this_02;
  bool abStack_64 [4];
  undefined8 local_60;
  undefined7 uStack_58;
  undefined uStack_51;
  undefined7 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = EngineManager::getInstance();
  uVar6 = (**(code **)(**(long **)(in_x0 + 0x170) + 0xa8))();
  ScenegraphPhysicsContextManager::getInstance();
  ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::cancelAllPendingOperations();
  EngineManager::softReset();
  this = (I3DStreamingManager *)I3DStreamingManager::getInstance();
  I3DStreamingManager::cancelAllI3DLoadTasks(this,true,true);
  StreamManager::getInstance();
  StreamManager::cancelAllStreamQueues();
  if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance), iVar4 != 0)
     ) {
                    /* try { // try from 006dc994 to 006dc99f has its CatchHandler @ 006dc9d0 */
    InstancedGeometryManager::InstancedGeometryManager
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
    __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                 InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
  }
  InstancedGeometryManager::clean();
  MasterServerManager::getInstance();
  MasterServerManager::term();
  bVar2 = (bool)GenericMpManager::getInstance();
  GenericMpManager::cleanUpGameSessions(bVar2);
  uVar3 = ENetNetworkManager::getInstance();
  ENetNetworkManager::shutdown(uVar3,'\0');
  AdsBrockerManager::getInstance();
  AdsBrockerManager::reset();
  Renderer::setRootNode(*(Renderer **)(lVar5 + 0xb8),(TransformGroup *)0x0);
  GameScriptBinding::term();
  EngineScriptBinding::term();
  releaseEntities();
  ScriptSystemManager::getInstance();
  ScriptSystemManager::destroyCurrentScriptSystem();
  pRVar7 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::deleteAllStaticDeleteResourcesOfType(pRVar7,0);
  this_00 = (ScriptSystemManager *)ScriptSystemManager::getInstance();
  lVar8 = ScriptSystemManager::createScriptSystem(this_00,*(uint *)(in_x0 + 0x34c));
  if (lVar8 != 0) {
    EngineScriptBinding::init();
    GameScriptBinding::init(in_x0);
    this_02 = *(Renderer **)(lVar5 + 0xb8);
    this_01 = (TransformGroup *)operator_new(0x158);
                    /* try { // try from 006dc7d8 to 006dc7e3 has its CatchHandler @ 006dc9e8 */
    TransformGroup::TransformGroup(this_01,"RootNode");
    Renderer::setRootNode(this_02,this_01);
    initCamera();
    initOverlay();
    if ((uVar6 & 1) != 0) {
      (**(code **)(**(long **)(in_x0 + 0x170) + 0xb0))();
    }
    initLoadingScreen(in_x0,false);
    uVar6 = (**(code **)(**(long **)(in_x0 + 0x170) + 0xa8))();
    uStack_58 = 0x4fd3cf0e7ae7d3;
    local_60 = 0x418f93296bfac064;
    uStack_51 = 0xc0;
    uStack_50 = 0xa14389d05464e7;
    lVar5 = 1;
    do {
      uVar11 = (uint)lVar5;
      uVar3 = (uVar11 & 0xff) * 0x25 >> 8;
      *(byte *)((long)&local_60 + lVar5) =
           (&UNK_00516bcc)
           [(ulong)(uVar11 + (uVar3 + ((uVar11 - uVar3 & 0xfe) >> 1) >> 2) * -7) & 0xff] ^
           *(byte *)((long)&local_60 + lVar5);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x17);
    pRVar7 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::getStaticDelete
              (pRVar7,(char *)&local_60,0,(ResourceDesc *)0x0,1,true,abStack_64);
    uVar9 = initScript(in_x0,true);
    if ((uVar9 & 1) != 0) {
      deinitLoadingScreen();
      if (*(long **)(in_x0 + 0x278) != (long *)0x0) {
        (**(code **)(**(long **)(in_x0 + 0x278) + 8))();
      }
      *(undefined8 *)(in_x0 + 0x278) = 0;
      if (*(long **)(in_x0 + 0x270) != (long *)0x0) {
        (**(code **)(**(long **)(in_x0 + 0x270) + 8))();
      }
      *(undefined8 *)(in_x0 + 0x270) = 0;
      if (*(long **)(in_x0 + 600) != (long *)0x0) {
        (**(code **)(**(long **)(in_x0 + 600) + 8))();
      }
      *(undefined8 *)(in_x0 + 600) = 0;
      if ((uVar6 & 1) != 0) {
        (**(code **)(**(long **)(in_x0 + 0x170) + 0xb0))();
      }
      uVar10 = 1;
      goto LAB_006dc95c;
    }
  }
  if ((uVar6 & 1) != 0) {
    (**(code **)(**(long **)(in_x0 + 0x170) + 0xb0))();
  }
  uVar10 = 0;
LAB_006dc95c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


