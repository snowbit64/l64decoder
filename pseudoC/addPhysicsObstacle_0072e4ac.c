// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPhysicsObstacle
// Entry Point: 0072e4ac
// Size: 708 bytes
// Signature: undefined __thiscall addPhysicsObstacle(VehicleNavigationMapGenerator * this, TransformGroup * param_1, Vector3 * param_2, Vector3 * param_3, float param_4, uint param_5)


/* VehicleNavigationMapGenerator::addPhysicsObstacle(TransformGroup*, Vector3 const&, Vector3
   const&, float, unsigned int) */

void __thiscall
VehicleNavigationMapGenerator::addPhysicsObstacle
          (VehicleNavigationMapGenerator *this,TransformGroup *param_1,Vector3 *param_2,
          Vector3 *param_3,float param_4,uint param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *this_00;
  void *__dest;
  char *pcVar6;
  undefined8 uVar7;
  void *__src;
  ulong __n;
  
  if ((((*(float *)param_3 == 0.0) && (*(float *)(param_3 + 4) == 0.0)) &&
      (*(float *)(param_3 + 8) == 0.0)) &&
     (lVar5 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar5 + 8) >> 3 & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 0072e6e0 to 0072e6eb has its CatchHandler @ 0072e774 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar6 = 
    "Error while adding physics obstacles: zero half extent is only allowed for rigid body transforms\n"
    ;
  }
  else {
    if ((param_4 <= 0.0) ||
       (lVar5 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar5 + 8) >> 3 & 1) != 0)) {
      this_00 = (undefined8 *)operator_new(0x48);
      this_00[4] = *(undefined8 *)param_2;
      uVar3 = *(undefined4 *)(param_2 + 8);
      this_00[2] = this;
      this_00[3] = param_1;
      uVar7 = *(undefined8 *)param_3;
      *(float *)((long)this_00 + 0x3c) = param_4;
      *(undefined2 *)(this_00 + 7) = 0;
      *(undefined4 *)(this_00 + 5) = uVar3;
      *(undefined8 *)((long)this_00 + 0x2c) = uVar7;
      *this_00 = &PTR__PhysicsObstacle_00fda8c8;
      this_00[1] = 0;
      uVar3 = *(undefined4 *)(param_3 + 8);
      *(undefined *)(this_00 + 8) = 1;
      *(undefined4 *)((long)this_00 + 0x34) = uVar3;
      if (0xe < param_5) {
        param_5 = 0xf;
      }
      *(uint *)((long)this_00 + 0x44) = param_5;
                    /* try { // try from 0072e5d4 to 0072e5df has its CatchHandler @ 0072e78c */
      ScenegraphNode::addWorldTransformationDirtyListener
                ((ScenegraphNode *)param_1,(WorldTransformationDirtyListener *)this_00);
      puVar2 = *(undefined8 **)(this + 400);
      if (puVar2 == *(undefined8 **)(this + 0x198)) {
        __src = *(void **)(this + 0x188);
        __n = (long)puVar2 - (long)__src;
        uVar1 = ((long)__n >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)__n >> 2)) {
          uVar1 = (long)__n >> 2;
        }
        if (0x7ffffffffffffff7 < __n) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = operator_new(uVar1 << 3);
        }
        puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
        *puVar2 = this_00;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *(void **)(this + 0x188) = __dest;
        *(undefined8 **)(this + 400) = puVar2 + 1;
        *(void **)(this + 0x198) = (void *)((long)__dest + uVar1 * 8);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *puVar2 = this_00;
        *(undefined8 **)(this + 400) = puVar2 + 1;
      }
      if ((*(DynamicAvoidance **)(this + 0x140))[0x88] != (DynamicAvoidance)0x0) {
        return;
      }
      PhysicsObstacle::updateOrCreateObstacle
                ((PhysicsObstacle *)this_00,*(DynamicAvoidance **)(this + 0x140));
      return;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 0072e72c to 0072e737 has its CatchHandler @ 0072e770 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar6 = 
    "Error while adding physics obstacles: nonzero brake acceleration is only allowed for rigid body transforms\n"
    ;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,pcVar6);
  return;
}


